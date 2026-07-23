/*
 * XREFs of PopDiagTracePowerButtonBugcheck @ 0x1407D6CF4
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x14060FE80 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x1407CC060 (PopRecordLongPowerButtonPressDetected.c)
 */

void __fastcall PopDiagTracePowerButtonBugcheck(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int8 *v4; // rdx
  int v5; // r8d
  ULONG v6; // [rsp+20h] [rbp-E0h]
  UCHAR Type; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int NextProcessor; // [rsp+38h] [rbp-C8h] BYREF
  int Blink_high; // [rsp+3Ch] [rbp-C4h] BYREF
  _KAFFINITY_EX *UserAffinity; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+54h] [rbp-ACh] BYREF
  ULONG SpareLong0; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+5Ch] [rbp-A4h] BYREF
  _KPROCESS *Process; // [rsp+60h] [rbp-A0h] BYREF
  _KPROCESS *v19; // [rsp+68h] [rbp-98h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+80h] [rbp-80h] BYREF
  int *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  ULONG *p_NextProcessor; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  int *p_Blink_high; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  UCHAR *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  _KPROCESS **p_Process; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  _KAFFINITY_EX **p_UserAffinity; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  char *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  _KPROCESS **v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  UCHAR *p_Type; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  char *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  _KAFFINITY_EX **v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  int *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  ULONG *p_SpareLong0; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  int *v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  __int64 *v52; // [rsp+190h] [rbp+90h]
  __int64 v53; // [rsp+198h] [rbp+98h]

  if ( a1 == 7000 )
  {
    LOBYTE(a2) = 1;
    PopRecordLongPowerButtonPressDetected(1, a2, a3, a4);
    if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
    {
      v9 = 7000;
      v22 = &v9;
      v4 = (unsigned __int8 *)&word_14004CE9E;
      NextProcessor = PopPdcDeviceListLock.NextProcessor;
      p_NextProcessor = &NextProcessor;
      Blink_high = HIDWORD(PopPdcDeviceListLock.QueueListEntry.Blink);
      p_Blink_high = &Blink_high;
      Type = PopPdcDeviceListLock.SavedApcStateFill[32];
      v28 = &Type;
      Process = PopPdcDeviceListLock.Process;
      p_Process = &Process;
      UserAffinity = PopPdcDeviceListLock.UserAffinity;
      p_UserAffinity = &UserAffinity;
      v34 = (char *)&UserAffinity + 4;
      v19 = *(_KPROCESS **)&PopPdcDeviceListLock.UserAffinityPrimaryGroup;
      v36 = &v19;
      v13 = *(_QWORD *)&PopPdcDeviceListLock.SavedApcStateFill[36];
      v38 = &v13;
      v8[0] = PopPdcDeviceListLock.SchedulerApc.Type;
      p_Type = v8;
      v42 = (char *)&v13 + 4;
      v14 = *(_DWORD *)&PopPdcDeviceListLock.SuspendCount;
      v44 = (_KAFFINITY_EX **)&v14;
      v15 = *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[16];
      v46 = &v15;
      SpareLong0 = PopPdcDeviceListLock.SchedulerApc.SpareLong0;
      p_SpareLong0 = &SpareLong0;
      v17 = *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[12];
      v50 = &v17;
      v6 = 17;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 1LL;
      v31 = 8LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 8LL;
      v39 = 4LL;
LABEL_9:
      v43 = 4LL;
      v41 = 1LL;
      v45 = 4LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, v4, 0LL, 0LL, v6, &v21);
    }
  }
  else if ( a1 == 15000
         && (unsigned int)dword_140E07560 > 5
         && tlgKeywordOn((__int64)&dword_140E07560, 0x800000000000LL) )
  {
    v17 = v5;
    v22 = &v17;
    v4 = (unsigned __int8 *)byte_14004CFFB;
    SpareLong0 = PopPdcDeviceListLock.NextProcessor;
    p_NextProcessor = &SpareLong0;
    v15 = HIDWORD(PopPdcDeviceListLock.QueueListEntry.Blink);
    p_Blink_high = &v15;
    v8[0] = PopPdcDeviceListLock.SavedApcStateFill[32];
    v28 = v8;
    v19 = PopPdcDeviceListLock.Process;
    p_Process = &v19;
    v14 = (int)PopPdcDeviceListLock.UserAffinity;
    p_UserAffinity = (_KAFFINITY_EX **)&v14;
    v34 = (char *)&v13 + 4;
    Process = *(_KPROCESS **)&PopPdcDeviceListLock.UserAffinityPrimaryGroup;
    v36 = &Process;
    v13 = __PAIR64__(
            HIDWORD(PopPdcDeviceListLock.UserAffinity),
            *(unsigned int *)&PopPdcDeviceListLock.SavedApcStateFill[36]);
    v38 = &v13;
    Type = PopPdcDeviceListLock.SchedulerApc.Type;
    p_Type = &Type;
    v42 = (char *)&UserAffinity + 4;
    UserAffinity = (_KAFFINITY_EX *)__PAIR64__(
                                      *(unsigned int *)&PopPdcDeviceListLock.SavedApcStateFill[40],
                                      *(unsigned int *)&PopPdcDeviceListLock.SuspendCount);
    v44 = &UserAffinity;
    Blink_high = *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[16];
    v46 = &Blink_high;
    NextProcessor = PopPdcDeviceListLock.SchedulerApc.SpareLong0;
    p_SpareLong0 = &NextProcessor;
    v9 = *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[12];
    v50 = &v9;
    v52 = &v20;
    v6 = 18;
    v23 = 4LL;
    v25 = 4LL;
    v27 = 4LL;
    v29 = 1LL;
    v31 = 8LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 8LL;
    v39 = 4LL;
    v20 = 0x1000000LL;
    v53 = 8LL;
    goto LABEL_9;
  }
}
