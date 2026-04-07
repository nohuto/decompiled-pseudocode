/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x18003170C
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x18003165C (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBitmapSource@@IEAA@XZ @ 0x180007D14 (--0CBitmapSource@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18001CBD4 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x180031A04 (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x180031D20 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBitmapSource::Create(void *a1, unsigned int a2, struct CBitmapSource **a3)
{
  int CompressedSourceBitmap; // eax
  unsigned int v7; // ebx
  CBitmapSource *v8; // rax
  CBaseObject *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  struct IWICBitmap *v13; // rcx
  struct IWICBitmap *v15; // rcx
  struct IWICBitmap *v16; // rcx
  struct IWICBitmap *v17; // rcx
  struct IWICBitmap *v18; // rcx
  CBitmapSource *v19; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct IWICBitmap *v21; // [rsp+68h] [rbp+28h] BYREF

  v21 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
  CompressedSourceBitmap = CreateCompressedSourceBitmap(
                             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
                             a1,
                             a2);
  v7 = CompressedSourceBitmap;
  if ( CompressedSourceBitmap >= 0 )
  {
    v8 = (CBitmapSource *)DefaultHeap::AllocClear(0x68uLL);
    v19 = v8;
    if ( v8 )
      v9 = CBitmapSource::CBitmapSource(v8);
    else
      v9 = 0LL;
    v19 = v9;
    if ( std::operator==<CWindowBorder::CCachedBorderBrush>(&v19) )
    {
      v11 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
        (const char *)0x8007000ELL,
        DOUBLE_96_0);
      if ( v9 )
        CBaseObject::Release(v9);
      v15 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(struct IWICBitmap *))v15->lpVtbl->Release)(v15);
      }
    }
    else
    {
      v10 = CBitmapSource::Initialize(v9);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x60,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
          (const char *)(unsigned int)v10,
          DOUBLE_96_0);
        if ( v9 )
          CBaseObject::Release(v9);
        v17 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          ((void (__fastcall *)(struct IWICBitmap *))v17->lpVtbl->Release)(v17);
        }
      }
      else
      {
        v12 = CBitmapSource::Update(v9, v21);
        v11 = v12;
        if ( v12 >= 0 )
        {
          *a3 = v9;
          v13 = v21;
          if ( v21 )
          {
            v21 = 0LL;
            ((void (__fastcall *)(struct IWICBitmap *))v13->lpVtbl->Release)(v13);
          }
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x62,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
          (const char *)(unsigned int)v12,
          DOUBLE_96_0);
        if ( v9 )
          CBaseObject::Release(v9);
        v18 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          ((void (__fastcall *)(struct IWICBitmap *))v18->lpVtbl->Release)(v18);
        }
      }
    }
    return v11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
    (const char *)(unsigned int)CompressedSourceBitmap,
    DOUBLE_96_0);
  v16 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    ((void (__fastcall *)(struct IWICBitmap *))v16->lpVtbl->Release)(v16);
  }
  return v7;
}
