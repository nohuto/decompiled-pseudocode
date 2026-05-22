/*
 * XREFs of ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x1800FF8E8
 * Callers:
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800FF5B8 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x18000EA4C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800FEBC0 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_IsTargetHolographic_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        __int64 a4,
        bool a5)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rbx
  bool v10; // [rsp+30h] [rbp-51h] BYREF
  int PIDOfTarget; // [rsp+34h] [rbp-4Dh] BYREF
  int v12; // [rsp+38h] [rbp-49h] BYREF
  __int64 v13; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-31h] BYREF
  bool *v15; // [rsp+70h] [rbp-11h]
  __int64 v16; // [rsp+78h] [rbp-9h]
  int *v17; // [rsp+80h] [rbp-1h]
  __int64 v18; // [rsp+88h] [rbp+7h]
  __int64 *v19; // [rsp+90h] [rbp+Fh]
  __int64 v20; // [rsp+98h] [rbp+17h]
  int *p_PIDOfTarget; // [rsp+A0h] [rbp+1Fh]
  __int64 v22; // [rsp+A8h] [rbp+27h]

  if ( ISMTracing::IsEnabled() )
  {
    v8 = ISMTracing::Provider();
    v9 = (__int64)v8;
    if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 1LL) )
    {
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
      v10 = a5;
      v13 = a4;
      p_PIDOfTarget = &PIDOfTarget;
      v12 = a3;
      v19 = &v13;
      v17 = &v12;
      v15 = &v10;
      v22 = 4LL;
      v20 = 8LL;
      v18 = 4LL;
      v16 = 1LL;
      tlgWriteTransfer_EventWriteTransfer(v9, byte_180218064, 0LL, 0LL, 6u, &v14);
    }
  }
}
