/*
 * XREFs of PopAdaptiveStandbyWnfCallback @ 0x1407E6000
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     IoGetActivityIdThread @ 0x140468BC0 (IoGetActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x14048B360 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140493970 (IoClearActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060E8A8 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCalculateBatteryInformation @ 0x1407E2DE8 (PopAdaptiveStandbyCalculateBatteryInformation.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407E3E3C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x1407E5B18 (PopAdaptiveStandbyTraceSessionSettings.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopAdaptiveStandbyWnfCallback(__int64 a1, int *a2, __int64 a3, int a4)
{
  struct _LIST_ENTRY *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v10; // rax
  int v11; // ebx
  int v12; // ecx
  struct _LIST_ENTRY *ActivityIdThread; // rax
  struct _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *v15; // rax
  _BYTE v17[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  char v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  __int128 v28; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+90h] [rbp-70h] BYREF
  GUID *v32; // [rsp+A0h] [rbp-60h]
  __int128 v33; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v34[3]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v37[2]; // [rsp+100h] [rbp+0h] BYREF
  int *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  int *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  int *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+150h] [rbp+50h] BYREF
  char *v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]
  int *v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  __int64 *v49; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]
  char *v51; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  int *v53; // [rsp+1B0h] [rbp+B0h]
  __int64 v54; // [rsp+1B8h] [rbp+B8h]
  _BYTE *v55; // [rsp+1C0h] [rbp+C0h]
  __int64 v56; // [rsp+1C8h] [rbp+C8h]
  __int64 *v57; // [rsp+1D0h] [rbp+D0h]
  __int64 v58; // [rsp+1D8h] [rbp+D8h]
  char *v59; // [rsp+1E0h] [rbp+E0h]
  __int64 v60; // [rsp+1E8h] [rbp+E8h]
  __int64 *v61; // [rsp+1F0h] [rbp+F0h]
  __int64 v62; // [rsp+1F8h] [rbp+F8h]
  int *v63; // [rsp+200h] [rbp+100h]
  __int64 v64; // [rsp+208h] [rbp+108h]
  int *v65; // [rsp+210h] [rbp+110h]
  __int64 v66; // [rsp+218h] [rbp+118h]

  v21 = a4;
  v32 = 0LL;
  v29 = 0;
  v35 = 0LL;
  v36 = 0;
  v18 = 0;
  ActivityId = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v33 = 0LL;
  memset(v34, 0, sizeof(v34));
  EtwActivityIdControl(3u, &ActivityId);
  v6 = IoSetActivityIdThread((struct _LIST_ENTRY *)&ActivityId);
  v32 = (GUID *)v6;
  if ( (unsigned int)dword_140E08138 > 5 )
  {
    v22 = v21;
    v38 = a2;
    v40 = &v22;
    v39 = 8LL;
    v41 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)&dword_14004FE54,
      &ActivityId,
      (const GUID *)v6,
      4u,
      v37);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v7, v8, v9);
  v10 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 == WNF_PO_COMPOSITE_BATTERY )
  {
    v18 = 60;
    v11 = ExQueryWnfStateData(a1, &v21, v34, &v18);
    if ( v11 < 0 )
      goto LABEL_34;
    if ( v18 != 60 )
      goto LABEL_6;
    PopAdaptiveStandbyCalculateBatteryInformation(v34, (__int64)&v28);
    if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
    {
      v12 = dword_140F0BB78;
      xmmword_140F0BB7C = xmmword_140F0BB68;
      dword_140F0BB8C = dword_140F0BB78;
      dword_140F0BB78 = v29;
      xmmword_140F0BB68 = v28;
      if ( (unsigned int)dword_140E08138 > 5 )
      {
        v46 = 1LL;
        v19 = v28 & 1;
        v45 = &v19;
        v22 = DWORD1(v28);
        v47 = &v22;
        v24 = *((_QWORD *)&v28 + 1);
        v49 = &v24;
        v51 = (char *)&v24 + 4;
        v53 = &v25;
        v48 = 4LL;
        v17[0] = xmmword_140F0BB7C & 1;
        v55 = v17;
        v26 = *(_QWORD *)((char *)&xmmword_140F0BB7C + 4);
        v57 = &v26;
        v59 = (char *)&v26 + 4;
        LODWORD(v27) = HIDWORD(xmmword_140F0BB7C);
        v61 = &v27;
        v63 = &v23;
        v20 = dword_140F0BBCC;
        v65 = &v20;
        v50 = 4LL;
        v52 = 4LL;
        v25 = v29;
        v54 = 4LL;
        v56 = 1LL;
        v58 = 4LL;
        v60 = 4LL;
        v62 = 4LL;
        v23 = v12;
        v64 = 4LL;
        v66 = 4LL;
        ActivityIdThread = IoGetActivityIdThread();
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08138,
          (unsigned __int8 *)word_14004FC5A,
          (const GUID *)ActivityIdThread,
          0LL,
          0xDu,
          &v44);
      }
    }
    PopAdaptiveStandbyHandleBatteryUpdate((__int64)PopAdaptiveStandbyContext, (__int64)&v28);
    goto LABEL_32;
  }
  if ( v10 == WNF_SEB_AUDIO_ACTIVITY )
  {
    v18 = 8;
    v11 = ExQueryWnfStateData(a1, &v21, &v30, &v18);
    if ( v11 < 0 )
      goto LABEL_34;
    if ( v18 == 8 )
    {
      byte_140F0BBA4 = (v30 & 2) != 0;
      if ( (unsigned int)dword_140E08138 > 5 )
      {
        v17[0] = (v30 & 2) != 0;
        v38 = (int *)v17;
        v39 = 1LL;
        v14 = IoGetActivityIdThread();
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08138,
          (unsigned __int8 *)byte_14004FDA0,
          (const GUID *)v14,
          0LL,
          3u,
          v37);
      }
LABEL_32:
      v11 = 0;
      goto LABEL_34;
    }
LABEL_6:
    v11 = -1073741789;
    goto LABEL_34;
  }
  if ( v10 == WNF_PO_SLEEPSTUDY_SESSION_CHANGE )
  {
    v18 = 16;
    v11 = ExQueryWnfStateData(a1, &v21, &v33, &v18);
    if ( v11 < 0 )
      goto LABEL_34;
    if ( v18 != 16 )
      goto LABEL_6;
    if ( (_DWORD)qword_140F0BBD8 == 1 )
    {
      if ( DWORD2(v33) == 2 )
        goto LABEL_24;
    }
    else if ( (_DWORD)qword_140F0BBD8 != 2 )
    {
      goto LABEL_24;
    }
    PopAdaptiveStandbyTraceSessionSettings();
LABEL_24:
    if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline()
      && DWORD2(v33) == 1 )
    {
      dword_140F0BBFC = dword_140F0BB04;
      *(_OWORD *)((char *)&qword_140F0BBD8 + 4) = xmmword_140F0BAE4;
      dword_140F0BC20 = dword_140F0BB38;
      xmmword_140F0BBEC = xmmword_140F0BAF4;
      unk_140F0BC00 = unk_140F0BB18;
      xmmword_140F0BC10 = xmmword_140F0BB28;
    }
    qword_140F0BBD0 = v33;
    LODWORD(qword_140F0BBD8) = DWORD2(v33);
    if ( (unsigned int)dword_140E08138 > 5 )
    {
      v27 = v33;
      v38 = (int *)&v27;
      v40 = &v20;
      v23 = HIDWORD(v33);
      v42 = &v23;
      v39 = 8LL;
      v20 = DWORD2(v33);
      v41 = 4LL;
      v43 = 4LL;
      v15 = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08138,
        (unsigned __int8 *)byte_14004FDD9,
        (const GUID *)v15,
        0LL,
        5u,
        v37);
    }
    if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline()
      && (_DWORD)qword_140F0BBD8 == 1 )
    {
      PopAdaptiveStandbyTraceSessionSettings();
    }
    goto LABEL_32;
  }
  v11 = -1073741811;
LABEL_34:
  PopReleaseRwLock((struct _KTHREAD *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08138 > 5 )
  {
    v38 = &v20;
    v20 = v11;
    v39 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)&byte_14004FE2F,
      &ActivityId,
      v32,
      3u,
      v37);
  }
  IoClearActivityIdThread((struct _LIST_ENTRY *)v32);
  return (unsigned int)v11;
}
