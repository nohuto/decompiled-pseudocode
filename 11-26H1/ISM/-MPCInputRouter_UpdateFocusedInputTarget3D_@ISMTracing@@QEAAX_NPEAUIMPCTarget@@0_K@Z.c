/*
 * XREFs of ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z @ 0x1800FFC7C
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1801007EC (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x18000EA4C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800FEBC0 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D_(
        ISMTracing *this,
        char a2,
        struct IMPCTarget *a3,
        char a4,
        unsigned __int64 a5)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rbx
  char v10; // [rsp+30h] [rbp-61h] BYREF
  char v11; // [rsp+31h] [rbp-60h] BYREF
  int PIDOfTarget; // [rsp+34h] [rbp-5Dh] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-59h] BYREF
  struct IMPCTarget *v14; // [rsp+40h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-41h] BYREF
  char *v16; // [rsp+70h] [rbp-21h]
  __int64 v17; // [rsp+78h] [rbp-19h]
  struct IMPCTarget **v18; // [rsp+80h] [rbp-11h]
  __int64 v19; // [rsp+88h] [rbp-9h]
  char *v20; // [rsp+90h] [rbp-1h]
  __int64 v21; // [rsp+98h] [rbp+7h]
  int *p_PIDOfTarget; // [rsp+A0h] [rbp+Fh]
  __int64 v23; // [rsp+A8h] [rbp+17h]
  unsigned __int64 *v24; // [rsp+B0h] [rbp+1Fh]
  __int64 v25; // [rsp+B8h] [rbp+27h]

  if ( ISMTracing::IsEnabled() )
  {
    v8 = ISMTracing::Provider();
    v9 = (__int64)v8;
    if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 1LL) )
    {
      v13 = a5;
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a3);
      v10 = a4;
      v24 = &v13;
      v14 = a3;
      p_PIDOfTarget = &PIDOfTarget;
      v11 = a2;
      v20 = &v10;
      v25 = 8LL;
      v18 = &v14;
      v16 = &v11;
      v23 = 4LL;
      v21 = 1LL;
      v19 = 8LL;
      v17 = 1LL;
      tlgWriteTransfer_EventWriteTransfer(v9, byte_1802182BE, 0LL, 0LL, 7u, &v15);
    }
  }
}
