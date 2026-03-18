/*
 * XREFs of ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1403403F8
 * Callers:
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1402742B8 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 *     ?MonitorGetMonitorInformationForTargets@@YAJPEAXP6AJ00IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x14033F7DC (-MonitorGetMonitorInformationForTargets@@YAJPEAXP6AJ00IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1403407AC (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x140340C38 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInformationForTargets(
        MONITOR_MGR *this,
        int (__high *a2)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8),
        void *a3,
        unsigned int a4)
{
  unsigned int v6; // edx
  int NextVideoPresentTarget; // ebx
  __int64 v8; // rax
  bool v9; // r14
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // r15
  VIDPN_MGR *v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int8 IsTargetForceable; // di
  int MonitorInstance; // eax
  int v20; // eax
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v23; // rbx
  int v24; // eax
  int v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+28h] [rbp-40h]
  void *v27; // [rsp+50h] [rbp-18h] BYREF
  __int64 v28; // [rsp+58h] [rbp-10h]
  void *retaddr; // [rsp+A8h] [rbp+40h]
  unsigned int v30; // [rsp+B0h] [rbp+48h]
  __int64 v31; // [rsp+B8h] [rbp+50h] BYREF
  void *v32; // [rsp+C0h] [rbp+58h]
  unsigned int v33; // [rsp+C8h] [rbp+60h] BYREF

  v33 = a4;
  v32 = a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4597;
  }
  v33 = -1;
  v6 = -1;
LABEL_4:
  NextVideoPresentTarget = DmmGetNextVideoPresentTarget(*(void *const *)(*((_QWORD *)this + 3) + 16LL), v6, &v33);
  if ( NextVideoPresentTarget >= 0 )
  {
    v8 = *((_QWORD *)this + 3);
    v9 = 0;
    v10 = v33;
    v30 = 0;
    v11 = *(_QWORD *)(v8 + 16);
    if ( v11 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v8 + 16)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 7096;
      }
      v12 = *(_QWORD *)(v11 + 3160);
      if ( v12 )
      {
        v13 = *(VIDPN_MGR **)(v12 + 104);
        if ( v13 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v31, (__int64)v13);
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v13 + 15) + 72LL));
          v14 = *((_QWORD *)v13 + 15);
          v15 = 0LL;
          v16 = *(_QWORD *)(v14 + 24);
          if ( v16 != v14 + 24 )
            v15 = v16 - 8;
          while ( v15 )
          {
            if ( *(_DWORD *)(v15 + 24) == (_DWORD)v10 )
            {
              IsTargetForceable = DMMVIDEOPRESENTTARGET::IsTargetForceable((DMMVIDEOPRESENTTARGET *)v15);
              if ( v14 )
                ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
              DXGFASTMUTEX::Release((struct _KTHREAD **)(v31 + 40));
              v27 = retaddr;
              v28 = 0LL;
              MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v27);
              MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v33, 0, (struct MONITOR_REF_ACCESSOR *)&v27);
              NextVideoPresentTarget = MonitorInstance;
              if ( MonitorInstance >= 0 )
              {
                v23 = v28;
                if ( !v28 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 4650;
                }
                v30 = *(_DWORD *)(v23 + 280);
                v24 = MONITOR_MGR::_GetMonitorInstance(this, v33, 1, (struct MONITOR_REF_ACCESSOR *)&v27);
                NextVideoPresentTarget = v24;
                if ( v24 >= 0 || v24 == -1073741275 )
                {
                  v9 = v24 >= 0;
LABEL_21:
                  LOBYTE(v26) = v9;
                  LOBYTE(v25) = IsTargetForceable;
                  v20 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, int, int))a2)(
                          *(_QWORD *)(*((_QWORD *)this + 3) + 16LL),
                          v32,
                          v33,
                          v30,
                          v25,
                          v26);
                  NextVideoPresentTarget = v20;
                  if ( v33 != -1 && v20 >= 0 )
                  {
                    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v27);
                    v6 = v33;
                    goto LABEL_4;
                  }
                }
                else
                {
                  WdLogSingleEntry2(2LL, v33, this);
                  WdLogGlobalForLineNumber = 4671;
                }
              }
              else
              {
                if ( MonitorInstance == -1073741275 )
                  goto LABEL_21;
                WdLogSingleEntry2(2LL, v33, this);
                WdLogGlobalForLineNumber = 4679;
              }
              MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v27);
              return (unsigned int)NextVideoPresentTarget;
            }
            v17 = *(_QWORD *)(v15 + 8);
            v15 = v17 - 8;
            if ( v17 == v14 + 24 )
              v15 = 0LL;
          }
          ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v13);
          WdLogSingleEntry2(3LL, v10, ContainingAdapter);
          WdLogGlobalForLineNumber = 7139;
          if ( v14 )
            ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v31 + 40));
          NextVideoPresentTarget = -1071774971;
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 7115;
          NextVideoPresentTarget = -1071774923;
        }
        goto LABEL_29;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 7101;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 7090;
    }
    NextVideoPresentTarget = -1071775742;
LABEL_29:
    WdLogSingleEntry3(2LL, v33, this, NextVideoPresentTarget);
    WdLogGlobalForLineNumber = 4626;
  }
  return (unsigned int)NextVideoPresentTarget;
}
