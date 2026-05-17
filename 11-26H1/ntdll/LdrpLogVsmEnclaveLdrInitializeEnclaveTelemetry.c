/*
 * XREFs of LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x180070AA4
 * Callers:
 *     LdrInitializeEnclave @ 0x180070B80 (LdrInitializeEnclave.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x1800EB8E8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

struct _PEB *__fastcall LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry(int a1)
{
  struct _PEB *result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v7[32]; // [rsp+40h] [rbp-58h] BYREF
  const char *v8; // [rsp+60h] [rbp-38h]
  __int64 v9; // [rsp+68h] [rbp-30h]
  int *v10; // [rsp+70h] [rbp-28h]
  __int64 v11; // [rsp+78h] [rbp-20h]

  result = NtCurrentPeb();
  if ( result->ProcessHeap )
  {
    result = (struct _PEB *)RtlRunOnceExecuteOnce(
                              &VsmEnclaveTelemetryInitRunOnce,
                              (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))VsmEnclaveTelemetryInitOnce,
                              0LL,
                              0LL);
    if ( (unsigned int)dword_1801C59C8 > 4 )
    {
      result = (struct _PEB *)tlgKeywordOn(&dword_1801C59C8, 0x400000000000LL);
      if ( (_BYTE)result )
      {
        v9 = 21LL;
        v8 = "LdrInitializeEnclave";
        v6 = a1;
        v10 = &v6;
        v11 = v5;
        return (struct _PEB *)tlgWriteTransfer_EtwEventWriteTransfer(v3, byte_18019C8B5, v4, v5, v5, (__int64)v7);
      }
    }
  }
  return result;
}
