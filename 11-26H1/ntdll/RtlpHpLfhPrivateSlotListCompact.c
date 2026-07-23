/*
 * XREFs of RtlpHpLfhPrivateSlotListCompact @ 0x180062280
 * Callers:
 *     RtlpHpLfhPrivateSlotsCompact @ 0x1800621F0 (RtlpHpLfhPrivateSlotsCompact.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhHeatMapQuery @ 0x180061D60 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerCompact @ 0x180061EC0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x18006251C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x180072340 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvThreadSuspend @ 0x18010BF40 (RtlpHpEnvThreadSuspend.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtChangeThreadState @ 0x180160150 (NtChangeThreadState.c)
 */

void __fastcall RtlpHpLfhPrivateSlotListCompact(__int64 a1, __int64 a2)
{
  int v3; // r15d
  unsigned int v4; // ecx
  __int64 v6; // rbx
  int v7; // r9d
  unsigned __int16 v8; // r12
  unsigned __int8 *v9; // r13
  HANDLE v10; // r14
  unsigned __int64 v11; // rbp
  __int64 v12; // rdi
  signed int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  void **TlsExpansionSlots; // rdx
  SIZE_T ExtendedInformationLength; // [rsp+20h] [rbp-58h]
  ULONG64 Reserved; // [rsp+28h] [rbp-50h]
  HANDLE ThreadHandle[9]; // [rsp+30h] [rbp-48h] BYREF
  _RTL_SRWLOCK *v22; // [rsp+80h] [rbp+8h]
  unsigned __int8 *v23; // [rsp+88h] [rbp+10h] BYREF

  v23 = (unsigned __int8 *)a2;
  v3 = 0;
  v4 = (unsigned __int16)*(_DWORD *)(a1 + 84);
  *(_OWORD *)ThreadHandle = 0LL;
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
  v22 = (_RTL_SRWLOCK *)(a2 + 80);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 80));
  v8 = *(_WORD *)(a2 + 88);
  v9 = v23;
LABEL_5:
  v10 = ThreadHandle[0];
  while ( v8 )
  {
    v11 = a1 + ((unsigned __int64)v8 << 6);
    if ( (unsigned __int8 *)(v11 + 16) == v9 + 88 )
      break;
    v8 = *(_WORD *)(v11 + 16);
    if ( (_WORD)v6 == *(_WORD *)(v11 + 4) )
    {
      v12 = v6;
    }
    else
    {
      if ( !v3 )
      {
        v3 = 1;
        RtlAcquireSRWLockExclusive(&RtlpHpEnvThreadSuspendOwnershipLock);
      }
      v14 = *(_QWORD *)a1;
      v15 = *(unsigned int *)(v11 + 20);
      LODWORD(v23) = 0;
      if ( (unsigned int)RtlpHpEnvThreadSuspend(v15, *(_QWORD *)(v14 + 56) + 20LL, ThreadHandle, &v23) )
        goto LABEL_5;
      v16 = *(unsigned __int8 *)(a1 + 72);
      v17 = (unsigned __int8)v23 & 0x3F;
      if ( v17 >= v16 )
      {
        if ( v17 == v16 || (_BYTE)v16 == 1 )
          v17 = 0;
        else
          v17 = *(unsigned __int8 *)(v17 - v16 - 1 + *(_QWORD *)(a1 + 64));
      }
      v10 = ThreadHandle[0];
      LOWORD(v23) = (((unsigned __int64)v17 << 8) + 1472) >> 6;
      WORD1(v23) = 3;
      HIDWORD(v23) = (unsigned __int8)v17;
      LODWORD(v23) = *(_DWORD *)(v11 + 4);
      v12 = (__int64)v23;
    }
    v13 = RtlpHpLfhHeatMapQuery(a1, a1 + ((unsigned __int64)*(unsigned __int16 *)(v11 + 6) << 6), v9, v7);
    if ( v13 >= 2 )
      RtlpHpLfhOwnerCompact(a1, (unsigned __int8 *)v11, v13);
    else
      RtlpHpLfhPrivateSlotShutdown(a1, v11, v12, 1LL);
    if ( v10 )
    {
      LODWORD(Reserved) = 0;
      LODWORD(ExtendedInformationLength) = 0;
      NtChangeThreadState(ThreadHandle[1], v10, ThreadStateChangeResume, 0LL, ExtendedInformationLength, Reserved);
      NtClose(ThreadHandle[1]);
      NtClose(v10);
      *(_OWORD *)ThreadHandle = 0LL;
      v10 = 0LL;
    }
  }
  if ( v3 )
    RtlReleaseSRWLockExclusive(&RtlpHpEnvThreadSuspendOwnershipLock);
  RtlReleaseSRWLockExclusive(v22);
}
