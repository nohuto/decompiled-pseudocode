/*
 * XREFs of ?MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z @ 0x1800FF9F4
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FFE4C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x18000EA4C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputRouter_OnExclusiveModeStateChangedInputThread_(
        ISMTracing *this,
        char a2,
        int a3,
        __int64 a4)
{
  const struct _tlgProvider_t *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v12; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-9h] BYREF
  char *v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  int *v16; // [rsp+78h] [rbp+27h]
  __int64 v17; // [rsp+80h] [rbp+2Fh]
  __int64 *v18; // [rsp+88h] [rbp+37h]
  __int64 v19; // [rsp+90h] [rbp+3Fh]

  if ( ISMTracing::IsEnabled() )
  {
    v7 = ISMTracing::Provider();
    if ( *(_DWORD *)v7 > 4u && tlgKeywordOn((__int64)v7, 1LL) )
    {
      v15 = v8;
      v18 = &v12;
      v12 = a4;
      v16 = &v11;
      v11 = a3;
      v14 = &v10;
      v10 = a2;
      v19 = 8LL;
      v17 = 4LL;
      tlgWriteTransfer_EventWriteTransfer(v9, byte_180218122, 0LL, 0LL, 5u, &v13);
    }
  }
}
