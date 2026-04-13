/*
 * XREFs of ??$query@UIStorageItem@Storage@Windows@@@?$com_ptr_t@UIStorageFile@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIStorageItem@Storage@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A5ED8
 * Callers:
 *     ?CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z @ 0x1800A65B8 (-CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Storage::IStorageFile,wil::err_exception_policy>::query<Windows::Storage::IStorageItem>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      7305LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
