/*
 * XREFs of ?DxgkEngDetectGDIPathApiExt@@YAHPEBXPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1401A0790
 * Callers:
 *     <none>
 * Callees:
 *     DxgkEngDetectGDIPath @ 0x140248A64 (DxgkEngDetectGDIPath.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngDetectGDIPathApiExt(const void *a1, HDEV a2, HWND a3, HRGN a4)
{
  unsigned int v8; // ebx
  int (*v9)(void); // rax

  v8 = 0;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 224LL);
  if ( v9 && v9() >= 0 )
    return (unsigned int)DxgkEngDetectGDIPath(a1, a2, a3, a4);
  return v8;
}
