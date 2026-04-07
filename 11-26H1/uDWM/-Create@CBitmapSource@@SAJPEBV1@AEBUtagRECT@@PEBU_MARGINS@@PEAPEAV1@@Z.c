/*
 * XREFs of ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180004D7C
 * Callers:
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x180004738 (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180004B90 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000504C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??4?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSource@@@Z @ 0x18001BA84 (--4-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSource@@@.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180084EE8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Get@CFallbackBitmapSource@@SAJPEAPEAVCBitmapSource@@@Z @ 0x18008523C (-Get@CFallbackBitmapSource@@SAJPEAPEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?AddSubBitmap@CBitmapSource@@AEBAXPEAV1@AEBUtagRECT@@@Z @ 0x18009A828 (-AddSubBitmap@CBitmapSource@@AEBAXPEAV1@AEBUtagRECT@@@Z.c)
 *     ?CreateFromWicBitmapSource@CBitmapSource@@CAJPEAUIWICBitmapSource@@PEAPEAV1@@Z @ 0x18009AB6C (-CreateFromWicBitmapSource@CBitmapSource@@CAJPEAUIWICBitmapSource@@PEAPEAV1@@Z.c)
 *     ?FindSubBitmap@CBitmapSource@@AEBAPEAV1@AEBUtagRECT@@@Z @ 0x18009AC40 (-FindSubBitmap@CBitmapSource@@AEBAPEAV1@AEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBitmapSource::Create(
        const struct CBitmapSource *this,
        const struct tagRECT *a2,
        const struct _MARGINS *a3,
        struct CBitmapSource **a4)
{
  LONG right; // eax
  LONG bottom; // ecx
  struct CBitmapSource *SubBitmap; // rax
  struct CBitmapSource *v11; // rdi
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  LONG top; // edx
  int v16; // eax
  int v17; // eax
  struct CBitmapSource *v19; // [rsp+20h] [rbp-30h] BYREF
  struct IWICBitmapSource *v20; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v21[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v19 = 0LL;
  if ( a2->left < 0
    || a2->top < 0
    || (right = a2->right, right > *((_DWORD *)this + 32))
    || (bottom = a2->bottom, bottom > *((_DWORD *)this + 33))
    || right <= a2->left
    || bottom <= a2->top )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x90,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
      (const char *)0x88980701LL,
      (int)v19);
    return CFallbackBitmapSource::Get(a4);
  }
  else
  {
    SubBitmap = CBitmapSource::FindSubBitmap(this, a2);
    wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>::operator=(&v19, SubBitmap);
    v11 = v19;
    if ( !v19 )
    {
      v20 = 0LL;
      v12 = (*(__int64 (__fastcall **)(_QWORD, struct IWICBitmapSource **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                             + 30)
                                                                          + 96LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
              &v20);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 156LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
          (const char *)(unsigned int)v12,
          (int)v19);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v20);
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v19);
        return v13;
      }
      v21[0] = a2->left;
      top = a2->top;
      v21[1] = top;
      v16 = 0;
      if ( a2->right - v21[0] >= 0 )
        v16 = a2->right - v21[0];
      v21[2] = v16;
      v17 = 0;
      if ( a2->bottom - top >= 0 )
        v17 = a2->bottom - top;
      v21[3] = v17;
      v12 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, _QWORD, _DWORD *))v20->lpVtbl[1].QueryInterface)(
              v20,
              *((_QWORD *)this + 5),
              v21);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 163LL;
        goto LABEL_18;
      }
      v19 = 0LL;
      v12 = CBitmapSource::CreateFromWicBitmapSource(v20, &v19);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 164LL;
        goto LABEL_18;
      }
      v11 = v19;
      CBitmapSource::AddSubBitmap(this, v19, a2);
      if ( a3 )
        *(struct _MARGINS *)((char *)v11 + 136) = *a3;
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v20);
    }
    v19 = 0LL;
    *a4 = v11;
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v19);
    return 0LL;
  }
}
