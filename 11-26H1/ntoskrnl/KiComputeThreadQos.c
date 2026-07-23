/*
 * XREFs of KiComputeThreadQos @ 0x140306EE0
 * Callers:
 *     KiUpdateProcessThreadQos @ 0x140204184 (KiUpdateProcessThreadQos.c)
 *     KiUpdateRunTime @ 0x140220DB0 (KiUpdateRunTime.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x140231210 (-KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 *     KeSetThreadPpmPolicy @ 0x14030F130 (KeSetThreadPpmPolicy.c)
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 * Callees:
 *     Feature_ServerQosExcludesWindowState__private_IsEnabledNoReportingNoInline @ 0x140448350 (Feature_ServerQosExcludesWindowState__private_IsEnabledNoReportingNoInline.c)
 *     Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline @ 0x14044D640 (Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DisableSystemThreadsQosPolicy__private_IsEnabledDeviceUsageNoInline @ 0x140461530 (Feature_DisableSystemThreadsQosPolicy__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall KiComputeThreadQos(__int64 a1)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // dl
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned __int8 v8; // r9
  unsigned __int8 v9; // al
  unsigned int v10; // ecx
  unsigned int v11; // edi
  int v12; // [rsp+30h] [rbp+8h]
  __int16 v13; // [rsp+34h] [rbp+Ch]
  char v14; // [rsp+36h] [rbp+Eh]

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
    return *(unsigned __int8 *)(a1 + 516);
  v3 = *(_QWORD *)(a1 + 1616);
  if ( !v3 )
  {
    if ( *(_BYTE *)(a1 + 124) == 1 )
      return 3LL;
    if ( *(_BYTE *)(a1 + 124) == 2 )
      return 4LL;
    v10 = KiThreadPolicyToQosMappingTable[*(unsigned __int8 *)(a1 + 958)];
    if ( v10 != 7 )
      return v10;
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 544) + 136LL);
    if ( (unsigned int)Feature_ServerQosExcludesWindowState__private_IsEnabledNoReportingNoInline()
      && !KiVariableQuantumEnabled
      && (v11 & 0x780) != 0x400 )
    {
      return 0;
    }
    if ( (unsigned int)Feature_UserPresenceThrottling__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (v11 & 0x780) != 0x400
        && (v11 & 0x780) != 0x480
        && (KiDynamicHeteroCpuPolicyMask & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 136LL) & 0x2000) != 0 )
      {
        return 0;
      }
    }
    else if ( (v11 & 0x780) != 0x400
           && (KiDynamicHeteroCpuPolicyMask & 1) != 0
           && (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 136LL) & 0x2000) != 0 )
    {
      return 0;
    }
    v10 = KiProcessPolicyToQosMappingTable[(v11 >> 7) & 0xF];
    if ( v10 != 7 )
      return v10;
    if ( *(char *)(a1 + 195) < 15
      && ((KiDynamicHeteroCpuPolicyMask & 2) == 0
       || *(char *)(a1 + 195) < KiDynamicHeteroCpuPolicyImportantPriority
       && ((unsigned int)Feature_DisableSystemThreadsQosPolicy__private_IsEnabledDeviceUsageNoInline()
        || (*(_DWORD *)(a1 + 116) & 0x400) == 0
        || *(char *)(a1 + 195) < 8)) )
    {
      return 6;
    }
    return 0;
  }
  v4 = *(unsigned __int8 *)(a1 + 516);
  v5 = 0;
  v6 = *(unsigned __int8 *)(v3 + 516);
  v12 = -16645372;
  v7 = v6;
  v13 = 5;
  v14 = 1;
  if ( (_DWORD)v6 != (_DWORD)v4 )
  {
    v8 = *((_BYTE *)&v12 + v6);
    if ( v8 == 0xFF || (v9 = *((_BYTE *)&v12 + v4), v9 == 0xFF) || v8 > v9 )
      v5 = 1;
  }
  if ( !v5 )
    return (unsigned int)v4;
  return v7;
}
