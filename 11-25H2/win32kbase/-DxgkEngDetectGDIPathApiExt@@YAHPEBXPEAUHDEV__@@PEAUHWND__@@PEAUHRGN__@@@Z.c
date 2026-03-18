/*
 * XREFs of ?DxgkEngDetectGDIPathApiExt@@YAHPEBXPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x14015DAF0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkEngDetectGDIPath @ 0x14023E3D4 (DxgkEngDetectGDIPath.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngDetectGDIPathApiExt(const void *a1, HDEV a2, HWND a3, HRGN a4)
{
  unsigned int v8; // ebx
  int (*v9)(void); // rax

  v8 = 0;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 224LL);
  if ( v9 && v9() >= 0 )
    return (unsigned int)DxgkEngDetectGDIPath(a1, a2, a3, a4);
  return v8;
}
