/*
 * XREFs of ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1403FF37C
 * Callers:
 *     DxgkGetMemoryBudgetTarget @ 0x1401F7D40 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1401F8310 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetYieldPercentage @ 0x1401F86A0 (DxgkGetYieldPercentage.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401F8BC0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkSetMemoryBudgetTarget @ 0x1403FEDF0 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetYieldPercentage @ 0x1403FF0C0 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool CheckTokenForResourceManagerAccess(void)
{
  __int64 v0; // rdx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v0 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 38111);
  return v0 && (int)RtlCheckTokenMembership(0LL, v0, &v2) >= 0 && v2 != 0;
}
