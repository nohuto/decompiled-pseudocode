/*
 * XREFs of LdrpLogMapAndVerifyResourceFileFailure @ 0x180070918
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLogMapAndVerifyResourceFileFailure(
        int a1,
        unsigned __int16 *a2,
        char a3,
        int a4,
        unsigned __int16 *a5)
{
  __int64 result; // rax
  __int64 v10; // r9
  char v11; // [rsp+38h] [rbp-81h] BYREF
  int v12; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v13; // [rsp+40h] [rbp-79h] BYREF
  __int64 v14; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v15[32]; // [rsp+58h] [rbp-61h] BYREF
  __int64 *v16; // [rsp+78h] [rbp-41h]
  __int64 v17; // [rsp+80h] [rbp-39h]
  int *v18; // [rsp+88h] [rbp-31h]
  __int64 v19; // [rsp+90h] [rbp-29h]
  _DWORD *v20; // [rsp+98h] [rbp-21h]
  __int64 v21; // [rsp+A0h] [rbp-19h]
  __int64 v22; // [rsp+A8h] [rbp-11h]
  _DWORD v23[2]; // [rsp+B0h] [rbp-9h] BYREF
  char *v24; // [rsp+B8h] [rbp-1h]
  __int64 v25; // [rsp+C0h] [rbp+7h]
  int *v26; // [rsp+C8h] [rbp+Fh]
  __int64 v27; // [rsp+D0h] [rbp+17h]
  _DWORD *v28; // [rsp+D8h] [rbp+1Fh]
  __int64 v29; // [rsp+E0h] [rbp+27h]
  __int64 v30; // [rsp+E8h] [rbp+2Fh]
  _DWORD v31[2]; // [rsp+F0h] [rbp+37h] BYREF

  result = RtlRunOnceExecuteOnce(
             &qword_1801CB578,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))LdrpResReportResourceAccessInternalInitOnce,
             0LL,
             0LL);
  if ( (int)result >= 0 && (unsigned int)dword_1801C5990 > 5 && (qword_1801C59A0 & 0x200000000000LL) != 0 )
  {
    result = qword_1801C59A8 & 0x200000000000LL;
    if ( (qword_1801C59A8 & 0x200000000000LL) == qword_1801C59A8 )
    {
      v16 = &v14;
      v14 = 0x1000000LL;
      v18 = &v12;
      v20 = v23;
      v22 = *((_QWORD *)a2 + 1);
      v23[0] = *a2;
      v24 = &v11;
      v26 = &v13;
      v28 = v31;
      v30 = *((_QWORD *)a5 + 1);
      v31[0] = *a5;
      v17 = 8LL;
      v12 = a1;
      v19 = 4LL;
      v21 = 2LL;
      v23[1] = 0;
      v11 = a3;
      v25 = 1LL;
      v13 = a4;
      v27 = 4LL;
      v29 = 2LL;
      v31[1] = 0;
      return tlgWriteTransfer_EtwEventWriteTransfer(
               (__int64)&dword_1801C5990,
               byte_18019C3F9,
               0LL,
               v10,
               10,
               (__int64)v15);
    }
  }
  return result;
}
