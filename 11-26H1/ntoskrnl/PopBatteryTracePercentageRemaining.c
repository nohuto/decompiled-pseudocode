/*
 * XREFs of PopBatteryTracePercentageRemaining @ 0x1409463FC
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall PopBatteryTracePercentageRemaining(int a1, int a2, int a3, int a4)
{
  char result; // al
  BOOL v5; // [rsp+38h] [rbp-D0h] BYREF
  int v6; // [rsp+3Ch] [rbp-CCh] BYREF
  int v7; // [rsp+40h] [rbp-C8h] BYREF
  BOOL v8; // [rsp+44h] [rbp-C4h] BYREF
  int v9; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+4Ch] [rbp-BCh] BYREF
  int SListFaultAddress_high; // [rsp+50h] [rbp-B8h] BYREF
  int v12; // [rsp+54h] [rbp-B4h] BYREF
  int SListFaultAddress; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  int *v15; // [rsp+78h] [rbp-90h]
  __int64 v16; // [rsp+80h] [rbp-88h]
  BOOL *v17; // [rsp+88h] [rbp-80h]
  __int64 v18; // [rsp+90h] [rbp-78h]
  int *v19; // [rsp+98h] [rbp-70h]
  __int64 v20; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+A8h] [rbp-60h] BYREF
  int *v22; // [rsp+C8h] [rbp-40h]
  __int64 v23; // [rsp+D0h] [rbp-38h]
  int *v24; // [rsp+D8h] [rbp-30h]
  __int64 v25; // [rsp+E0h] [rbp-28h]
  BOOL *v26; // [rsp+E8h] [rbp-20h]
  __int64 v27; // [rsp+F0h] [rbp-18h]
  int *v28; // [rsp+F8h] [rbp-10h]
  __int64 v29; // [rsp+100h] [rbp-8h]
  int *v30; // [rsp+108h] [rbp+0h]
  __int64 v31; // [rsp+110h] [rbp+8h]
  int *p_SListFaultAddress_high; // [rsp+118h] [rbp+10h]
  __int64 v33; // [rsp+120h] [rbp+18h]
  int *v34; // [rsp+128h] [rbp+20h]
  __int64 v35; // [rsp+130h] [rbp+28h]
  int *p_SListFaultAddress; // [rsp+138h] [rbp+30h]
  __int64 v37; // [rsp+140h] [rbp+38h]
  int v38; // [rsp+178h] [rbp+70h] BYREF
  int v39; // [rsp+180h] [rbp+78h] BYREF
  int v40; // [rsp+190h] [rbp+88h] BYREF

  v40 = a4;
  v39 = a2;
  v38 = a1;
  result = a3 == 0;
  v5 = a3 == 0;
  if ( PopBatteryEtwRegistered )
  {
    result = EtwEventEnabled(
               (REGHANDLE)PopWeakChargerLock.Header.WaitListHead.Blink,
               &BATTERY_EVT_BATTERY_PERCENT_REMAINING);
    if ( result )
    {
      UserData.Ptr = (ULONGLONG)&v38;
      *(_QWORD *)&UserData.Size = 4LL;
      v15 = &v39;
      v16 = 4LL;
      v17 = &v5;
      v18 = 4LL;
      v19 = &v40;
      v20 = 4LL;
      result = EtwWrite(
                 (REGHANDLE)PopWeakChargerLock.Header.WaitListHead.Blink,
                 &BATTERY_EVT_BATTERY_PERCENT_REMAINING,
                 0LL,
                 4u,
                 &UserData);
    }
  }
  if ( (unsigned int)dword_140E07598 > 5 && (qword_140E075A8 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_140E075B0 & 0x400000000000LL) == qword_140E075B0 )
    {
      v6 = v38;
      v23 = 4LL;
      v22 = &v6;
      v7 = v39;
      v24 = &v7;
      v8 = v5;
      v26 = &v8;
      v9 = v40;
      v28 = &v9;
      v10 = DWORD1(xmmword_140F0FEA0);
      v30 = &v10;
      SListFaultAddress_high = HIDWORD(stru_140F10070.SListFaultAddress);
      p_SListFaultAddress_high = &SListFaultAddress_high;
      v12 = xmmword_140F0FED8;
      v34 = &v12;
      SListFaultAddress = (int)stru_140F10070.SListFaultAddress;
      p_SListFaultAddress = &SListFaultAddress;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07598,
               (unsigned __int8 *)byte_14004D8E3,
               0LL,
               0LL,
               0xAu,
               &v21);
    }
  }
  return result;
}
