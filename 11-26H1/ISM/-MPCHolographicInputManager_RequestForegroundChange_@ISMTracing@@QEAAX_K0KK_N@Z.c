/*
 * XREFs of ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x1800BAEE8
 * Callers:
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800BB490 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x18000EA4C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(
        ISMTracing *this,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        bool a6)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r10
  bool v13; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-55h] BYREF
  int v15; // [rsp+40h] [rbp-51h] BYREF
  __int64 v16; // [rsp+48h] [rbp-49h] BYREF
  __int64 v17; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v19; // [rsp+78h] [rbp-19h]
  __int64 v20; // [rsp+80h] [rbp-11h]
  __int64 *v21; // [rsp+88h] [rbp-9h]
  __int64 v22; // [rsp+90h] [rbp-1h]
  int *v23; // [rsp+98h] [rbp+7h]
  __int64 v24; // [rsp+A0h] [rbp+Fh]
  unsigned int *v25; // [rsp+A8h] [rbp+17h]
  __int64 v26; // [rsp+B0h] [rbp+1Fh]
  bool *v27; // [rsp+B8h] [rbp+27h]
  __int64 v28; // [rsp+C0h] [rbp+2Fh]

  if ( ISMTracing::IsEnabled() )
  {
    v9 = ISMTracing::Provider();
    if ( *(_DWORD *)v9 > 4u && tlgKeywordOn((__int64)v9, 1LL) )
    {
      v14 = a5;
      v27 = &v13;
      v25 = &v14;
      v23 = &v15;
      v21 = &v16;
      v19 = &v17;
      v13 = a6;
      v28 = v10;
      v26 = v11;
      v24 = v11;
      v15 = a4;
      v16 = a3;
      v17 = a2;
      v22 = 8LL;
      v20 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v12, byte_1802132BC, 0LL, 0LL, 7u, &v18);
    }
  }
}
