/*
 * XREFs of LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x180090EF4
 * Callers:
 *     LdrInitializeEnclave @ 0x180090FD0 (LdrInitializeEnclave.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRunOnceExecuteOnce @ 0x18008F320 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x1800EAAF8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

int __fastcall LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry(int a1)
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
    LODWORD(v1) = RtlRunOnceExecuteOnce(&VsmEnclaveTelemetryInitRunOnce, VsmEnclaveTelemetryInitOnce, 0LL, 0LL);
    if ( (unsigned int)dword_1801C49C8 > 4 )
    {
      LODWORD(v1) = tlgKeywordOn(&dword_1801C49C8, 0x400000000000LL);
      if ( (_BYTE)v1 )
      {
        v10 = 21LL;
        v9 = "LdrInitializeEnclave";
        v7 = a1;
        v11 = &v7;
        v12 = v5;
        LODWORD(v1) = tlgWriteTransfer_EtwEventWriteTransfer(v3, (unsigned __int8 *)dword_18019B8CD, v4, v5, v5, &v8);
      }
    }
  }
  return (int)v1;
}
