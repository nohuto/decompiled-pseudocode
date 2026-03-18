/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403DA6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14004A53C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1403DA974 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403DABBC (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall DisplayConfigCountMonitorsCallback(struct DXGADAPTER *a1, _BYTE *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int EmergentSimulatedTarget; // eax
  __int64 v9; // rbx
  _QWORD *v10; // rbx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r15
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r14
  __int64 v16; // rax
  int v17; // r14d
  int v18; // r14d
  int v19; // r14d
  _QWORD *v20; // rax
  unsigned int v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h]
  _BYTE v24[144]; // [rsp+70h] [rbp-90h] BYREF
  void *retaddr; // [rsp+138h] [rbp+38h]

  v2 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2433;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContext != NULL", 2433LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v20[3] = a1;
      v20[4] = *((int *)a1 + 104);
      v20[5] = *((unsigned int *)a1 + 103);
      WdLogGlobalForLineNumber = 2451;
    }
    else
    {
      v2 = v5;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
    return v2;
  }
  else
  {
    if ( *((_QWORD *)a1 + 395) )
    {
      if ( a2[25] )
      {
        v21[0] = -1;
        EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(a1, v21);
        if ( EmergentSimulatedTarget < 0 )
        {
          WdLogSingleEntry3(3LL, *((int *)a1 + 104), *((unsigned int *)a1 + 103), EmergentSimulatedTarget);
          WdLogGlobalForLineNumber = 2475;
        }
        else if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a2, a1, v21[0]) >= 0
               && (*((_DWORD *)a1 + 111) & 1) != 0 )
        {
          a2[25] = 0;
        }
      }
      v9 = *(_QWORD *)(*((_QWORD *)a1 + 395) + 104LL);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)v21, v9);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
      v10 = *(_QWORD **)(v9 + 120);
      NextTarget = 0LL;
      v12 = v10 + 3;
      v13 = (_QWORD *)v10[3];
      if ( v13 != v10 + 3 )
        NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v13 - 1);
      while ( NextTarget )
      {
        v14 = *((_QWORD *)NextTarget + 14);
        if ( v14 && !*((_DWORD *)NextTarget + 23) )
        {
          v16 = WdLogNewEntry5_WdTrace(v13, v12);
          v23 = 0LL;
          *(_QWORD *)(v16 + 24) = v14;
          WdLogGlobalForLineNumber = 2514;
          v22 = retaddr;
          MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v22);
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v22);
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v22);
          v23 = v14;
          MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v22);
          v17 = *(_DWORD *)(v14 + 280);
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v22);
          ++*(_DWORD *)a2;
          v18 = v17 - 1;
          if ( v18 && (v19 = v18 - 1) != 0 )
          {
            if ( v19 == 3 )
              ++*((_DWORD *)a2 + 2);
          }
          else
          {
            ++*((_DWORD *)a2 + 1);
          }
        }
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v10, NextTarget);
      }
      if ( v10 )
        ReferenceCounted::Release((ReferenceCounted *)(v10 + 8));
      DXGFASTMUTEX::Release((struct _KTHREAD **)(*(_QWORD *)v21 + 40LL));
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
    return 0LL;
  }
}
