/*
 * XREFs of ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1800ABE1C
 * Callers:
 *     ?GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEAPEAGPEA_N@Z @ 0x1800FD25C (-GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800ABEAC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

int __fastcall wil::wnf_query_nothrow(wil *this, const struct _WNF_STATE_NAME *a2, bool *a3, void *a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  int v7; // eax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v11; // [rsp+48h] [rbp+10h]

  v5 = a5;
  LOBYTE(a2->Data[0]) = 0;
  v9 = (int)a3;
  v11 = (unsigned int)a4;
  *v5 = 0LL;
  LODWORD(a5) = 0;
  v7 = NtQueryWnfStateData(this, 0LL, 0LL, &a5);
  if ( v7 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x2EF,
             (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
             (const char *)(unsigned int)v7,
             v9);
  LOBYTE(a2->Data[0]) = (_DWORD)a5 != 0;
  *v5 = v11;
  return 0;
}
