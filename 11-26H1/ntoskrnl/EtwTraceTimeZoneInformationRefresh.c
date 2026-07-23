/*
 * XREFs of EtwTraceTimeZoneInformationRefresh @ 0x140B1433C
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall EtwTraceTimeZoneInformationRefresh(int a1, int a2, int a3, char a4, char a5)
{
  int v5; // r8d
  char result; // al
  char v7; // [rsp+38h] [rbp-D0h] BYREF
  char v8; // [rsp+39h] [rbp-CFh] BYREF
  char v9; // [rsp+3Ah] [rbp-CEh] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  int *v13; // [rsp+58h] [rbp-B0h]
  __int64 v14; // [rsp+60h] [rbp-A8h]
  int *v15; // [rsp+68h] [rbp-A0h]
  __int64 v16; // [rsp+70h] [rbp-98h]
  char *v17; // [rsp+78h] [rbp-90h]
  __int64 v18; // [rsp+80h] [rbp-88h]
  char *v19; // [rsp+88h] [rbp-80h]
  __int64 v20; // [rsp+90h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+98h] [rbp-70h] BYREF
  int *v22; // [rsp+B8h] [rbp-50h]
  __int64 v23; // [rsp+C0h] [rbp-48h]
  __int64 *v24; // [rsp+C8h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-38h]
  char *v26; // [rsp+D8h] [rbp-30h]
  __int64 v27; // [rsp+E0h] [rbp-28h]
  char *v28; // [rsp+E8h] [rbp-20h]
  __int64 v29; // [rsp+F0h] [rbp-18h]
  char *v30; // [rsp+F8h] [rbp-10h]
  __int64 v31; // [rsp+100h] [rbp-8h]
  int v32; // [rsp+138h] [rbp+30h] BYREF
  int v33; // [rsp+140h] [rbp+38h] BYREF
  int v34; // [rsp+148h] [rbp+40h] BYREF
  char v35; // [rsp+150h] [rbp+48h] BYREF

  v35 = a4;
  v34 = a3;
  v33 = a2;
  v32 = a1;
  v5 = a3 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
      result = 68;
    else
      result = 85;
  }
  else
  {
    result = 83;
  }
  if ( (unsigned int)dword_140E08F78 > 5 )
  {
    v7 = result;
    v10 = a1;
    v26 = &v7;
    v22 = &v10;
    v28 = &v8;
    v9 = a5;
    v30 = &v9;
    LODWORD(v11) = a2;
    v24 = &v11;
    v8 = a4;
    v23 = 4LL;
    v25 = 4LL;
    v27 = 1LL;
    v29 = 1LL;
    v31 = 1LL;
    result = tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E08F78,
               (unsigned __int8 *)word_140054902,
               0LL,
               0LL,
               7u,
               &v21);
  }
  if ( EtwKernelProvRegHandle )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v32;
    v14 = 4LL;
    v13 = &v33;
    v16 = 4LL;
    v15 = &v34;
    v18 = 1LL;
    v17 = &v35;
    v19 = &a5;
    v20 = 1LL;
    return EtwWrite(EtwKernelProvRegHandle, &KernelTimeZoneInformationRefresh, 0LL, 5u, &UserData);
  }
  return result;
}
