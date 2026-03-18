/*
 * XREFs of ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14013DAF4
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     UserThreadCallout @ 0x140139A60 (UserThreadCallout.c)
 *     DrvProcessDxgkDisplayCallout @ 0x14013D67C (DrvProcessDxgkDisplayCallout.c)
 *     ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x14013DABC (--0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401D2960 (xxxDisplayDiagBlackScreenDetected.c)
 *     NtUserChangeDisplaySettings @ 0x1401E21D0 (NtUserChangeDisplaySettings.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1401E3900 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CDisplayScenarioContextScope::ContextScopeConstructor(
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT **this,
        const struct _GUID *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v7; // rax
  GUID ActivityId; // [rsp+30h] [rbp-38h] BYREF

  ActivityId = 0LL;
  if ( !a2 )
    goto LABEL_2;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&ActivityId.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&ActivityId.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)ActivityId.Data4;
  if ( v7 )
    ActivityId = *a2;
  else
LABEL_2:
    EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, a3, a4, this + 1, (unsigned __int8 *)this);
}
