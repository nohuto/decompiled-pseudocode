/*
 * XREFs of ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140029778
 * Callers:
 *     ?RebindCompositionSurfaceBuffer@CContentResourceState@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140025E14 (-RebindCompositionSurfaceBuffer@CContentResourceState@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x140029854 (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x140026270 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x140027B60 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x14006D00C (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CContentResource::RebindCompositionSurfaceBuffer(
        CContentResource *this,
        struct CCompositionSwapchainBuffer *a2)
{
  int v3; // ebx
  CompositionSurfaceObject *v4; // rcx
  NTSTATUS v6; // eax
  CCompositionSurface *v7; // rdi
  __int64 Win32kImportTable; // rax
  CCompositionSurface *v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (CompositionSurfaceObject *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v10 = 0LL;
    v6 = CompositionSurfaceObject::LockForWrite(v4, &v10);
    v7 = v10;
    v3 = v6;
    if ( v6 >= 0 )
    {
      v3 = CCompositionSurface::UnBind(v10, 1);
      if ( v3 >= 0 )
      {
        *((_QWORD *)this + 7) = 0LL;
        if ( a2 )
        {
          if ( !*((_DWORD *)a2 + 72) || (v3 = CCompositionSurface::Bind(v7, a2, (unsigned __int64 *)this + 7), v3 >= 0) )
          {
            Win32kImportTable = DxgkGetWin32kImportTable();
            (*(void (__fastcall **)(CContentResource *, _QWORD, _QWORD, _QWORD, _DWORD))(Win32kImportTable + 176))(
              this,
              *((_QWORD *)v7 - 2),
              *((_QWORD *)this + 7),
              (*((_DWORD *)a2 + 46) >> 6) & 1,
              *((_DWORD *)a2 + 72));
          }
        }
      }
    }
    if ( v7 )
      CCompositionSurface::UnlockAndRelease(v7);
  }
  return (unsigned int)v3;
}
