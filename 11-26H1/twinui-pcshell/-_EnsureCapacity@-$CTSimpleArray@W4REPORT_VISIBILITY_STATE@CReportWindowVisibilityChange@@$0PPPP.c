/*
 * XREFs of ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x1802EB864
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180040EF0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x18005997C (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1801F3F50 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 *     ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x1802EB940 (-_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z.c)
 * Callees:
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x1800875E8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180143394 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  IMalloc *v11; // rcx
  void *v12; // r11
  void *v13; // r10
  void *v14; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = a3;
  v3 = 4294967294LL;
  result = 2147942522LL;
  if ( a2 <= 0xFFFFFFFE )
  {
    v6 = a1[3];
    result = 0LL;
    if ( a2 > v6 )
    {
      v15 = 0LL;
      result = ULongLongMult(v6, 2uLL, &v15);
      if ( (int)result >= 0 )
      {
        v9 = v15;
        if ( v15 - v8 > 0x1000 )
          v9 = v8 + 4096;
        if ( v7 > v9 || v9 <= 0xFFFFFFFE )
        {
          v3 = v9;
          if ( v7 > v9 )
            v3 = v7;
        }
        v14 = 0LL;
        v15 = 0LL;
        result = ULongLongMult(v3, 4uLL, &v15);
        if ( (int)result >= 0 )
        {
          result = CTCoAllocPolicy::Realloc(v11, v10, v12, v15, &v14);
          v13 = v14;
          if ( (int)result >= 0 )
          {
            a1[3] = v3;
            *a1 = v13;
          }
        }
      }
    }
  }
  return result;
}
