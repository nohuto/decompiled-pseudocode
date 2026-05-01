/*
 * XREFs of CrmLogSrvUnregisterStop @ 0x180031204
 * Callers:
 *     CrmSrvUnregister @ 0x180032344 (CrmSrvUnregister.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmLogSrvUnregisterStop(int a1, _BYTE *a2)
{
  __int64 result; // rax
  _BYTE *v5; // rax
  int v6; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v7[80]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v8[32]; // [rsp+90h] [rbp-9h] BYREF
  UUID *v9; // [rsp+B0h] [rbp+17h]
  __int64 v10; // [rsp+B8h] [rbp+1Fh]
  int *v11; // [rsp+C0h] [rbp+27h]
  __int64 v12; // [rsp+C8h] [rbp+2Fh]
  _BYTE *v13; // [rsp+D0h] [rbp+37h]
  int v14; // [rsp+D8h] [rbp+3Fh]
  int v15; // [rsp+DCh] [rbp+43h]

  result = (__int64)memset_0(v7, 0, 0x44uLL);
  if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 1) != 0 )
  {
    result = qword_1800E1300 & 1;
    if ( result == qword_1800E1300 )
    {
      v10 = 16LL;
      v15 = 0;
      v9 = &Uuid;
      v6 = a1;
      v11 = &v6;
      v12 = 4LL;
      v5 = v7;
      if ( a2 )
        v5 = a2;
      v13 = v5;
      v14 = 4 * (unsigned __int8)v5[1] + 8;
      return tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CBCE8, 0LL, 0LL, 5, v8);
    }
  }
  return result;
}
