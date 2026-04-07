/*
 * XREFs of ?GetToken@CAnimationClock@@QEAAJPEAPEAX@Z @ 0x1800A56E8
 * Callers:
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x180051030 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClock::GetToken(CAnimationClock *this, void **a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, GUID *, __int64); // r9
  __int64 v6; // r10
  int v7; // edi
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *a2 = 0LL;
  if ( *((_QWORD *)this + 13)
    || (v4 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)this + 104),
        v7 = v5(v6, &GUID_64217f82_b1ca_430c_8a88_6cedec74c860, v4),
        v7 >= 0) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                            + 6)
                                                                          + 32LL)
                                                            + 224LL))(
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL),
           *((_QWORD *)this + 13),
           a2);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return (unsigned int)v7;
}
