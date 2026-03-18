/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403F1C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400423CC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x140065344 (-LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D4150 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     DxgkInvalidateQdcCache @ 0x1403660C0 (DxgkInvalidateQdcCache.c)
 *     _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1403F2268 (_VIDPN_MGR--_MonitorEventHandler_--_2_--_AUTO_PERFTRACK--__AUTO_PERFTRACK.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1403F22B4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403F2844 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall VIDPN_MGR::_MonitorEventHandler(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r13
  unsigned int v8; // edi
  unsigned int v9; // ebx
  unsigned int v11; // r14d
  __int64 v13; // rax
  __int64 v14; // r15
  _QWORD *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  DMMVIDEOPRESENTTARGET *v22; // rax
  unsigned int *NextTarget; // rsi
  _QWORD *v24; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v25; // r12
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v29; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+38h] [rbp-18h]
  unsigned __int64 v31; // [rsp+40h] [rbp-10h]
  int v32; // [rsp+48h] [rbp-8h]

  v7 = a5;
  v8 = 0;
  v9 = a6;
  v11 = a4;
  v29 = a4;
  v30 = a5;
  LOBYTE(v32) = 1;
  v31 = __PAIR64__(a2, a6);
  if ( a4 > 3 && a4 - 7 > 5 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6129;
LABEL_52:
    v8 = -1073741811;
    goto LABEL_84;
  }
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6148;
    }
    if ( !*(_QWORD *)(a1 + 3160) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6149;
    }
    v13 = *(_QWORD *)(a1 + 3160);
    v14 = *(_QWORD *)(v13 + 104);
    if ( !v14 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6160;
      v8 = -1071774923;
      goto LABEL_84;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&a5, *(_QWORD *)(v13 + 104));
    if ( v11 != 8 )
    {
      if ( (int)v11 > 8 )
      {
        if ( v11 == 9 )
        {
          if ( a2 == -1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6371;
          }
          if ( !*(_DWORD *)(v14 + 536) )
            ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
              *(_QWORD *)(a1 + 3160),
              a2,
              v11,
              v7,
              0,
              a7,
              v29,
              v30,
              v31,
              v32);
          goto LABEL_83;
        }
        if ( v11 == 10 )
        {
          if ( a2 == -1 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 6389;
          }
          v8 = VIDPN_MGR::OnMonitorConnectionChanged(v14, a2, v15, v11);
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
            *(_QWORD *)(a1 + 3160),
            a2,
            v11,
            v7,
            1,
            a7,
            v29,
            v30,
            v31,
            v32);
LABEL_47:
          DxgkInvalidateQdcCache();
LABEL_83:
          DXGFASTMUTEX::Release((struct _KTHREAD **)(a5 + 40));
          goto LABEL_84;
        }
        if ( v11 != 11 )
        {
          if ( v11 == 12 )
          {
            if ( a2 == -1 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6424;
            }
            v8 = VIDPN_MGR::OnMonitorConnectionChanged(v14, a2, v15, v11);
            ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
              *(_QWORD *)(a1 + 3160),
              a2,
              v11,
              v7,
              0,
              a7,
              v29,
              v30,
              v31,
              v32);
            goto LABEL_83;
          }
LABEL_69:
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 6442;
          goto LABEL_51;
        }
        if ( a2 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6413;
        }
        v27 = VIDPN_MGR::OnMonitorConnectionChanged(v14, a2, v15, v11);
        goto LABEL_64;
      }
      if ( !v11 )
        goto LABEL_19;
      if ( v11 == 1 )
      {
        v8 = VIDPN_MGR::OnMonitorConnectionChanged(v14, a2, v15, 1LL);
        if ( !*(_DWORD *)(v14 + 536) )
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
            *(_QWORD *)(a1 + 3160),
            a2,
            1LL,
            v7,
            1,
            a7,
            v29,
            v30,
            v31,
            v32);
        goto LABEL_83;
      }
      if ( v11 != 2 )
      {
        if ( v11 != 3 )
        {
          if ( v11 == 7 )
          {
LABEL_19:
            v16 = a2;
            if ( a2 == -1 )
            {
              if ( v11 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 6186;
              }
              v17 = 0LL;
              v15 = (_QWORD *)(*(_QWORD *)(v14 + 120) + 24LL);
              if ( (_QWORD *)*v15 != v15 )
                v17 = *v15 - 8LL;
              if ( !v17 || (v16 = *(unsigned int *)(v17 + 24), (_DWORD)v16 == -1) )
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 6194;
                DXGFASTMUTEX::Release((struct _KTHREAD **)(a5 + 40));
                v8 = -1071774971;
                goto LABEL_84;
              }
            }
            v8 = VIDPN_MGR::OnMonitorConnectionChanged(v14, v16, v15, v11);
            if ( !*(_DWORD *)(v14 + 536)
              && !v11
              && !*(_BYTE *)(a1 + 3057)
              && (unsigned __int64)(v7 - 1) <= 4
              && v9 - 1 <= 2 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 120) + 72LL));
              v21 = *(_QWORD *)(v14 + 120);
              v22 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v21, a2);
              if ( v22
                && DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(v22, *(_DWORD *)(v14 + 540), *(_DWORD *)(v14 + 544)) )
              {
                v11 = 6;
                v7 = 0LL;
              }
              ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
                *(_QWORD *)(a1 + 3160),
                a2,
                v11,
                v7,
                1,
                a7,
                v29,
                v30,
                v31,
                v32);
              LOBYTE(v32) = 0;
              if ( v21 )
                ReferenceCounted::Release((ReferenceCounted *)(v21 + 64));
            }
            goto LABEL_47;
          }
          goto LABEL_69;
        }
        if ( a2 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6285;
        }
        if ( *(_DWORD *)(v14 + 536) )
          goto LABEL_83;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 120) + 72LL));
        v18 = *(_QWORD **)(v14 + 120);
        v19 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)v18, a2);
        if ( v19 && *(_QWORD *)(v19 + 112) )
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
            *(_QWORD *)(a1 + 3160),
            v20,
            3LL,
            v7,
            0,
            a7,
            v29,
            v30,
            v31,
            v32);
