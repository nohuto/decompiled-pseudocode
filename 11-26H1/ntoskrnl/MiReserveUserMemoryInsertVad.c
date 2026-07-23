/*
 * XREFs of MiReserveUserMemoryInsertVad @ 0x140A0146C
 * Callers:
 *     MiReserveUserMemory @ 0x140A00E9C (MiReserveUserMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiUpdateVadStartVpn @ 0x140494C34 (MiUpdateVadStartVpn.c)
 *     MiFindPlaceholderVadToReplace @ 0x1404C5AC8 (MiFindPlaceholderVadToReplace.c)
 *     MiSelectUserAddress @ 0x140995F80 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiIsVaRangeAvailable @ 0x14099F404 (MiIsVaRangeAvailable.c)
 *     MiAdvanceVadHint @ 0x140A026C0 (MiAdvanceVadHint.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140AED468 (MiPreparePlaceholderVadReplacement.c)
 *     MiLogReserveVaFailed @ 0x140B3F7A0 (MiLogReserveVaFailed.c)
 */

__int64 __fastcall MiReserveUserMemoryInsertVad(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG_PTR v2; // rsi
  ULONG_PTR v4; // r15
  __int64 v5; // r12
  int v6; // r8d
  int v7; // eax
  unsigned int v8; // r14d
  unsigned __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r13
  bool v14; // zf
  __int64 result; // rax
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  __int64 VadFlags; // rax
  struct _KLOCK_ENTRIES *v19; // r9
  AutoBoost *v20; // rax
  void *v21; // rdx
  AutoBoost *v22; // r15
  __int64 PlaceholderVadToReplace; // rax
  int v24; // ecx
  unsigned __int64 v25; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+98h] [rbp+10h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+18h] BYREF

  v1 = *a1;
  v2 = a1[4];
  LODWORD(v25) = 0;
  v4 = 0LL;
  v26 = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(v1 + 88) + 500LL) & 0x20) != 0 )
    return 3221225738LL;
  if ( (*((_DWORD *)a1 + 5) & 8) != 0 )
  {
    if ( (*(_DWORD *)(v1 + 60) & 0x4000000) != 0 )
    {
      PlaceholderVadToReplace = MiFindPlaceholderVadToReplace(
                                  *(_QWORD *)v1,
                                  *(_QWORD *)(v1 + 8),
                                  *(_BYTE *)(v1 + 53),
                                  (int *)&v25);
      v4 = PlaceholderVadToReplace;
      if ( !PlaceholderVadToReplace )
        return (unsigned int)v25;
      a1[5] = PlaceholderVadToReplace;
    }
    else if ( !MiIsVaRangeAvailable(
                 *(_QWORD *)(v1 + 88),
                 *(_QWORD *)v1,
                 *(_QWORD *)(v1 + 24),
                 *(_QWORD *)v1,
                 *(_QWORD *)(v1 + 8)) )
    {
      return 3221225496LL;
    }
    v9 = *(_QWORD *)v1;
    goto LABEL_7;
  }
  if ( MiVadPureReserve(v2)
    && ((*(unsigned int *)(v2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 32)) < 0x7FFFFFFFDLL
     || (*(unsigned int *)(v2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 32)) == 0x7FFFFFFFELL) )
  {
    v7 = MiSelectUserAddress(
           *(_DWORD *)(v1 + 40),
           *(_QWORD *)v1,
           *(_QWORD *)(v1 + 8),
           *(_QWORD *)(v1 + 24),
           *(_QWORD *)(v1 + 16),
           0LL,
           *((_DWORD *)a1 + 4),
           v6 | 4u,
           &v27,
           &v26);
  }
  else
  {
    v7 = MiSelectUserAddress(
           *(_DWORD *)(v1 + 40),
           *(_QWORD *)v1,
           *(_QWORD *)(v1 + 8),
           *(_QWORD *)(v1 + 24),
           *(_QWORD *)(v1 + 16),
           0LL,
           *((_DWORD *)a1 + 4),
           v6,
           &v27,
           &v26);
  }
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = v26;
    v5 = v27;
LABEL_7:
    a1[6] = v9;
    v10 = v9 >> 12;
    MiUpdateVadStartVpn(v2, v10);
    v13 = v12 >> 12;
    *(_DWORD *)(v2 + 28) = v12 >> 12;
    *(_BYTE *)(v2 + 33) = v12 >> 44;
    v14 = (*(_BYTE *)(v1 + 112) & 1) == 0;
    v25 = v12 >> 12;
    if ( !v14 )
      return 3221225659LL;
    result = MiInsertVadCharges(v11, *(_QWORD *)(v1 + 88));
    if ( (int)result >= 0 )
    {
      if ( v4 )
      {
        *((_DWORD *)a1 + 5) |= 1u;
        MiPreparePlaceholderVadReplacement(v4);
        v20 = (AutoBoost *)KeAbPreAcquire(v2 + 40, 0LL, 0LL, v19);
        v22 = v20;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 40), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 40), v20, v2 + 40);
        if ( v22 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v22, v21);
          else
            *((_BYTE *)v22 + 10) = 1;
        }
        v13 = v25;
      }
      else
      {
        MiLockVad((__int64)KeGetCurrentThread(), v2, v16, v17);
      }
      MiInsertVad(v2, *(_QWORD *)(v1 + 88), 0);
      if ( v5 )
        MiAdvanceVadHint(v10, v13);
      VadFlags = MiReadVadFlags(v2);
      if ( *(_DWORD *)(v1 + 120)
        || (VadFlags & 0x80000) != 0 && ((VadFlags & 0x200000) != 0 || ((unsigned int)VadFlags & 0x60000) >= 0x40000)
        || *(_QWORD *)(v1 + 72)
        || (VadFlags & 0x1C) == 0xC && (VadFlags & 0x880000) != 0x880000 )
      {
        *((_DWORD *)a1 + 5) |= 0x20u;
      }
      return 0LL;
    }
    return result;
  }
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000002000LL) )
  {
    MiLogReserveVaFailed(v24, *(_QWORD *)(v1 + 24), *(_QWORD *)(v1 + 16), *(_QWORD *)v1, *(_QWORD *)(v1 + 8));
  }
  return v8;
}
