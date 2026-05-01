/*
 * XREFs of ?PrepareApplicationForLaunch@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUITaskWindow@@@Z @ 0x1801FF0D4
 * Callers:
 *     ?PrepareEnsuredViewForShow@CImmersiveApp@@UEAAXXZ @ 0x180303270 (-PrepareEnsuredViewForShow@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::PrepareApplicationForLaunch(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct ITaskWindow *a2)
{
  if ( !a2 || !(*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2) )
    CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(
      this,
      2LL,
      *(_BYTE *)(*((_QWORD *)this + 19) + 746LL) != 0 ? 0x20 : 0);
}
