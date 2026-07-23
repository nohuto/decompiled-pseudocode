/*
 * XREFs of PopTracePowerButtonSuppressionActionUpdate @ 0x140B34410
 * Callers:
 *     PopEvaluatePowerButtonSuppressionState @ 0x140B34328 (PopEvaluatePowerButtonSuppressionState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopTracePowerButtonSuppressionActionUpdate(char a1, int a2, int a3, int a4, int a5)
{
  NTSTATUS result; // eax
  char v6; // [rsp+30h] [rbp-61h] BYREF
  int v7; // [rsp+34h] [rbp-5Dh] BYREF
  int v8; // [rsp+38h] [rbp-59h] BYREF
  int v9; // [rsp+3Ch] [rbp-55h] BYREF
  int v10; // [rsp+40h] [rbp-51h] BYREF
  __int64 v11; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-41h] BYREF
  char *v13; // [rsp+70h] [rbp-21h]
  __int64 v14; // [rsp+78h] [rbp-19h]
  int *v15; // [rsp+80h] [rbp-11h]
  __int64 v16; // [rsp+88h] [rbp-9h]
  int *v17; // [rsp+90h] [rbp-1h]
  __int64 v18; // [rsp+98h] [rbp+7h]
  int *v19; // [rsp+A0h] [rbp+Fh]
  __int64 v20; // [rsp+A8h] [rbp+17h]
  int *v21; // [rsp+B0h] [rbp+1Fh]
  __int64 v22; // [rsp+B8h] [rbp+27h]
  __int64 *v23; // [rsp+C0h] [rbp+2Fh]
  __int64 v24; // [rsp+C8h] [rbp+37h]

  if ( (unsigned int)dword_140E07560 > 5 && (qword_140E07570 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_140E07578 & 0x400000000000LL) == qword_140E07578 )
    {
      v6 = a1;
      v13 = &v6;
      v7 = a2;
      v15 = &v7;
      v8 = a3;
      v17 = &v8;
      v9 = a4;
      v19 = &v9;
      v10 = a5;
      v21 = &v10;
      v23 = &v11;
      v24 = 8LL;
      v14 = 1LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v11 = 0x1000000LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07560,
               (unsigned __int8 *)&dword_14004AF24,
               0LL,
               0LL,
               8u,
               &v12);
    }
  }
  return result;
}
