/*
 * XREFs of ?Get@CFallbackBitmapSource@@SAJPEAPEAVCBitmapSource@@@Z @ 0x18008523C
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180004D7C (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x1800850F0 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??4?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSource@@@Z @ 0x18001BA84 (--4-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSource@@@.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180071634 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFallbackBitmapSource::Get(struct CBitmapSource **a1)
{
  CBaseObject *v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CBitmapSource *v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = CFallbackBitmapSource::s_instance;
  if ( CFallbackBitmapSource::s_instance )
    CBaseObject::AddRef(CFallbackBitmapSource::s_instance);
  if ( !v2 )
  {
    v7 = 0LL;
    v3 = CBitmapSource::Create(1u, 1u);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x242,
        (int)"clientcore\\windows\\dwm\\udwm\\bitmapsource.cpp",
        (const char *)(unsigned int)v3);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v7);
      return v4;
    }
    v2 = v7;
    wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>::operator=(&CFallbackBitmapSource::s_instance, v7);
  }
  *a1 = v2;
  return 0LL;
}
