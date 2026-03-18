/*
 * XREFs of ?InitDimAndWakeSources@CInputGlobals@@AEAAXXZ @ 0x140187664
 * Callers:
 *     InitializeInputComponents @ 0x14021B770 (InitializeInputComponents.c)
 * Callees:
 *     ?UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ @ 0x140179630 (-UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CInputGlobals::InitDimAndWakeSources(CInputGlobals *this)
{
  int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 (*v7)(void); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this) + 48) + 6864LL);
  if ( v3 && v3() >= 0 )
    CInputGlobals::UpdateWakeOnInputDeviceTypesFromRegistry(this);
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 6880LL);
  if ( v5 && v5() >= 0 )
  {
    v7 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 6888LL);
    if ( v7 )
      v2 = v7();
    *((_DWORD *)this + 37) = v2;
  }
}
