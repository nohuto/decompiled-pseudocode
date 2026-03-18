/*
 * XREFs of PopAdaptiveStandbyWnfCallback @ 0x1407E1100
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140466BF0 (EtwActivityIdControl.c)
 *     IoGetActivityIdThread @ 0x14046F440 (IoGetActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x140491810 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140499E20 (IoClearActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060B92C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCalculateBatteryInformation @ 0x1407DE768 (PopAdaptiveStandbyCalculateBatteryInformation.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407DF44C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x1407E0CBC (PopAdaptiveStandbyTraceSessionSettings.c)
 *     ExQueryWnfStateData @ 0x1409489F0 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopAdaptiveStandbyWnfCallback(__int64 a1, bool *a2, __int64 a3, int a4)
{
  struct _LIST_ENTRY *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v10; // rax
  int v11; // ebx
  struct _LIST_ENTRY *ActivityIdThread; // rax
  struct _LIST_ENTRY *v13; // rax
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  bool v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-90h] BYREF
  GUID *v24; // [rsp+80h] [rbp-80h]
  __int128 v25; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v26[3]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int v28; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v29[2]; // [rsp+E0h] [rbp-20h] BYREF
  bool *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  __int64 *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  char *v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]

  v17 = a4;
  v24 = 0LL;
  v21 = 0;
  v15 = 0;
  v19 = 0LL;
  v27 = 0LL;
  v28 = 0;
  ActivityId = 0LL;
  v20 = 0LL;
  v25 = 0LL;
  memset(v26, 0, sizeof(v26));
  EtwActivityIdControl(3u, &ActivityId);
  v6 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v24 = (GUID *)v6;
  if ( (unsigned int)dword_140E08090 > 5 )
  {
    LODWORD(v18) = v17;
    v30 = a2;
    v32 = &v18;
    v31 = 8LL;
    v33 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)byte_14004F57D,
      &ActivityId,
      (const GUID *)v6,
      4u,
      v29);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v7, v8, v9);
  v10 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 == WNF_PO_COMPOSITE_BATTERY )
  {
    v15 = 60;
    v11 = ExQueryWnfStateData(a1, &v17, v26, &v15);
    if ( v11 < 0 )
      goto LABEL_32;
    if ( v15 != 60 )
      goto LABEL_6;
    PopAdaptiveStandbyCalculateBatteryInformation(v26, (__int64)&v20);
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    {
      dword_140F0B7F8 = v21;
      xmmword_140F0B7E8 = v20;
    }
    PopAdaptiveStandbyHandleBatteryUpdate((__int64)PopAdaptiveStandbyContext, (NTSTATUS *)&v20);
    goto LABEL_30;
  }
  if ( v10 == WNF_SEB_AUDIO_ACTIVITY )
  {
    v15 = 8;
    v11 = ExQueryWnfStateData(a1, &v17, &v19, &v15);
    if ( v11 < 0 )
      goto LABEL_32;
    if ( v15 == 8 )
    {
      byte_140F0B810 = (v19 & 2) != 0;
      if ( (unsigned int)dword_140E08090 > 5 )
      {
        v16 = (v19 & 2) != 0;
        v30 = &v16;
        v31 = 1LL;
        ActivityIdThread = IoGetActivityIdThread();
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08090,
          (unsigned __int8 *)byte_14004F5B3,
          (const GUID *)ActivityIdThread,
          0LL,
          3u,
          v29);
      }
LABEL_30:
      v11 = 0;
      goto LABEL_32;
    }
LABEL_6:
    v11 = -1073741789;
    goto LABEL_32;
  }
  if ( v10 == WNF_PO_SLEEPSTUDY_SESSION_CHANGE )
  {
    v15 = 16;
    v11 = ExQueryWnfStateData(a1, &v17, &v25, &v15);
    if ( v11 < 0 )
      goto LABEL_32;
    if ( v15 != 16 )
      goto LABEL_6;
    if ( (_DWORD)qword_140F0B848 == 1 )
    {
      if ( DWORD2(v25) == 2 )
        goto LABEL_23;
    }
    else if ( (_DWORD)qword_140F0B848 != 2 )
    {
      goto LABEL_23;
    }
    PopAdaptiveStandbyTraceSessionSettings();
LABEL_23:
    if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline()
      && DWORD2(v25) == 1 )
    {
      dword_140F0B86C = dword_140F0B784;
      *(_OWORD *)((char *)&qword_140F0B848 + 4) = xmmword_140F0B764;
      dword_140F0B890 = dword_140F0B7B8;
      xmmword_140F0B85C = xmmword_140F0B774;
      unk_140F0B870 = unk_140F0B798;
      xmmword_140F0B880 = xmmword_140F0B7A8;
    }
    qword_140F0B840 = v25;
    LODWORD(qword_140F0B848) = DWORD2(v25);
    if ( (unsigned int)dword_140E08090 > 5 )
    {
      v22 = v25;
      v30 = (bool *)&v22;
      v32 = &v18;
      v34 = (char *)&v18 + 4;
      v31 = 8LL;
      v18 = *((_QWORD *)&v25 + 1);
      v33 = 4LL;
      v35 = 4LL;
      v13 = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08090,
        (unsigned __int8 *)&dword_14004F5EC,
        (const GUID *)v13,
        0LL,
        5u,
        v29);
    }
    if ( (_DWORD)qword_140F0B848 == 1 )
      PopAdaptiveStandbyTraceSessionSettings();
    goto LABEL_30;
  }
  v11 = -1073741811;
LABEL_32:
  PopReleaseRwLock(&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08090 > 5 )
  {
    v30 = (bool *)&v18 + 4;
    HIDWORD(v18) = v11;
    v31 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08090,
      (unsigned __int8 *)word_14004F642,
      &ActivityId,
      v24,
      3u,
      v29);
  }
  IoClearActivityIdThread((struct _LIST_ENTRY *)v24);
  return (unsigned int)v11;
}
