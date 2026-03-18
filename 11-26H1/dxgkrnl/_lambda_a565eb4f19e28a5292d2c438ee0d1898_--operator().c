/*
 * XREFs of _lambda_a565eb4f19e28a5292d2c438ee0d1898_::operator() @ 0x14008A674
 * Callers:
 *     _DXGKCALLONEXIT__lambda_a565eb4f19e28a5292d2c438ee0d1898____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A2E0 (_DXGKCALLONEXIT__lambda_a565eb4f19e28a5292d2c438ee0d1898____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140049164 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?CleanSwitchInProgressInternal@DISPLAY_MUX_MGR@@AEAAXXZ @ 0x14008B3B8 (-CleanSwitchInProgressInternal@DISPLAY_MUX_MGR@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_a565eb4f19e28a5292d2c438ee0d1898_::operator()(DISPLAY_MUX_MGR **a1)
{
  DISPLAY_MUX_MGR *v2; // r8
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp-19h] BYREF
  __int64 v7; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  __int64 v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  int *v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1401665B8 > 5 && tlgKeywordOn((__int64)&dword_1401665B8, 512LL) )
  {
    v2 = *a1;
    v14 = 4LL;
    v12 = 16LL;
    v10 = 8LL;
    v6 = *(_DWORD *)(*(_QWORD *)v2 + 88LL);
    v3 = *(_QWORD *)v2 + 40LL;
    v7 = 2048LL;
    v4 = *(_QWORD *)v2;
    v11 = v3;
    v13 = &v6;
    v9 = &v7;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1401665B8, byte_1401447C1, (const GUID *)(v4 + 24), 0LL, 5u, &v8);
  }
  if ( *(int *)a1[1] >= 0 )
  {
    result = WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3111;
  }
  else
  {
    DISPLAY_MUX_MGR::CleanSwitchInProgressInternal(a1[2]);
    result = WdLogSingleEntry2(2LL, *(unsigned int *)(*(_QWORD *)*a1 + 88LL), *(int *)(*(_QWORD *)*a1 + 80LL));
    WdLogGlobalForLineNumber = 3106;
  }
  return result;
}
