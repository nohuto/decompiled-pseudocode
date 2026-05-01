/*
 * XREFs of BindCtx_CreateWithObjectParam @ 0x180539C68
 * Callers:
 *     ?MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@PEAUIVirtualDesktop@@PEAUHSTRING__@@UtagRECT@@PEAPEAU2@@Z @ 0x18053D4B4 (-MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z @ 0x180537ED4 (--$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z.c)
 *     ??0CDummyUnknown@@QEAA@XZ @ 0x1805386B8 (--0CDummyUnknown@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BindCtx_CreateWithObjectParam(CDummyUnknown *a1, __int64 a2, _QWORD *a3)
{
  HRESULT v4; // ebx
  LPBC v5; // rbx
  CDummyUnknown *v6; // rax
  LPBC v7; // rcx
  CDummyUnknown *v9; // [rsp+30h] [rbp+8h] BYREF
  LPBC v10; // [rsp+38h] [rbp+10h] BYREF

  v9 = a1;
  *a3 = 0LL;
  v10 = 0LL;
  v4 = CreateBindCtx(0, &v10);
  if ( v4 >= 0 )
  {
    v5 = v10;
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
        v7 = v10;
        *a3 = v10;
        ((void (__fastcall *)(LPBC))v7->lpVtbl->AddRef)(v7);
      }
    }
    else
    {
      v4 = -2147024882;
    }
    ((void (__fastcall *)(LPBC))v10->lpVtbl->Release)(v10);
  }
  return (unsigned int)v4;
}
