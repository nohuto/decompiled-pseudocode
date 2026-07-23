/*
 * XREFs of PopTracePowerReconfig @ 0x1404EB07C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS PopTracePowerReconfig()
{
  NTSTATUS v0; // r9d
  NTSTATUS result; // eax
  int v2; // [rsp+30h] [rbp-69h] BYREF
  int v3; // [rsp+34h] [rbp-65h] BYREF
  NTSTATUS v4; // [rsp+38h] [rbp-61h] BYREF
  int v5; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v6; // [rsp+40h] [rbp-59h] BYREF
  int v7; // [rsp+44h] [rbp-55h] BYREF
  _DWORD v8[2]; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v10; // [rsp+70h] [rbp-29h]
  __int64 v11; // [rsp+78h] [rbp-21h]
  int *v12; // [rsp+80h] [rbp-19h]
  __int64 v13; // [rsp+88h] [rbp-11h]
  int *v14; // [rsp+90h] [rbp-9h]
  __int64 v15; // [rsp+98h] [rbp-1h]
  NTSTATUS *v16; // [rsp+A0h] [rbp+7h]
  __int64 v17; // [rsp+A8h] [rbp+Fh]
  int *v18; // [rsp+B0h] [rbp+17h]
  __int64 v19; // [rsp+B8h] [rbp+1Fh]
  int *v20; // [rsp+C0h] [rbp+27h]
  __int64 v21; // [rsp+C8h] [rbp+2Fh]
  int *v22; // [rsp+D0h] [rbp+37h]
  __int64 v23; // [rsp+D8h] [rbp+3Fh]

  v0 = 0;
  if ( (_DWORD)xmmword_140F10698 )
  {
    result = 100 * DWORD1(xmmword_140F10660) / (unsigned int)xmmword_140F10698;
    v0 = result;
  }
  v8[0] = MEMORY[0xFFFFF78000000014];
  v8[1] = MEMORY[0xFFFFF78000000018];
  if ( (unsigned int)dword_140E07560 > 5 && (qword_140E07570 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_140E07578 & 0x400000000000LL) == qword_140E07578 )
    {
      v4 = v0;
      v10 = v8;
      v2 = dword_140F10634;
      v5 = xmmword_140F10660 & 1;
      v12 = &v2;
      v3 = xmmword_140F10698;
      v14 = &v3;
      v16 = &v4;
      v18 = &v5;
      v6 = (unsigned __int8)byte_140F10800;
      v20 = &v6;
      v7 = qword_140F10814;
      v22 = &v7;
      v11 = 8LL;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07560,
               (unsigned __int8 *)&byte_14004BB57,
               0LL,
               0LL,
               9u,
               &v9);
    }
  }
  return result;
}
