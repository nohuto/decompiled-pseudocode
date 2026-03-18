/*
 * XREFs of ?Discard@CCompositionToken@@UEAAXXZ @ 0x14003A5A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     ?ReleaseAllUpdates@CCompositionToken@@IEAAXXZ @ 0x14003A604 (-ReleaseAllUpdates@CCompositionToken@@IEAAXXZ.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x14003A7E0 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionToken::Discard(CCompositionToken *this)
{
  int v1; // eax
  __int64 Win32kImportTable; // rax

  v1 = *((_DWORD *)this + 6);
  if ( v1 < 3 )
  {
    if ( !v1 && *((_QWORD *)this + 10) )
    {
      Win32kImportTable = DxgkGetWin32kImportTable();
      (*(void (__fastcall **)(_QWORD))(Win32kImportTable + 64))(*((_QWORD *)this + 10));
    }
    CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
  }
  CCompositionToken::ReleaseAllUpdates((CCompositionToken *)((char *)this - 8));
  *((_DWORD *)this + 6) = 6;
}
