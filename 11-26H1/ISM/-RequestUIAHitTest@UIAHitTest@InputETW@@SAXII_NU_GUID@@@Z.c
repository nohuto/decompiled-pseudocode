/*
 * XREFs of ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z @ 0x1801A3F04
 * Callers:
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1801A3D9C (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x1800137D0 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x18002A7D4 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall InputETW::UIAHitTest::RequestUIAHitTest(int a1, int a2, unsigned __int8 a3, struct _GUID *a4)
{
  int v5; // edi
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rcx
  int v10; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+3Ch] [rbp-25h] BYREF
  int v12; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-19h] BYREF
  int *v14; // [rsp+68h] [rbp+7h]
  __int64 v15; // [rsp+70h] [rbp+Fh]
  int *v16; // [rsp+78h] [rbp+17h]
  __int64 v17; // [rsp+80h] [rbp+1Fh]
  int *v18; // [rsp+88h] [rbp+27h]
  __int64 v19; // [rsp+90h] [rbp+2Fh]
  struct _GUID *v20; // [rsp+98h] [rbp+37h]
  __int64 v21; // [rsp+A0h] [rbp+3Fh]

  v5 = a3;
  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    v8 = InputETW::Provider();
    if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 1LL) )
    {
      v10 = v5;
      v18 = &v10;
      v11 = a2;
      v16 = &v11;
      v12 = a1;
      v14 = &v12;
      v20 = a4;
      v21 = 16LL;
      v19 = 4LL;
      v17 = 4LL;
      v15 = 4LL;
      tlgWriteTransfer_EventWriteTransfer(v9, byte_1802299B1, 0LL, 0LL, 6u, &v13);
    }
  }
}
