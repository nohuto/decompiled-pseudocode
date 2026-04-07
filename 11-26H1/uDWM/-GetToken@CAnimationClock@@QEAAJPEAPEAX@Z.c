/*
 * XREFs of ?GetToken@CAnimationClock@@QEAAJPEAPEAX@Z @ 0x18006272C
 * Callers:
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x18003E928 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClock::GetToken(CAnimationClock *this, void **a2)
{
  _QWORD *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // r9

  v3 = (_QWORD *)((char *)this + 104);
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *a2 = 0LL;
  if ( *v3
    || (v7 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)v3),
        v5 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v8 + 216LL))(
               v8,
               &GUID_64217f82_b1ca_430c_8a88_6cedec74c860,
               v7),
        v5 >= 0) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                            + 6)
                                                                          + 32LL)
                                                            + 224LL))(
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL),
           *v3,
           a2);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v5;
}
