/*
 * XREFs of LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x180090C10
 * Callers:
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1800A601C (LdrpVerifyAlternateResourceModuleEx.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRunOnceExecuteOnce @ 0x18008F320 (RtlRunOnceExecuteOnce.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v7; // r8
  __int16 v8; // [rsp+38h] [rbp-59h] BYREF
  __int16 v9; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v10; // [rsp+40h] [rbp-51h] BYREF
  _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-49h] BYREF
  __int64 *v12; // [rsp+68h] [rbp-29h]
  __int64 v13; // [rsp+70h] [rbp-21h]
  _DWORD *v14; // [rsp+78h] [rbp-19h]
  __int64 v15; // [rsp+80h] [rbp-11h]
  __int64 v16; // [rsp+88h] [rbp-9h]
  _DWORD v17[2]; // [rsp+90h] [rbp-1h] BYREF
  __int16 *v18; // [rsp+98h] [rbp+7h]
  __int64 v19; // [rsp+A0h] [rbp+Fh]
  __int64 v20; // [rsp+A8h] [rbp+17h]
  __int64 v21; // [rsp+B0h] [rbp+1Fh]
  __int16 *v22; // [rsp+B8h] [rbp+27h]
  __int64 v23; // [rsp+C0h] [rbp+2Fh]
  __int64 v24; // [rsp+C8h] [rbp+37h]
  __int64 v25; // [rsp+D0h] [rbp+3Fh]

  result = RtlRunOnceExecuteOnce(&stru_1801CA5C8, LdrpResReportResourceAccessInternalInitOnce, 0LL, 0LL);
  if ( result >= 0 && (unsigned int)dword_1801C4990 > 5 && (qword_1801C49A0 & 0x200000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_1801C49A8 & 0x200000000000LL) == qword_1801C49A8 )
    {
      v10 = 0x1000000LL;
      v8 = 4;
      v12 = &v10;
      v9 = 4;
      v14 = v17;
      v16 = *((_QWORD *)a1 + 1);
      v17[0] = *a1;
      v18 = &v8;
      v22 = &v9;
      v13 = 8LL;
      v15 = 2LL;
      v17[1] = 0;
      v19 = 2LL;
      v20 = a2;
      v21 = 16LL;
      v23 = 2LL;
      v24 = a3;
      v25 = 16LL;
      return tlgWriteTransfer_EtwEventWriteTransfer(
               (__int64)&dword_1801C4990,
               (unsigned __int8 *)dword_18019B2C7,
               v7,
               0LL,
               9u,
               &v11);
    }
  }
  return result;
}
