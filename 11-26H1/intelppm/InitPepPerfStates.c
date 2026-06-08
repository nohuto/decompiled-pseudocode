/*
 * XREFs of InitPepPerfStates @ 0x14003C778
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x140003AC0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x14000554C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     PepNotifyQueryFeedbackCounters @ 0x14003CF7C (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x14003D06C (PepNotifyQueryPerfCapabilities.c)
 *     ProcLibTracePepPerfCapabilities @ 0x140046010 (ProcLibTracePepPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  __int64 v2; // rdx
  void (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  int v4; // edx
  _DWORD *v5; // r15
  _DWORD *v6; // r13
  int v7; // r9d
  unsigned int v8; // ebx
  unsigned int v9; // edi
  PIO_WORKITEM WorkItem; // rax
  int v11; // edx
  __int64 Pool2; // rax
  int FeedbackCounters; // eax
  unsigned __int16 v14; // r9
  unsigned __int8 v15; // dl
  unsigned int v16; // edx
  int v17; // r11d
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // r13d
  char v34; // r10
  char v35; // r11
  char v36; // bl
  char v37; // di
  __int64 i; // r8
  unsigned int v39; // eax
  unsigned int v40; // r9d
  unsigned int v41; // eax
  int v42; // r9d
  unsigned int v43; // r8d
  __int64 v44; // rax
  __int64 v45; // [rsp+28h] [rbp-30h]
  __int64 v46; // [rsp+30h] [rbp-28h]
  _DWORD v47[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v48; // [rsp+48h] [rbp-10h]
  __int64 v49; // [rsp+A0h] [rbp+48h] BYREF
  int v50; // [rsp+A8h] [rbp+50h] BYREF
  int v51; // [rsp+B0h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 208);
  v50 = 0;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v51 = 0;
  v3(WdfDriverGlobals, v2, 0LL);
  v5 = 0LL;
  v6 = 0LL;
  if ( !*(_BYTE *)(a1 + 1137) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_5:
      v8 = -1073741823;
      goto LABEL_71;
    }
    v7 = 10;
LABEL_4:
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      1,
      v7,
      (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids);
    goto LABEL_5;
  }
  v9 = *(_DWORD *)(a1 + 1128);
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v7 = 11;
    goto LABEL_4;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1176) = WorkItem;
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        4,
        12,
        (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids);
    }
    goto LABEL_12;
  }
  Pool2 = ExAllocatePool2(64LL, 8 * v9 + 56, 1919119952LL);
  v5 = (_DWORD *)Pool2;
  if ( !Pool2 )
    goto LABEL_12;
  FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v9, Pool2 + 56);
  v8 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_71;
    v14 = 13;
    goto LABEL_17;
  }
  v16 = 0;
  v17 = -1;
  v18 = -1;
  while ( v16 < v9 )
  {
    if ( !v5[2 * v16 + 15] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 14;
        goto LABEL_45;
      }
      goto LABEL_47;
    }
    v19 = v5[2 * v16 + 14];
    if ( (v19 & 6) > 2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v22 = 15;
      goto LABEL_41;
    }
    v20 = v5[2 * v16 + 14] & 0x78;
    if ( v20 > 8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v22 = 16;
LABEL_41:
      LODWORD(v46) = (v19 >> 1) & 3;
      LODWORD(v45) = v16;
LABEL_42:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v22,
        (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
        v45,
        v46);
      goto LABEL_47;
    }
    if ( (v19 & 0x81) == 0x80 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 17;
        goto LABEL_45;
      }
LABEL_47:
      v8 = -1073741811;
      goto LABEL_71;
    }
    if ( v19 >= 0x100 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 18;
LABEL_45:
        LODWORD(v45) = v16;
LABEL_46:
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v21,
          (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
          v45);
      }
      goto LABEL_47;
    }
    if ( (v19 & 0x78) != 0 )
    {
      if ( v20 == 8 && v17 == -1 )
        v17 = v16;
    }
    else if ( v18 == -1 )
    {
      v18 = v16;
    }
    ++v16;
  }
  if ( v18 == -1 )
  {
    v8 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        1,
        19,
        (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids);
    }
    goto LABEL_71;
  }
  v5[5] = v5[2 * v18 + 15];
  v5[12] = v18;
  v5[13] = v17;
  FeedbackCounters = PepNotifyQueryPerfCapabilities(
                       a1,
                       (int)v5 + 4,
                       (int)v5 + 8,
                       (int)v5 + 12,
                       (__int64)(v5 + 4),
                       (__int64)&v50,
                       (__int64)&v51);
  v8 = FeedbackCounters;
  if ( FeedbackCounters >= 0 )
  {
    v23 = *(_QWORD *)(a1 + 1120);
    LOBYTE(v49) = 0;
    if ( (int)PoFxProcessorNotification(v23, 44LL, &v49) >= 0 )
      *((_BYTE *)v5 + 36) = v49;
    v24 = *(_QWORD *)(a1 + 1120);
    LOBYTE(v49) = 0;
    if ( (int)PoFxProcessorNotification(v24, 47LL, &v49) >= 0 )
      *(_BYTE *)v5 = v49;
    v26 = v5[2];
    if ( v5[1] < v26 || (v27 = v5[3], v26 < v27) || (v28 = v5[4], v27 < v28) || !v28 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v42 = 21;
      goto LABEL_102;
    }
    v29 = *(unsigned __int8 *)(a1 + 1136);
    if ( !(_BYTE)v29 )
    {
LABEL_113:
      v43 = v5[2];
      v5[6] = 100 * v5[1] / v43;
      v5[7] = 100 * v5[3] / v43;
      v5[8] = 100 * v5[4] / v43;
      v44 = ExAllocatePool2(64LL, 24LL, 1919119952LL);
      if ( v44 )
      {
        *(_DWORD *)v44 = 1;
        *(_QWORD *)(v44 + 4) = 5LL;
        *(_DWORD *)(v44 + 12) = v50;
        *(_DWORD *)(v44 + 20) = v51;
        *(_DWORD *)(v44 + 16) = 1;
        *(_QWORD *)(a1 + 1200) = v44;
        *(_QWORD *)(a1 + 1184) = v5;
        v6 = 0LL;
        v5 = 0LL;
        v8 = 0;
        ProcLibTracePepPerfCapabilities(a1, 0LL);
      }
      else
      {
        v8 = -1073741670;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 30;
          LODWORD(v45) = -1073741670;
          v15 = 2;
          goto LABEL_18;
        }
      }
      goto LABEL_71;
    }
    v49 = ExAllocatePool2(64LL, 24 * v29, 1919119952LL);
    v6 = (_DWORD *)v49;
    if ( v49 )
    {
      v30 = *(_QWORD *)(a1 + 1120);
      v47[0] = *(unsigned __int8 *)(a1 + 1136);
      v47[1] = 0;
      v48 = v49;
      v31 = PoFxProcessorNotification(v30, 41LL, v47);
      v32 = v31;
      v8 = v31;
      if ( v31 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v45) = v31;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          2u,
          0x22u,
          (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
          v45);
LABEL_68:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v45) = v32;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x16u,
            (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
            v45);
        }
        v6 = (_DWORD *)v49;
        goto LABEL_71;
      }
      if ( v31 < 0 )
        goto LABEL_68;
      v6 = (_DWORD *)v49;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v39 = *(unsigned __int8 *)(a1 + 1136);
        if ( (unsigned int)i >= v39 )
          break;
        v40 = v6[6 * i];
        v6[6 * i + 2] = 100 * v40 / v5[2];
        v41 = v5[4];
        LODWORD(v49) = v41;
        if ( v40 < v41 || (v25 = v5[1], v40 > v25) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_47;
          v21 = 23;
          goto LABEL_98;
        }
        if ( (_DWORD)i )
        {
          if ( v40 >= v6[6 * (unsigned int)(i - 1)] )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v22 = 24;
            LODWORD(v46) = i - 1;
            LODWORD(v45) = i;
            goto LABEL_42;
          }
          v41 = v49;
        }
        if ( v40 == v25 )
          v34 = 1;
        if ( v40 == v41 )
          v35 = 1;
        if ( v40 == v5[3] )
          v36 = 1;
        if ( v40 == v5[2] )
        {
          v37 = 1;
          if ( v6[6 * i + 1] != v5[5] )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v21 = 25;
LABEL_98:
            LODWORD(v45) = i;
            goto LABEL_46;
          }
        }
      }
      if ( v34 )
      {
        if ( v35 )
        {
          if ( v36 )
          {
            if ( v37 )
            {
              *((_BYTE *)v5 + 37) = v39;
              *((_QWORD *)v5 + 5) = v6;
              goto LABEL_113;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v42 = 29;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v42 = 28;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_47;
          v42 = 27;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v42 = 26;
      }
LABEL_102:
      LOBYTE(v25) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v25,
        1,
        v42,
        (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids);
      goto LABEL_47;
    }
LABEL_12:
    v8 = -1073741670;
    goto LABEL_71;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = 20;
LABEL_17:
    LODWORD(v45) = FeedbackCounters;
    v15 = 3;
LABEL_18:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v15,
      3u,
      v14,
      (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
      v45);
  }
LABEL_71:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v5 )
    ExFreePoolWithTag(v5, (ULONG)1919119952);
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)1919119952);
  return v8;
}
