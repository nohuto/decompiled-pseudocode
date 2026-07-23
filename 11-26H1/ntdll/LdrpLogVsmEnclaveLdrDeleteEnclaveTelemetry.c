/*
 * XREFs of LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x18015DA04
 * Callers:
 *     LdrDeleteEnclave @ 0x180126340 (LdrDeleteEnclave.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRunOnceExecuteOnce @ 0x18008F320 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x1800EAAF8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

char __fastcall LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry(int a1)
{
  struct _PEB *v1; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v7; // [rsp+30h] [rbp-68h] BYREF
  _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-58h] BYREF
  const char *v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  int *v11; // [rsp+70h] [rbp-28h]
  __int64 v12; // [rsp+78h] [rbp-20h]

  v1 = NtCurrentPeb();
  if ( v1->ProcessHeap )
  {
    LOBYTE(v1) = RtlRunOnceExecuteOnce(&VsmEnclaveTelemetryInitRunOnce, VsmEnclaveTelemetryInitOnce, 0LL, 0LL);
    if ( (unsigned int)dword_1801C49C8 > 4 )
    {
      LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1801C49C8, 0x400000000000LL);
      if ( (_BYTE)v1 )
      {
        v10 = 17LL;
        v9 = "LdrDeleteEnclave";
        v7 = a1;
        v11 = &v7;
        v12 = v5;
        LOBYTE(v1) = tlgWriteTransfer_EtwEventWriteTransfer(v3, (unsigned __int8 *)dword_18019B489, v4, v5, v5, &v8);
      }
    }
  }
  return (char)v1;
}
