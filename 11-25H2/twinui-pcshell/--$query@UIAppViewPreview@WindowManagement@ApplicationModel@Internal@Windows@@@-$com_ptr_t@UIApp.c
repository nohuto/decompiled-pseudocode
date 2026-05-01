/*
 * XREFs of ??$query@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18042C798
 * Callers:
 *     _lambda_64250699a60f045a429c95628aea0968_::operator() @ 0x18042D2B8 (_lambda_64250699a60f045a429c95628aea0968_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppView,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IAppViewPreview>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_98057f1b_132b_473d_ac4b_aee7ac87887a, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
