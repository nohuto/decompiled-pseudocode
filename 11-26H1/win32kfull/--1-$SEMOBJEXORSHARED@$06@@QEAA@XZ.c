/*
 * XREFs of ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140038CFC
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1400384E0 (GreUpdateSpriteVisRgn.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073700 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$06@@YAXXZ @ 0x14001D800 (--$GrepReleaseLockValidate@$06@@YAXXZ.c)
 */

void __fastcall SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(__int64 a1)
{
  HSEMAPHORE v1; // rbx
  HSEMAPHORE v2; // rdx

  v1 = *(HSEMAPHORE *)a1;
  v2 = *(HSEMAPHORE *)a1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    EtwTraceGreLockReleaseSemaphore(L"DwmState", v2);
    GrepReleaseLockValidate<7>();
    GreReleaseSemaphoreSharedInternal(v1);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"DwmState", v2);
    GrepReleaseLockValidate<7>();
    GreReleaseSemaphoreExclusiveInternal(v1);
  }
}
