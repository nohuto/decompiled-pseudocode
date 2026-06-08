/*
 * XREFs of InitPepPerfStates @ 0x14003BB34
 * Callers:
 *     ProcLibDeviceStart @ 0x14002E514 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003168 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     PepNotifyQueryFeedbackCounters @ 0x14003C338 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x14003C428 (PepNotifyQueryPerfCapabilities.c)
 *     ProcLibTracePepPerfCapabilities @ 0x140041104 (ProcLibTracePepPerfCapabilities.c)
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
  int v14; // edx
  int v15; // r9d
  unsigned int v16; // edx
  int v17; // r11d
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  int v21; // r9d
  unsigned __int16 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // r13d
  char v33; // r10
  char v34; // r11
  char v35; // bl
  char v36; // di
  __int64 i; // r8
  unsigned int v38; // eax
  unsigned int v39; // r9d
  unsigned int v40; // eax
  int v41; // r9d
  unsigned int v42; // r8d
  __int64 v43; // rax
  __int64 v44; // [rsp+28h] [rbp-30h]
  __int64 v45; // [rsp+30h] [rbp-28h]
  _DWORD v46[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v47; // [rsp+48h] [rbp-10h]
  __int64 v48; // [rsp+A0h] [rbp+48h] BYREF
  int v49; // [rsp+A8h] [rbp+50h] BYREF
  int v50; // [rsp+B0h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 208);
  v49 = 0;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v50 = 0;
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
    v15 = 13;
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
      LODWORD(v45) = (v19 >> 1) & 3;
      LODWORD(v44) = v16;
LABEL_42:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v22,
        (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
        v44,
        v45);
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
        LODWORD(v44) = v16;
LABEL_46:
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          1,
          v21,
          (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
          v44);
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
                       (__int64)&v49,
                       (__int64)&v50);
  v8 = FeedbackCounters;
  if ( FeedbackCounters >= 0 )
  {
    v23 = *(_QWORD *)(a1 + 1120);
    LOBYTE(v48) = 0;
    if ( (int)PoFxProcessorNotification(v23, 44LL, &v48) >= 0 )
      *((_BYTE *)v5 + 36) = v48;
    v24 = *(_QWORD *)(a1 + 1120);
    LOBYTE(v48) = 0;
    if ( (int)PoFxProcessorNotification(v24, 47LL, &v48) >= 0 )
      *(_BYTE *)v5 = v48;
    v25 = v5[2];
    if ( v5[1] < v25 || (v26 = v5[3], v25 < v26) || (v27 = v5[4], v26 < v27) || !v27 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v41 = 21;
      goto LABEL_102;
    }
    v28 = *(unsigned __int8 *)(a1 + 1136);
    if ( !(_BYTE)v28 )
    {
LABEL_113:
      v42 = v5[2];
      v5[6] = 100 * v5[1] / v42;
      v5[7] = 100 * v5[3] / v42;
      v5[8] = 100 * v5[4] / v42;
      v43 = ExAllocatePool2(64LL, 24LL, 1919119952LL);
      if ( v43 )
      {
        *(_DWORD *)v43 = 1;
        *(_QWORD *)(v43 + 4) = 5LL;
        *(_DWORD *)(v43 + 12) = v49;
        *(_DWORD *)(v43 + 20) = v50;
        *(_DWORD *)(v43 + 16) = 1;
        *(_QWORD *)(a1 + 1200) = v43;
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
          v15 = 30;
          LODWORD(v44) = -1073741670;
          LOBYTE(v14) = 2;
          goto LABEL_18;
        }
      }
      goto LABEL_71;
    }
    v48 = ExAllocatePool2(64LL, 24 * v28, 1919119952LL);
    v6 = (_DWORD *)v48;
    if ( v48 )
    {
      v29 = *(_QWORD *)(a1 + 1120);
      v46[0] = *(unsigned __int8 *)(a1 + 1136);
      v46[1] = 0;
      v47 = v48;
      v30 = PoFxProcessorNotification(v29, 41LL, v46);
      v31 = v30;
      v8 = v30;
      if ( v30 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v44) = v30;
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          2,
          34,
          (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
          v44);
LABEL_68:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v44) = v31;
          LOBYTE(v16) = 3;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            3,
            22,
            (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
            v44);
        }
        v6 = (_DWORD *)v48;
        goto LABEL_71;
      }
      if ( v30 < 0 )
        goto LABEL_68;
      v6 = (_DWORD *)v48;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v38 = *(unsigned __int8 *)(a1 + 1136);
        if ( (unsigned int)i >= v38 )
          break;
        v39 = v6[6 * i];
        v16 = 100 * v39 % v5[2];
        v6[6 * i + 2] = 100 * v39 / v5[2];
        v40 = v5[4];
        LODWORD(v48) = v40;
        if ( v39 < v40 || (v16 = v5[1], v39 > v16) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_47;
          v21 = 23;
          goto LABEL_98;
        }
        if ( (_DWORD)i )
        {
          if ( v39 >= v6[6 * (unsigned int)(i - 1)] )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v22 = 24;
            LODWORD(v45) = i - 1;
            LODWORD(v44) = i;
            goto LABEL_42;
          }
          v40 = v48;
        }
        if ( v39 == v16 )
          v33 = 1;
        if ( v39 == v40 )
          v34 = 1;
        if ( v39 == v5[3] )
          v35 = 1;
        if ( v39 == v5[2] )
        {
          v36 = 1;
          if ( v6[6 * i + 1] != v5[5] )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v21 = 25;
LABEL_98:
            LODWORD(v44) = i;
            goto LABEL_46;
          }
        }
      }
      if ( v33 )
      {
        if ( v34 )
        {
          if ( v35 )
          {
            if ( v36 )
            {
              *((_BYTE *)v5 + 37) = v38;
              *((_QWORD *)v5 + 5) = v6;
              goto LABEL_113;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v41 = 29;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v41 = 28;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_47;
          v41 = 27;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v41 = 26;
      }
LABEL_102:
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        1,
        v41,
        (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids);
      goto LABEL_47;
    }
LABEL_12:
    v8 = -1073741670;
    goto LABEL_71;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = 20;
LABEL_17:
    LODWORD(v44) = FeedbackCounters;
    LOBYTE(v14) = 3;
LABEL_18:
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      3,
      v15,
      (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
      v44);
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
