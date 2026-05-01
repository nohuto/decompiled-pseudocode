/*
 * XREFs of BindCtx_CreateWithObjectParam_0 @ 0x1806628C0
 * Callers:
 *     ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180663400 (-_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z @ 0x180537ED4 (--$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z.c)
 *     ??0CDummyUnknown@@QEAA@XZ @ 0x1805386B8 (--0CDummyUnknown@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BindCtx_CreateWithObjectParam_0(__int64 a1, __int64 a2, LPBC *a3)
{
  HRESULT v4; // ebx
  LPBC v5; // rbx
  CDummyUnknown *v6; // rax
  LPBC v7; // rcx
  CDummyUnknown *v9; // [rsp+20h] [rbp-28h] BYREF
  LPBC ppbc; // [rsp+28h] [rbp-20h] BYREF

  *a3 = 0LL;
  ppbc = 0LL;
  v4 = CreateBindCtx(0, &ppbc);
  if ( v4 >= 0 )
  {
    v5 = ppbc;
    v6 = (CDummyUnknown *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v6;
    if ( v6 && (v9 = CDummyUnknown::CDummyUnknown(v6)) != 0LL )
    {
      v4 = ((__int64 (__fastcall *)(LPBC, const wchar_t *, CDummyUnknown *))v5->lpVtbl->RegisterObjectParam)(
             v5,
             L"Don't Translate Aliases",
             v9);
      SafeRelease<CDummyUnknown>(&v9);
      if ( v4 >= 0 )
      {
        v7 = ppbc;
        *a3 = ppbc;
        ((void (__fastcall *)(LPBC))v7->lpVtbl->AddRef)(v7);
      }
    }
    else
    {
      v4 = -2147024882;
    }
    ((void (__fastcall *)(LPBC))ppbc->lpVtbl->Release)(ppbc);
  }
  return (unsigned int)v4;
}
