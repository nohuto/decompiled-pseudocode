/*
 * XREFs of ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1401F62C8
 * Callers:
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1401F8310 (DxgkGetProcessSchedulingPriorityBand.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDefaultQos@DXGPROCESS@@QEBA?AW4_KHETERO_CPU_QOS@@XZ @ 0x140074A64 (-GetDefaultQos@DXGPROCESS@@QEBA-AW4_KHETERO_CPU_QOS@@XZ.c)
 */

__int64 __fastcall DXGPROCESS::GetProcessSchedulingPriorityBand(__int64 a1)
{
  unsigned int v1; // r8d
  int v2; // edx

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 416) & 1) != 0 || !(unsigned int)DXGPROCESS::GetDefaultQos(a1) )
    return v1;
  if ( (v2 & 0xFFFFFFFD) == 0 )
    return 0LL;
  WdLogSingleEntry0(v1);
  WdLogGlobalForLineNumber = 5263;
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 5263LL, 0LL, 0LL, 0LL, 0LL);
  return 3LL;
}
