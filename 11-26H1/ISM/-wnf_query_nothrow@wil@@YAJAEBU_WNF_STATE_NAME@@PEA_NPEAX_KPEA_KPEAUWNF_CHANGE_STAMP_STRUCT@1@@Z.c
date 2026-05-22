/*
 * XREFs of ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18010D94C
 * Callers:
 *     ?RotationWnfCallback@RotationWatcher@@SAJAEBV?$com_ptr_t@UIMessageSession@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18010D6AC (-RotationWnfCallback@RotationWatcher@@SAJAEBV-$com_ptr_t@UIMessageSession@@Uerr_exception_policy.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow(wil *this, const struct _WNF_STATE_NAME *a2, bool *a3, void *a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]
  int v12; // [rsp+58h] [rbp+20h] BYREF
  int v13; // [rsp+5Ch] [rbp+24h]

  v13 = HIDWORD(a4);
  v11 = HIDWORD(this);
  v5 = a5;
  LOBYTE(a2->Data[0]) = 0;
  *v5 = 0LL;
  v12 = 0;
  v10 = 128;
  v7 = NtQueryWnfStateData(&WNF_AUDC_POSTURE, 0LL, 0LL, &v12, a3, &v10);
  if ( v7 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x2EF,
             (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
             (const char *)(unsigned int)v7);
  LOBYTE(a2->Data[0]) = v12 != 0;
  *v5 = v10;
  return 0LL;
}
