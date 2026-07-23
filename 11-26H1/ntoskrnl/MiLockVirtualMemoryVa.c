/*
 * XREFs of MiLockVirtualMemoryVa @ 0x14031AC40
 * Callers:
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiUpdatePfnPriority @ 0x140298800 (MiUpdatePfnPriority.c)
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     MiUnlockPageTableCharges @ 0x14031AF70 (MiUnlockPageTableCharges.c)
 *     MiReturnResavailToPrcb @ 0x14031B360 (MiReturnResavailToPrcb.c)
 *     MiLockPageAndSetDirty @ 0x14031C814 (MiLockPageAndSetDirty.c)
 *     MiLockPageTablePage @ 0x14031C910 (MiLockPageTablePage.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 */

__int64 __fastcall MiLockVirtualMemoryVa(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r10
  __int64 v8; // r10
  ULONG_PTR v9; // rbp
  ULONG_PTR v10; // r12
  unsigned int v11; // edi
  unsigned __int64 v12; // rax
  __int64 v14; // rax
  int v15; // eax
  unsigned int EffectivePagePriorityThread; // ebx
  int v17; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 104);
  v4 = 0;
  v5 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v2 + 174));
  v6 = a2 << 25 >> 16;
  if ( (MiGetWsleContents(a1, v6) & 0xF) == 8 )
    return 1073741849;
  v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
  v9 = 48 * v8 - 0x220000000000LL;
  if ( *(__int64 *)(v9 + 40) < 0 )
  {
    if ( !(unsigned int)MiLockPageTablePage(48 * v8 - 0x220000000000LL) )
      return (unsigned int)-1073741670;
    v4 = 2;
  }
  v10 = 48 * ((*(_QWORD *)(((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (unsigned int)MiLockPageTablePage(v10) && (v4 |= 1u, (unsigned int)MiChargeResident((ULONG *)v5, 1uLL, 512LL)) )
  {
    v4 |= 4u;
    v14 = *(_QWORD *)(v9 + 16);
    if ( (v14 & 0x400) != 0 )
    {
      if ( *(__int64 *)(v9 + 40) < 0
        && *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) == v5 )
      {
        if ( !(unsigned int)MiChargeCommit((ULONG *)v5, 1uLL, 0) )
        {
          v11 = -1073741523;
          goto LABEL_6;
        }
        v4 |= 8u;
        _InterlockedAdd64((volatile signed __int64 *)(v5 + 23472), 1uLL);
      }
    }
    else if ( (v14 & 8) != 0 )
    {
      MiLockPageAndSetDirty(v9);
    }
    v15 = MiSetVaAgeListEx(v2, v6, 1u, 8u, ~(unsigned __int8)(*(_DWORD *)(a1 + 4) >> 4) & 2 | 1u);
    if ( !v15 )
    {
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread());
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v17);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      MiUpdatePfnPriority(v9, EffectivePagePriorityThread, 0);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)((*(_QWORD *)(a1 + 144) >> 3) + *(_QWORD *)(a1 + 136)) |= 1 << (*(_BYTE *)(a1 + 144) & 7);
      return 0;
    }
    v11 = (v15 & 1) != 0 ? -1073741748 : -1073741663;
  }
  else
  {
    v11 = -1073741670;
  }
LABEL_6:
  if ( (v4 & 2) != 0 )
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  if ( (v4 & 1) != 0 )
    MiUnlockPageTableCharges(v10);
  if ( (v4 & 4) != 0 )
  {
    v12 = MiReturnResavailToPrcb(v5, 1LL);
    if ( v12 )
      _InterlockedAdd64((volatile signed __int64 *)(v5 + 22528), v12);
  }
  if ( v4 >= 8 )
  {
    MiReturnCommit(v5, 1LL, 0LL);
    _InterlockedDecrement64((volatile signed __int64 *)(v5 + 23472));
  }
  return v11;
}
