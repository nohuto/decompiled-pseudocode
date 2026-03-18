/*
 * XREFs of ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1401B4C30 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1401C60B0 (DxgkSetGammaRamp.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401CE964 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     CheckGivenTargetIsPartOfCloneGroup @ 0x1402AC654 (CheckGivenTargetIsPartOfCloneGroup.c)
 *     DxgkDispMgrSourceOperation @ 0x1402C1FD0 (DxgkDispMgrSourceOperation.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14031F060 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x14033F860 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x140380F68 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403AA144 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1403DC9E0 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1403FF5A0 (DxgkIsSourceInHardwareClone.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DmmEnumClientVidPnPathTargetsFromSource(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *const a4)
{
  __int64 v4; // r15
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // esi
  int v21; // eax
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rbx

  v4 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 9170;
    return result;
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9184;
    return 3223191554LL;
  }
  v8 = a1[395];
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9198;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 )
  {
    v10 = v9 + 40;
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 40));
    v13 = *(_QWORD *)(v9 + 128);
    if ( v13 && (_InterlockedIncrement((volatile signed __int32 *)(v13 + 32)), (v14 = *(_QWORD *)(v9 + 128)) != 0) )
    {
      v15 = v14 + 96;
      v16 = v14 + 120;
      v17 = *(_QWORD *)(v14 + 120);
      v18 = 0LL;
      v19 = 0LL;
      if ( v17 != v14 + 120 )
        v18 = (_QWORD *)(v17 - 8);
      while ( v18 )
      {
        if ( *(_DWORD *)(v18[11] + 24LL) == (_DWORD)v4 )
        {
          if ( v19 == a3 )
          {
            v20 = *(_DWORD *)(v18[12] + 24LL);
            goto LABEL_13;
          }
          ++v19;
        }
        v24 = v18[1];
        v18 = (_QWORD *)(v24 - 8);
        if ( v24 == v16 )
          v18 = 0LL;
      }
      if ( v17 == v16 || v17 == 8 )
      {
        v25 = v4;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v19) + 24) = v15;
        WdLogGlobalForLineNumber = 195;
        goto LABEL_35;
      }
      v25 = v4;
      if ( !v19 )
      {
        v26 = WdLogNewEntry5_WdTrace(0LL, 0LL);
        *(_QWORD *)(v26 + 24) = v4;
        *(_QWORD *)(v26 + 32) = v15;
        WdLogGlobalForLineNumber = 187;
LABEL_35:
        v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27);
        v29[4] = v25;
        v29[6] = -1071774919LL;
        v29[3] = a3;
        v29[5] = v15;
        WdLogGlobalForLineNumber = 9251;
        ReferenceCounted::Release((ReferenceCounted *)(v14 + 24));
        DXGFASTMUTEX::Release((struct _KTHREAD **)v10);
        return 3223192377LL;
      }
      v30 = (_QWORD *)WdLogNewEntry5_WdTrace(0LL, v19);
      v30[3] = v15;
      v20 = -1;
      v30[4] = v4;
      v30[5] = a3;
      WdLogGlobalForLineNumber = 179;
LABEL_13:
      v21 = _InterlockedDecrement((volatile signed __int32 *)(v14 + 32));
      if ( v21 )
      {
        if ( v21 < 0 )
        {
          v31 = v21;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 77;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
            v31,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else if ( v14 != -24 )
      {
        (**(void (__fastcall ***)(__int64, __int64))(v14 + 24))(v14 + 24, 1LL);
      }
      *a4 = v20;
      if ( *(struct _KTHREAD **)(v10 + 24) != KeGetCurrentThread() )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, v10, 0LL, 0LL);
        WdLogGlobalForLineNumber = 553;
      }
      if ( *(int *)(v10 + 32) <= 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 556;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (*(_DWORD *)(v10 + 32))-- == 1 )
      {
        *(_QWORD *)(v10 + 24) = 0LL;
        ExReleasePushLockExclusiveEx(v10 + 8, 0LL);
      }
      KeLeaveCriticalRegion();
      return 0LL;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = a1;
      WdLogGlobalForLineNumber = 9232;
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 40));
      return 3223192412LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 9212;
  }
  return result;
}
