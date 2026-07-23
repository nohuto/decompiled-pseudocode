/*
 * XREFs of PnpTraceClearDevNodeProblem @ 0x14096F8B4
 * Callers:
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpTraceClearDevNodeProblem(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, int a4)
{
  NTSTATUS result; // eax
  int v5; // [rsp+30h] [rbp-59h] BYREF
  int v6; // [rsp+34h] [rbp-55h] BYREF
  __int64 v7; // [rsp+38h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-49h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-29h]
  __int64 v10; // [rsp+68h] [rbp-21h]
  _DWORD *v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-11h]
  __int64 v13; // [rsp+80h] [rbp-9h]
  _DWORD v14[2]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD *v15; // [rsp+90h] [rbp+7h]
  __int64 v16; // [rsp+98h] [rbp+Fh]
  __int64 v17; // [rsp+A0h] [rbp+17h]
  _DWORD v18[2]; // [rsp+A8h] [rbp+1Fh] BYREF
  int *v19; // [rsp+B0h] [rbp+27h]
  __int64 v20; // [rsp+B8h] [rbp+2Fh]
  int *v21; // [rsp+C0h] [rbp+37h]
  __int64 v22; // [rsp+C8h] [rbp+3Fh]

  if ( (_DWORD)a3 != 1 && (unsigned int)dword_140E06E80 > 5 && (qword_140E06E90 & 0x800000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_140E06E98 & 0x800000000000LL) == qword_140E06E98 )
    {
      v6 = a4;
      v7 = 1LL;
      v9 = &v7;
      v11 = v14;
      v13 = *((_QWORD *)a1 + 1);
      v14[0] = *a1;
      v15 = v18;
      v17 = *((_QWORD *)a2 + 1);
      v18[0] = *a2;
      v19 = &v5;
      v21 = &v6;
      v10 = 8LL;
      v12 = 2LL;
      v14[1] = 0;
      v16 = 2LL;
      v18[1] = 0;
      v5 = a3;
      v20 = 4LL;
      v22 = 4LL;
      return tlgWriteAgg((__int64)&dword_140E06E80, (unsigned __int8 *)&dword_140048A2C, a3, 9u, &v8);
    }
  }
  return result;
}
