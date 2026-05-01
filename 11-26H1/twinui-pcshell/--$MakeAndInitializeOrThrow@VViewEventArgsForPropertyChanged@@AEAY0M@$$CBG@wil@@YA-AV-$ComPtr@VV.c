/*
 * XREFs of ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0M@$$CBG@Z @ 0x180410A68
 * Callers:
 *     ?UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180037590 (-UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedE.c)
 *     ?FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrapperInternal@@@Z @ 0x1800EE834 (-FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrappe.c)
 *     ?AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180416B30 (-AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChange.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ @ 0x1800ED488 (-InternalRelease@-$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0M@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@Z @ 0x18041033C (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0M@$$CBG@Details@WRL@Microsoft@@YA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const (&)[12]>(
        __int64 *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,ViewEventArgsForPropertyChanged,unsigned short const (&)[12]>(
         (ViewEventArgsForPropertyChanged **)a1,
         L"BackVisible");
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v2,
      1);
  return a1;
}
