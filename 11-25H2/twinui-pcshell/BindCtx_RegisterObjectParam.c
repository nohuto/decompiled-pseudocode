/*
 * XREFs of BindCtx_RegisterObjectParam @ 0x1806A353C
 * Callers:
 *     BindCtx_RegisterFolderEnumMode @ 0x1806A34C4 (BindCtx_RegisterFolderEnumMode.c)
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802C068C (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateBindCtx_0 @ 0x1802D889A (CreateBindCtx_0.c)
 *     ??$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z @ 0x180537ED4 (--$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z.c)
 *     ??0CDummyUnknown@@QEAA@XZ @ 0x1805386B8 (--0CDummyUnknown@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BindCtx_RegisterObjectParam(IBindCtx *a1, CDummyUnknown *a2, CDummyUnknown *a3, LPBC *a4)
{
  HRESULT BindCtx_0; // ebx
  LPBC v7; // rbx
  CDummyUnknown *v8; // rax
  CDummyUnknown *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  *a4 = a1;
  if ( a1 )
  {
    ((void (__fastcall *)(IBindCtx *))a1->lpVtbl->AddRef)(a1);
  }
  else
  {
    BindCtx_0 = CreateBindCtx_0(0, a4);
    if ( BindCtx_0 < 0 )
      return (unsigned int)BindCtx_0;
  }
  v10 = 0LL;
  v7 = *a4;
  if ( !a3 )
  {
    v8 = (CDummyUnknown *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v8 || (v10 = CDummyUnknown::CDummyUnknown(v8), (a3 = v10) == 0LL) )
    {
      BindCtx_0 = -2147024882;
LABEL_9:
      SafeRelease<IShellItemArray>((__int64 *)a4);
      return (unsigned int)BindCtx_0;
    }
  }
  BindCtx_0 = ((__int64 (__fastcall *)(LPBC, const wchar_t *, CDummyUnknown *))v7->lpVtbl->RegisterObjectParam)(
                v7,
                L"Folder Enum Mode",
                a3);
  SafeRelease<CDummyUnknown>(&v10);
  if ( BindCtx_0 < 0 )
    goto LABEL_9;
  return (unsigned int)BindCtx_0;
}
