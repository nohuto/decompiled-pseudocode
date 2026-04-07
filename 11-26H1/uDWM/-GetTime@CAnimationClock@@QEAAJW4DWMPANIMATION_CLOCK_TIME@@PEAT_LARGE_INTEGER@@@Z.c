/*
 * XREFs of ?GetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x180098308
 * Callers:
 *     ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x180098B40 (-OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationClock::GetTime(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v6 = -2147024809;
  if ( a3 )
  {
    *a3 = 0LL;
    v6 = -2147019873;
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v6 = -2147024809;
        goto LABEL_11;
      }
      if ( *(_DWORD *)(a1 + 80) != 5 )
        goto LABEL_11;
      v7 = *(_QWORD *)(a1 + 96);
LABEL_10:
      v6 = 0;
      *a3 = v7;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(a1 + 80) == 4 || *(_DWORD *)(a1 + 80) == 2 )
    {
      v7 = *(_QWORD *)(a1 + 88);
      goto LABEL_10;
    }
  }
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v6;
}
