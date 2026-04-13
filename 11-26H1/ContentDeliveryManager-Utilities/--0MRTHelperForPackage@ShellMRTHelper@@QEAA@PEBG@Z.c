/*
 * XREFs of ??0MRTHelperForPackage@ShellMRTHelper@@QEAA@PEBG@Z @ 0x1800ABB6C
 * Callers:
 *     ?PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXPEBG@Z @ 0x1800AC0AC (-PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180072A58 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

// Hidden C++ exception states: #wind=1
ShellMRTHelper::MRTHelperForPackage *__fastcall ShellMRTHelper::MRTHelperForPackage::MRTHelperForPackage(
        ShellMRTHelper::MRTHelperForPackage *this,
        char *a2)
{
  _QWORD *v3; // rcx
  int v4; // eax
  int v5; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_BYTE *)this + 44) = 0;
  *((_BYTE *)this + 47) = 0;
  v3 = (_QWORD *)((char *)this + 48);
  *v3 = 0LL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *(_WORD *)((char *)this + 45) = 1;
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (__int64)v3,
         a2,
         0xFFFFFFFFFFFFFFFFuLL);
  v5 = v4;
  if ( v4 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.h",
      (const char *)(unsigned int)v4);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      509LL,
      (__int64)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.h",
      (const char *)(unsigned int)v5,
      v7);
  return this;
}
