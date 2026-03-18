/*
 * XREFs of ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1400C6550
 * Callers:
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z @ 0x1400C64A0 (-DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z @ 0x1400C7620 (-DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x140188CE8 (DrvNotifyModeChangeStartStop.c)
 *     HDXDrvEscape @ 0x1401FB020 (HDXDrvEscape.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall PDEVOBJ::vSync(PDEVOBJ *this, struct _SURFOBJ *a2, struct _RECTL *a3, unsigned int a4)
{
  __int64 p_hsurf; // rax
  __int64 v6; // rdx
  void (__fastcall *v7)(struct _SURFOBJ *, struct _RECTL *, _QWORD); // rax
  void (__fastcall *v8)(DHPDEV, struct _RECTL *); // rax

  p_hsurf = (__int64)&a2[1].hsurf;
  if ( !a2 )
    p_hsurf = 112LL;
  if ( (*(_DWORD *)p_hsurf & 0x1000) != 0 )
  {
    v6 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x400) == 0 )
    {
      v7 = *(void (__fastcall **)(struct _SURFOBJ *, struct _RECTL *, _QWORD))(v6 + 1744);
      if ( v7 )
      {
        v7(a2, a3, a4);
      }
      else
      {
        v8 = *(void (__fastcall **)(DHPDEV, struct _RECTL *))(v6 + 1736);
        if ( v8 )
          v8(a2->dhpdev, a3);
      }
    }
  }
}
