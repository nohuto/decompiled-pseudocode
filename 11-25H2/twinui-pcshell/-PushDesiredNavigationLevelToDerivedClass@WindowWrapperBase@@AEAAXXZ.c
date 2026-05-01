/*
 * XREFs of ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x180430E4C
 * Callers:
 *     _lambda_1c691449c5167e3292e0cc06d01cfa4b_::operator() @ 0x18042D0D8 (_lambda_1c691449c5167e3292e0cc06d01cfa4b_--operator().c)
 *     ?SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1804327E0 (-SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z.c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804329C0 (-SetRegistration@WindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIniti.c)
 *     ?put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z @ 0x1804349B0 (-put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1804309A0 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(WindowWrapperBase *this)
{
  int v2; // eax
  __int64 v3; // rsi
  unsigned int v4; // edi

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35));
  v2 = *((_DWORD *)this + 45);
  v3 = *((int *)this + 74);
  v4 = *((_DWORD *)this + 120);
  if ( (v2 & 0x10) != 0 && (v2 & 0x20) == 0 )
    v4 = v4 != 0;
  if ( v4 != (*(unsigned int (__fastcall **)(WindowWrapperBase *))(*(_QWORD *)this + 144LL))(this) )
  {
    (*(void (__fastcall **)(WindowWrapperBase *, _QWORD))(*(_QWORD *)this + 168LL))(this, v4);
    if ( v3 )
      WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)this, v3, 2);
  }
  WindowWrapperBase::ReconcileSessionIdleTaskCompletion(this);
}
