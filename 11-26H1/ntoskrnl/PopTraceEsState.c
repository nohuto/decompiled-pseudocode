/*
 * XREFs of PopTraceEsState @ 0x1404EB7BC
 * Callers:
 *     PopEsSnapTelemetry @ 0x140B5FF60 (PopEsSnapTelemetry.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopTraceEsState(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  NTSTATUS result; // eax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-A0h] BYREF
  int *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  __int64 *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  int *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  int *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  __int64 *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]

  if ( (unsigned int)dword_140E07560 > 5 && (qword_140E07570 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_140E07578 & 0x400000000000LL) == qword_140E07578 )
    {
      v16 = a2;
      v19 = &v9;
      v10 = a3;
      v21 = &v16;
      v14 = (unsigned __int8)PopEsLastUserAwaySetting;
      v23 = &v10;
      v9 = PopEsReason;
      v25 = &v11;
      v12 = a5;
      v27 = &v12;
      v29 = &v13;
      v31 = &v14;
      v15 = a8;
      v33 = &v15;
      v35 = &v17;
      v20 = 4LL;
      v22 = 8LL;
      v24 = 4LL;
      v11 = (unsigned __int8)PopEsAcOnline;
      v26 = 4LL;
      v28 = 4LL;
      v13 = PopEsLastBatteryThreshold;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v17 = 0x1000000LL;
      v36 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07560,
               (unsigned __int8 *)&byte_14004B9AF,
               0LL,
               0LL,
               0xBu,
               &v18);
    }
  }
  return result;
}
