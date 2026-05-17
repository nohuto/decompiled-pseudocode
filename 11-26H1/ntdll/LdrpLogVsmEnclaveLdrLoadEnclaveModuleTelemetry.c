/*
 * XREFs of LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x18015DC1C
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1801394E0 (LdrLoadEnclaveModule.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x1800EB8E8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

char __fastcall LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry(int a1, char a2)
{
  struct _PEB *v2; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v9; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+34h] [rbp-15h] BYREF
  _BYTE v11[32]; // [rsp+40h] [rbp-9h] BYREF
  const char *v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  int *v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  char *v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]

  v2 = NtCurrentPeb();
  if ( v2->ProcessHeap )
  {
    LOBYTE(v2) = RtlRunOnceExecuteOnce(
                   &VsmEnclaveTelemetryInitRunOnce,
                   (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))VsmEnclaveTelemetryInitOnce,
                   0LL,
                   0LL);
    if ( (unsigned int)dword_1801C59C8 > 4 )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)&dword_1801C59C8, 0x400000000000LL);
      if ( (_BYTE)v2 )
      {
        v13 = 21LL;
        v12 = "LdrLoadEnclaveModule";
        v10 = a1;
        v14 = &v10;
        v16 = &v9;
        v15 = 4LL;
        v9 = a2;
        v17 = 1LL;
        LOBYTE(v2) = tlgWriteTransfer_EtwEventWriteTransfer(v5, byte_18019C25D, v6, v7, 5, (__int64)v11);
      }
    }
  }
  return (char)v2;
}
