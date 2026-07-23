/*
 * XREFs of MiRemoveWsle @ 0x1403273B4
 * Callers:
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MiTerminateWsle @ 0x140326960 (MiTerminateWsle.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiWriteWsle @ 0x14029ED40 (MiWriteWsle.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1402CCE50 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiLockWorkingSetCoreShared @ 0x1402CFF20 (MiLockWorkingSetCoreShared.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiUnlockWorkingSetCoreShared @ 0x14036E020 (MiUnlockWorkingSetCoreShared.c)
 *     MiIsDriverPage @ 0x1404B6920 (MiIsDriverPage.c)
 *     MiLogRemoveWsleEvent @ 0x140501484 (MiLogRemoveWsleEvent.c)
 */

__int64 __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5)
{
  int v5; // ebx
  char v7; // bp
  __int64 v10; // r8
  __int64 *v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // bp
  int v14; // r12d
  BOOL v15; // r11d
  int *v16; // rcx
  __int64 result; // rax
  __int64 IsDriverPage; // rax
  __int64 v19; // rax

  v5 = *(_DWORD *)(a1 + 184);
  v7 = a3;
  MiLockWorkingSetCoreShared(a1, a2, a3);
  v11 = (__int64 *)0xFFFFF6FFFFFFFFFFLL;
  if ( a5 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 160));
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedDecrement64((volatile signed __int64 *)(a1 + 144));
  }
  v12 = 0x7FFFFFFFF8LL;
  if ( (v5 & 0xF) == 3 )
  {
    if ( PsNtosImageBase
      && (a2 >= (unsigned __int64)PsNtosImageBase && a2 < PsNtosImageEnd
       || a2 >= (unsigned __int64)PsHalImageBase && a2 < PsHalImageEnd) )
    {
      _InterlockedDecrement((volatile signed __int32 *)&stru_140E2D2D0.SchedulerApcFill5[72]);
    }
    else if ( (unsigned int)MiGetSystemRegionType(a2) == 11 )
    {
      IsDriverPage = MiIsDriverPage(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
      v11 = (__int64 *)0xFFFFF6FFFFFFFFFFLL;
      v12 = 0x7FFFFFFFF8LL;
      if ( IsDriverPage )
        _InterlockedDecrement((volatile signed __int32 *)&stru_140E2D2D0.SchedulerApcFill5[76]);
    }
    else
    {
      v11 = (__int64 *)0xFFFFF6FFFFFFFFFFLL;
      v12 = 0x7FFFFFFFF8LL;
    }
  }
  _InterlockedDecrement64((volatile signed __int64 *)(a1 + 152));
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 136));
    v13 = v7 & 0xF;
    v14 = 1;
    v15 = v13 == 8;
    if ( a4 == 9 )
      goto LABEL_27;
    if ( a4 == 10 )
    {
      v11 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v19 = *v11;
      v12 = 0xFFFFF6FB7DBED000uLL;
      if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL )
      {
        v12 = 0xFFFFF6FB7DBED7F8uLL;
        if ( (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
          LOBYTE(v19) = MiReadPteShadow((unsigned __int64)v11, *v11);
      }
      if ( (v19 & 1) != 0 )
LABEL_27:
        MiWriteWsle((__int64)v11, a2, a4 & 0xF);
    }
  }
  else
  {
    v13 = v7 & 0xF;
    v14 = 0;
    v15 = (v5 & 0xF) != 0;
  }
  if ( !v15 )
    MiUpdateWorkingSetAgeDistribution(a1, a2, v13, -1LL, 0);
  v16 = &dword_140E37A00;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v16 = 0LL;
  if ( v16 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)v16 + 1);
    if ( v14 )
      _InterlockedDecrement64((volatile signed __int64 *)v16 + 2);
  }
  result = MiUnlockWorkingSetCoreShared(a1, v12, v10);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
    return MiLogRemoveWsleEvent(a2, v5 & 0xF);
  return result;
}
