/*
 * XREFs of ?DxgkIsFeatureEnabledVmBus@@YAJPEAXW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x140070FBC
 * Callers:
 *     IsFeatureEnabledHost @ 0x1402898F4 (IsFeatureEnabledHost.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VmBusSendIsFeatureEnabled@DXG_GUEST_GLOBAL_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x140230370 (-VmBusSendIsFeatureEnabled@DXG_GUEST_GLOBAL_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DES.c)
 *     ?VmBusSendIsFeatureEnabled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x1402304C0 (-VmBusSendIsFeatureEnabled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE.c)
 */

__int64 __fastcall DxgkIsFeatureEnabledVmBus(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  struct DXGGLOBAL *Global; // rax

  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) >= 0x2Bu )
  {
    if ( a1 )
    {
      return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsFeatureEnabled(a1 + 4712, a2, a3, a4);
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal();
      return DXG_GUEST_GLOBAL_VMBUS::VmBusSendIsFeatureEnabled(*((_QWORD *)Global + 212), a2, a3, a4);
    }
  }
  else
  {
    WdLogSingleEntry0(4LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 1620;
  }
  return result;
}
