/*
 * XREFs of PpmEventParkingCountSelection @ 0x140417E4C
 * Callers:
 *     PpmParkCalculateUnparkCount @ 0x140417970 (PpmParkCalculateUnparkCount.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkingCountSelection(
        char a1,
        __int16 a2,
        __int16 a3,
        __int16 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  _UNKNOWN **v11; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  __int16 *v14; // [rsp+58h] [rbp-B0h]
  __int64 v15; // [rsp+60h] [rbp-A8h]
  __int16 *v16; // [rsp+68h] [rbp-A0h]
  __int64 v17; // [rsp+70h] [rbp-98h]
  __int16 *v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  char *v20; // [rsp+88h] [rbp-80h]
  __int64 v21; // [rsp+90h] [rbp-78h]
  char *v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  char *v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  char *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  char *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  char *v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  char *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+18h] BYREF
  char v35; // [rsp+128h] [rbp+20h] BYREF
  __int16 v36; // [rsp+130h] [rbp+28h] BYREF
  __int16 v37; // [rsp+138h] [rbp+30h] BYREF
  __int16 v38; // [rsp+140h] [rbp+38h] BYREF

  v11 = &retaddr;
  v38 = a4;
  v37 = a3;
  v36 = a2;
  v35 = a1;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v11) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARKING_COUNT_SELECTION);
    if ( (_BYTE)v11 )
    {
      UserData.Ptr = (ULONGLONG)&v35;
      *(_QWORD *)&UserData.Size = 1LL;
      v14 = &v36;
      v15 = 2LL;
      v16 = &v37;
      v17 = 2LL;
      v18 = &v38;
      v20 = &a5;
      v22 = &a6;
      v24 = &a7;
      v26 = &a8;
      v28 = &a9;
      v30 = &a10;
      v32 = &a11;
      v19 = 2LL;
      v21 = 2LL;
      v23 = 4LL;
      v25 = 1LL;
      v27 = 1LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      LOBYTE(v11) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARKING_COUNT_SELECTION, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
    }
  }
  return (char)v11;
}
