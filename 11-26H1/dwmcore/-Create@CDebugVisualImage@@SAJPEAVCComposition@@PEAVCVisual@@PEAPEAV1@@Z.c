/*
 * XREFs of ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180262ED8
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDebugVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009582C (--1-$com_ptr_t@VCDebugVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18014BD88 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?UpdateVisualTree@CCachedVisualImage@@MEAAJXZ @ 0x18014CBF0 (-UpdateVisualTree@CCachedVisualImage@@MEAAJXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@W4Consumer@0@@Z @ 0x180203D0C (--0CCachedVisualImage@@IEAA@PEAVCComposition@@W4Consumer@0@@Z.c)
 */

__int64 __fastcall CDebugVisualImage::Create(
        struct CComposition *a1,
        struct CVisual *a2,
        struct CDebugVisualImage **a3)
{
  char *v7; // rax
  char *v8; // rbx
  int updated; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CResource *v13; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  if ( !a2 )
    return 2147942487LL;
  v7 = (char *)DefaultHeap::AllocClear(0x648uLL);
  v8 = v7;
  if ( !v7 )
  {
    v13 = 0LL;
    v10 = -2147024882;
    v11 = 38LL;
    goto LABEL_8;
  }
  CCachedVisualImage::CCachedVisualImage((__int64)v7, (__int64)a1);
  v13 = (CResource *)v8;
  *((_QWORD *)v8 + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapResource'};
  *(_QWORD *)v8 = &CCachedVisualImage::`vftable'{for `CResource'};
  *((_QWORD *)v8 + 10) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)v8 + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 8));
  *((_DWORD *)v8 + 32) = 87;
  *((_DWORD *)v8 + 34) = 1;
  CCachedVisualImage::ChoosePixelFormat((CCachedVisualImage *)v8);
  *((_QWORD *)v8 + 15) = a2;
  CResource::RegisterNotifier((CResource *)v8, a2);
  updated = CCachedVisualImage::UpdateVisualTree((CCachedVisualImage *)v8);
  v10 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\debugvisualimage.cpp",
      (const char *)(unsigned int)updated);
    v11 = 40LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\debugvisualimage.cpp",
      (const char *)v10);
    goto LABEL_9;
  }
  v8[1600] = 1;
  v10 = 0;
  *a3 = (struct CDebugVisualImage *)v8;
  v13 = 0LL;
LABEL_9:
  wil::com_ptr_t<CDebugVisualImage,wil::err_returncode_policy>::~com_ptr_t<CDebugVisualImage,wil::err_returncode_policy>(&v13);
  return v10;
}
