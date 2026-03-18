/*
 * XREFs of ?ReleasePDevAndDwmStateLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x14039D388
 * Callers:
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401C25AC (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?ReleasePDevDwmStateAndWin32kLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x14039D300 (-ReleasePDevDwmStateAndWin32kLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall MANAGEDPRIMARIESTRACKER::ReleasePDevAndDwmStateLocks(MANAGEDPRIMARIESTRACKER *this)
{
  unsigned int v1; // edx

  v1 = *((_DWORD *)this + 104);
  if ( (v1 & 2) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 1) + 88LL) + 200LL))(
      *(_QWORD *)(*(_QWORD *)this + 16LL),
      v1 >> 3);
    *((_DWORD *)this + 104) &= ~2u;
  }
}
