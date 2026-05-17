/*
 * XREFs of RtlpHpLfhPrivateSlotListCompact @ 0x180016B50
 * Callers:
 *     RtlpHpLfhPrivateSlotsCompact @ 0x180016AC0 (RtlpHpLfhPrivateSlotsCompact.c)
 * Callees:
 *     RtlpHpLfhHeatMapQuery @ 0x180016630 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerCompact @ 0x180016790 (RtlpHpLfhOwnerCompact.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800933DC (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180094B78 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpEnvThreadSuspend @ 0x18010C3F0 (RtlpHpEnvThreadSuspend.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtChangeThreadState @ 0x180160250 (NtChangeThreadState.c)
 */

__int64 __fastcall RtlpHpLfhPrivateSlotListCompact(__int64 a1, __int64 a2)
{
  int v3; // r15d
  unsigned int v4; // ecx
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // r9d
  unsigned __int16 v9; // r12
  unsigned __int8 *v10; // r13
  HANDLE v11; // r14
  unsigned __int64 v12; // rbp
  __int64 v13; // rdi
  signed int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  void **TlsExpansionSlots; // rdx
  HANDLE Handle[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+80h] [rbp+8h]
  unsigned __int8 *v23; // [rsp+88h] [rbp+10h] BYREF

  v23 = (unsigned __int8 *)a2;
  v3 = 0;
  v4 = (unsigned __int16)*(_DWORD *)(a1 + 84);
  *(_OWORD *)Handle = 0LL;
  if ( v4 < 0x40 )
  {
    v6 = __readgsqword(8 * v4 + 5248);
    goto LABEL_3;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v6 = (__int64)TlsExpansionSlots[v4 - 64];
LABEL_3:
    if ( v6 )
      goto LABEL_4;
  }
  v6 = RtlpHpLfhThreadDataInitializeSet(a1);
LABEL_4:
  v22 = a2 + 80;
  RtlAcquireSRWLockExclusive(a2 + 80);
  v9 = *(_WORD *)(a2 + 88);
  v10 = v23;
LABEL_5:
  v11 = Handle[0];
  while ( v9 )
  {
    v12 = a1 + ((unsigned __int64)v9 << 6);
    if ( (unsigned __int8 *)(v12 + 16) == v10 + 88 )
      break;
    v9 = *(_WORD *)(v12 + 16);
    if ( (_WORD)v6 == *(_WORD *)(v12 + 4) )
    {
      v13 = v6;
    }
    else
    {
      if ( !v3 )
      {
        v3 = 1;
        RtlAcquireSRWLockExclusive(&RtlpHpEnvThreadSuspendOwnershipLock);
      }
      v15 = *(_QWORD *)a1;
      v16 = *(unsigned int *)(v12 + 20);
      LODWORD(v23) = 0;
      if ( (unsigned int)RtlpHpEnvThreadSuspend(v16, *(_QWORD *)(v15 + 56) + 20LL, Handle, &v23) )
        goto LABEL_5;
      v17 = *(unsigned __int8 *)(a1 + 72);
      v18 = (unsigned __int8)v23 & 0x3F;
      if ( v18 >= v17 )
      {
        if ( v18 == v17 || (_BYTE)v17 == 1 )
          v18 = 0;
        else
          v18 = *(unsigned __int8 *)(v18 - v17 - 1 + *(_QWORD *)(a1 + 64));
      }
      v11 = Handle[0];
      LOWORD(v23) = (((unsigned __int64)v18 << 8) + 1472) >> 6;
      WORD1(v23) = 3;
      HIDWORD(v23) = (unsigned __int8)v18;
      LODWORD(v23) = *(_DWORD *)(v12 + 4);
      v13 = (__int64)v23;
    }
    v14 = RtlpHpLfhHeatMapQuery(a1, a1 + ((unsigned __int64)*(unsigned __int16 *)(v12 + 6) << 6), v10, v8);
    if ( v14 >= 2 )
      RtlpHpLfhOwnerCompact(a1, (unsigned __int8 *)v12, v14);
    else
      RtlpHpLfhPrivateSlotShutdown(a1, v12, v13, 1LL);
    if ( v11 )
    {
      NtChangeThreadState(Handle[1], v11, 1LL, 0LL, 0, 0);
      NtClose(Handle[1]);
      NtClose(v11);
      *(_OWORD *)Handle = 0LL;
      v11 = 0LL;
    }
  }
  if ( v3 )
    RtlReleaseSRWLockExclusive(&RtlpHpEnvThreadSuspendOwnershipLock, v7);
  return RtlReleaseSRWLockExclusive(v22, v7);
}
