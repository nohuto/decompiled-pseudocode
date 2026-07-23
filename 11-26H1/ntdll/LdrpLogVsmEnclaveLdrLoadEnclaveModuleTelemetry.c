/*
 * XREFs of LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x18015DADC
 * Callers:
 *     LdrLoadEnclaveModule @ 0x180139250 (LdrLoadEnclaveModule.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRunOnceExecuteOnce @ 0x18008F320 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x1800EAAF8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

char __fastcall LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry(int a1, char a2)
{
  struct _PEB *v2; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v9; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+34h] [rbp-15h] BYREF
  _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-9h] BYREF
  const char *v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  int *v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  char *v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]

  v2 = NtCurrentPeb();
  if ( v2->ProcessHeap )
  {
    LOBYTE(v2) = RtlRunOnceExecuteOnce(&VsmEnclaveTelemetryInitRunOnce, VsmEnclaveTelemetryInitOnce, 0LL, 0LL);
    if ( (unsigned int)dword_1801C49C8 > 4 )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)&dword_1801C49C8, 0x400000000000LL);
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
        LOBYTE(v2) = tlgWriteTransfer_EtwEventWriteTransfer(v5, (unsigned __int8 *)dword_18019B275, v6, v7, 5u, &v11);
      }
    }
  }
  return (char)v2;
}
