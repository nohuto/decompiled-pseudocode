/*
 * XREFs of MiReserveUserMemoryInsertVad @ 0x14095BBAC
 * Callers:
 *     MiReserveUserMemory @ 0x14095B5DC (MiReserveUserMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiLockVad @ 0x14027EBC0 (MiLockVad.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiInsertVad @ 0x140316000 (MiInsertVad.c)
 *     MiVadPureReserve @ 0x1403173B0 (MiVadPureReserve.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiUpdateVadStartVpn @ 0x14049B0E4 (MiUpdateVadStartVpn.c)
 *     MiFindPlaceholderVadToReplace @ 0x1404CC098 (MiFindPlaceholderVadToReplace.c)
 *     MiAdvanceVadHint @ 0x14095CE00 (MiAdvanceVadHint.c)
 *     MiSelectUserAddress @ 0x1409C4FA0 (MiSelectUserAddress.c)
 *     MiInsertVadCharges @ 0x1409C5DC0 (MiInsertVadCharges.c)
 *     MiIsVaRangeAvailable @ 0x1409CE424 (MiIsVaRangeAvailable.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140AEA978 (MiPreparePlaceholderVadReplacement.c)
 *     MiLogReserveVaFailed @ 0x140B3D6D0 (MiLogReserveVaFailed.c)
 */

__int64 __fastcall MiReserveUserMemoryInsertVad(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG_PTR v2; // rsi
  ULONG_PTR v4; // r15
  __int64 v5; // r12
  int v6; // r8d
  int v7; // r14d
  unsigned __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r13
  bool v13; // zf
  __int64 result; // rax
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 VadFlags; // rax
  struct _KLOCK_ENTRIES *v18; // r9
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // r15
  __int64 PlaceholderVadToReplace; // rax
  int v23; // ecx
  unsigned __int64 v24; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp+10h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+18h] BYREF

  v1 = *a1;
  v2 = a1[4];
  LODWORD(v24) = 0;
  v4 = 0LL;
  v25 = 0LL;
  v5 = 0LL;
  v26 = 0LL;
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
                                  (int *)&v24);
      v4 = PlaceholderVadToReplace;
      if ( !PlaceholderVadToReplace )
        return (unsigned int)v24;
      a1[5] = PlaceholderVadToReplace;
    }
    else if ( !(unsigned int)MiIsVaRangeAvailable(
                               *(_QWORD *)(v1 + 88),
                               *(_QWORD *)v1,
                               *(_QWORD *)(v1 + 24),
                               *(_QWORD *)v1,
                               *(_QWORD *)(v1 + 8)) )
    {
      return 3221225496LL;
    }
    v8 = *(_QWORD *)v1;
    goto LABEL_6;
  }
  if ( MiVadPureReserve(v2)
    && ((*(unsigned int *)(v2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 32)) < 0x7FFFFFFFDLL
     || (*(unsigned int *)(v2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 32)) == 0x7FFFFFFFELL) )
  {
    v6 |= 4u;
  }
  v7 = MiSelectUserAddress(
         *(_DWORD *)(v1 + 40),
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 8),
         *(_QWORD *)(v1 + 24),
         *(_QWORD *)(v1 + 16),
         0LL,
         *((_DWORD *)a1 + 4),
         v6,
         (__int64)&v26,
         (__int64)&v25);
  if ( v7 >= 0 )
  {
    v8 = v25;
    v5 = v26;
LABEL_6:
    a1[6] = v8;
    v9 = v8 >> 12;
    MiUpdateVadStartVpn(v2, v9);
    v12 = v11 >> 12;
    *(_DWORD *)(v2 + 28) = v11 >> 12;
    *(_BYTE *)(v2 + 33) = v11 >> 44;
    v13 = (*(_BYTE *)(v1 + 112) & 1) == 0;
    v24 = v11 >> 12;
    if ( !v13 )
      return 3221225659LL;
    result = MiInsertVadCharges(v10, *(_QWORD *)(v1 + 88));
    if ( (int)result >= 0 )
    {
      if ( v4 )
      {
        *((_DWORD *)a1 + 5) |= 1u;
        MiPreparePlaceholderVadReplacement(v4);
        v19 = (AutoBoost *)KeAbPreAcquire(v2 + 40, 0LL, 0LL, v18);
        v21 = v19;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 40), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 40), v19, v2 + 40);
        if ( v21 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v21, v20);
          else
            *((_BYTE *)v21 + 10) = 1;
        }
        v12 = v24;
      }
      else
      {
        MiLockVad((__int64)KeGetCurrentThread(), v2, v15, v16);
      }
      MiInsertVad(v2, *(_QWORD *)(v1 + 88), 0);
      if ( v5 )
        MiAdvanceVadHint(v9, v12, v5);
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
  if ( stru_140E36558.FirstArgument
    && *(_DWORD *)stru_140E36558.FirstArgument
    && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 0x400000002000LL) )
  {
    MiLogReserveVaFailed(v23, *(_QWORD *)(v1 + 24), *(_QWORD *)(v1 + 16), *(_QWORD *)v1, *(_QWORD *)(v1 + 8));
  }
  return (unsigned int)v7;
}
