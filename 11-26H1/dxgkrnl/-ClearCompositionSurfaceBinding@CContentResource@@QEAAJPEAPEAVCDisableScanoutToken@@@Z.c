/*
 * XREFs of ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x140029854
 * Callers:
 *     ?RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x140029BFC (-RemoveContent@CFlipManager@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 *     ??1CContentResource@@UEAA@XZ @ 0x1400593F4 (--1CContentResource@@UEAA@XZ.c)
 * Callees:
 *     ?Create@CDisableScanoutToken@@SAJPEAVCompositionSurfaceObject@@_KPEAPEAV1@@Z @ 0x14001885C (-Create@CDisableScanoutToken@@SAJPEAVCompositionSurfaceObject@@_KPEAPEAV1@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140029778 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CContentResource::ClearCompositionSurfaceBinding(
        CContentResource *this,
        struct CDisableScanoutToken **a2)
{
  int v2; // edi
  __int64 Win32kImportTable; // rax
  unsigned __int64 v6; // rbp

  v2 = 0;
  if ( *((_QWORD *)this + 6) )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(CContentResource *, _QWORD))(Win32kImportTable + 320))(
      this,
      *(_QWORD *)(*((_QWORD *)this + 6) + 24LL));
    v6 = *((_QWORD *)this + 7);
    v2 = CContentResource::RebindCompositionSurfaceBuffer(this, 0LL);
    if ( v2 >= 0 )
      v2 = CDisableScanoutToken::Create(*((struct CompositionSurfaceObject **)this + 6), v6, a2);
    ObfDereferenceObject(*((PVOID *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  return (unsigned int)v2;
}
