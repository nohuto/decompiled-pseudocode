/*
 * XREFs of ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18031B9D8
 * Callers:
 *     _lambda_203a32cbd1766f67226f85b07542c037_::operator() @ 0x1803198A4 (_lambda_203a32cbd1766f67226f85b07542c037_--operator().c)
 *     ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18031B520 (-SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1801EDC5C (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 */

__int64 __fastcall wil::wnf_query_nothrow(
        wil *this,
        const struct _WNF_STATE_NAME *a2,
        bool *a3,
        struct wil::WNF_CHANGE_STAMP_STRUCT *a4)
{
  int v6; // eax
  unsigned int v7; // edi
  char v9; // di
  char v10; // al
  int v11; // eax
  const char *v12; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+48h] [rbp+10h] BYREF
  int v15; // [rsp+50h] [rbp+18h]

  LOBYTE(a2->Data[0]) = 0;
  if ( a3 )
    *(_DWORD *)a3 = 0;
  v15 = 0;
  v14 = 0;
  v6 = NtQueryWnfStateData(this, 0LL, 0LL, &v14);
  v7 = v6 | 0x10000000;
  if ( v6 >= 0 || v7 == -805306333 )
  {
    v9 = 1;
    v10 = v14 && v15;
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x2AC,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      v10,
      (unsigned __int64)"Inconsistent state data size in wnf_query",
      v12);
    v11 = v14;
    if ( !v14 || v15 )
      v9 = 0;
    LOBYTE(a2->Data[0]) = v9;
    if ( a3 )
      *(_DWORD *)a3 = v11;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AA,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v7);
    return v7;
  }
}