LABEL_33:
        if ( v18 )
          ReferenceCounted::Release((ReferenceCounted *)(v18 + 8));
        goto LABEL_83;
      }
    }
    if ( (_DWORD)v7 != 1 && (v7 & 0xFFFFFFFC) != 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6321;
LABEL_51:
      DXGFASTMUTEX::Release((struct _KTHREAD **)(a5 + 40));
      goto LABEL_52;
    }
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 3160) + 16LL) + 3044LL) < 1105 && a2 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 120) + 72LL));
      v18 = *(_QWORD **)(v14 + 120);
      NextTarget = 0LL;
      v24 = (_QWORD *)v18[3];
      if ( v24 != v18 + 3 )
        NextTarget = (unsigned int *)(v24 - 1);
      if ( NextTarget )
      {
        v25 = a7;
        do
        {
          v26 = VIDPN_MGR::PowerOnOffVidPnTarget((_QWORD *)v14, 0xFFFFFFFF, v11, v7, v25);
          v8 = v26;
          if ( v26 < 0 )
          {
            WdLogSingleEntry2(2LL, NextTarget[6], v26);
            WdLogGlobalForLineNumber = 6359;
          }
          NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                         (DMMVIDEOPRESENTTARGETSET *)v18,
                                         (const struct DMMVIDEOPRESENTTARGET *const)NextTarget);
        }
        while ( NextTarget );
      }
      goto LABEL_33;
    }
    v27 = VIDPN_MGR::PowerOnOffVidPnTarget((_QWORD *)v14, a2, v11, v7, a7);
LABEL_64:
    v8 = v27;
    goto LABEL_83;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 6142;
  v8 = -1071775742;
LABEL_84:
  VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(&v29);
  return v8;
}
