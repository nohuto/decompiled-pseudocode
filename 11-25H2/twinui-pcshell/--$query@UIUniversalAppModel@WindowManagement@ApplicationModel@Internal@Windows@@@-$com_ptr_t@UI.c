/*
 * XREFs of ??$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180073AAC
 * Callers:
 *     ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800733AC (-OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Intern.c)
 *     ??0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x180422684 (--0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@Applica.c)
 *     _lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator() @ 0x18042D330 (_lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_--operator().c)
 *     _lambda_961f4566a8f3c24a9401699f8d85a301_::operator() @ 0x18042DCD4 (_lambda_961f4566a8f3c24a9401699f8d85a301_--operator().c)
 *     _lambda_a5c6a979af0ee9d5ef90c02c02727011_::operator() @ 0x18042E140 (_lambda_a5c6a979af0ee9d5ef90c02c02727011_--operator().c)
 *     _lambda_a742079b4f288dc5c41d6ea5a73a25fb_::operator() @ 0x180439B54 (_lambda_a742079b4f288dc5c41d6ea5a73a25fb_--operator().c)
 *     _lambda_ead4271fd9f01e26050a849b037d7c96_::operator() @ 0x18043A148 (_lambda_ead4271fd9f01e26050a849b037d7c96_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_43c44496_73a7_4b25_b876_1df2708e3e45, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
