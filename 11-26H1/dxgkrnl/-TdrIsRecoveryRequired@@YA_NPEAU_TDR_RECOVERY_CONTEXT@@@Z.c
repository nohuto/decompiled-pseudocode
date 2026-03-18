/*
 * XREFs of ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D9910
 * Callers:
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x140284168 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     TdrBugcheckOnTimeout @ 0x14018EA50 (TdrBugcheckOnTimeout.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x140194CF4 (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019D494 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrHistoryIsLimitExhausted@@YA_NPEBU_TDR_HISTORY@@PEBU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D9270 (-TdrHistoryIsLimitExhausted@@YA_NPEBU_TDR_HISTORY@@PEBU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1401D9DCC (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D9E70 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1401DA36C (TdrAllowToDebugTimeout.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x140389910 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 */

char __fastcall TdrIsRecoveryRequired(struct _TDR_RECOVERY_CONTEXT *a1)
{
  KIRQL CurrentIrql; // al
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  DXGADAPTER *v10; // rcx
  int v11; // eax
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  if ( !g_TdrConfig
    || (unsigned int)TdrAllowToDebugTimeout()
    || _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, (signed __int64)a1, 0LL) )
  {
    return 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
  {
    WdLogSingleEntry2(0LL, a1, CurrentIrql);
    WdLogGlobalForLineNumber = 2749;
    return 0;
  }
  if ( KeAreAllApcsDisabled() )
  {
    v4 = *((_DWORD *)a1 + 4);
    if ( v4 != 4 )
    {
      if ( v4 > 0xB || (v5 = 3714, !_bittest(&v5, v4)) )
      {
        TdrCollectDbgInfoStage1(a1, 0, 0, 0LL);
        v12 = 0;
        TdrRetrieveSecondaryBucketingKey(a1, &v12);
        v6 = v12;
        *((_QWORD *)a1 + 356) = 0LL;
        TdrBugcheckOnTimeout(a1, v6, 12);
      }
    }
    WdDiagNotifyUser(8LL, 2LL, 0LL, 0LL);
    return 0;
  }
  TdrUpdateDbgReport(a1, 0);
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 3168LL);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *))(*(_QWORD *)(*(_QWORD *)(v7 + 736) + 8LL) + 608LL))(a1);
    if ( v8 < 0 )
    {
      *((_QWORD *)a1 + 13) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 3168LL) + 736LL) + 8LL)
                                       + 608LL);
      TdrBugcheckOnTimeout(a1, v8, 9);
    }
  }
  TdrCollectDbgInfoStage1(a1, 1, 0, 0LL);
  v9 = *((_DWORD *)a1 + 4);
  if ( (v9 == 2 || v9 == 6 || v9 == 12) && !*((_QWORD *)a1 + 9) && g_TdrDebugMode != 3 )
    TdrBugcheckOnTimeout(a1, 0, 2);
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 4) + 213LL) )
    TdrBugcheckOnTimeout(a1, 0, 19);
  if ( TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)&g_TdrHistory, a1, 0) && g_TdrDebugMode != 3 )
    TdrBugcheckOnTimeout(a1, 0, 13);
  if ( g_TdrConfig == 1 )
    TdrBugcheckOnTimeout(a1, 0, 1);
  if ( !TdrIsDisplayOnlyTdr(*((_DWORD *)a1 + 4)) && !DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)a1 + 4)) )
  {
    v11 = DXGADAPTER::PrepareToReset(v10, a1);
    if ( v11 < 0 )
    {
      if ( v11 != -1073741643 )
        *((_QWORD *)a1 + 13) = -1LL;
      TdrBugcheckOnTimeout(a1, v11, 10);
    }
  }
  return 1;
}
