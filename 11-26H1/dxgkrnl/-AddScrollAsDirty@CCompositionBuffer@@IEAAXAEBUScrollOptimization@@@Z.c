/*
 * XREFs of ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x14003AFA8
 * Callers:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x14003A7E0 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x14003AAB8 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionBuffer::AddScrollAsDirty(CCompositionBuffer *this, const struct ScrollOptimization *a2)
{
  char *v3; // rbx
  __int64 Win32kImportTable; // rax
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rdx
  void (*v8)(void); // rax
  void (***v9)(void); // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v3 = (char *)a2 + 4;
  Win32kImportTable = DxgkGetWin32kImportTable();
  v5 = (*(__int64 (__fastcall **)(char *, void (****)(void)))(Win32kImportTable + 48))(v3, &v9);
  v6 = (__int64 *)*((_QWORD *)this + 37);
  v7 = *v6;
  if ( v5 < 0 )
  {
    v8 = *(void (**)(void))(v7 + 32);
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, void (***)(void), __int64))(v7 + 48))(v6, v9, 2LL);
    v8 = **v9;
  }
  v8();
}
