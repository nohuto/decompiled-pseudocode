/*
 * XREFs of ??$query@U?$IReference@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IReference@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801D8FF0
 * Callers:
 *     ??$GetValueHelper@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@@YA?AW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801D8F48 (--$GetValueHelper@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::IReference<enum Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_b6652262_46bb_521f_89f6_e890430bff3e, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
