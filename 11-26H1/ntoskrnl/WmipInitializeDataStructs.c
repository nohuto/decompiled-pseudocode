/*
 * XREFs of WmipInitializeDataStructs @ 0x140CE03F8
 * Callers:
 *     WmipDriverEntry @ 0x140CE01C0 (WmipDriverEntry.c)
 * Callees:
 *     WmipAllocRegEntry @ 0x1404E79BC (WmipAllocRegEntry.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     WmipAddDataSource @ 0x140A0BC24 (WmipAddDataSource.c)
 *     WmipAddMofResource @ 0x140B19FC8 (WmipAddMofResource.c)
 */

__int64 WmipInitializeDataStructs()
{
  _QWORD *v0; // rbx
  __int64 result; // rax
  _DWORD *KernelShadowStackInitial; // rcx
  _DWORD *i; // rax
  char v4[16]; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v5[24]; // [rsp+40h] [rbp-19h] BYREF

  EtwpSecurityLock.AbWaitObject = &EtwpSecurityLock.SchedulerAssistPriorityFloor;
  EtwpSecurityLock.KernelShadowStack = &EtwpSecurityLock.SchedulerAssistPriorityFloor;
  *(_QWORD *)&EtwpSecurityLock.SchedulerAssistPriorityFloor = &EtwpSecurityLock.SchedulerAssistPriorityFloor;
  EtwpSecurityLock.KernelShadowStackInitial = EtwpSecurityLock.TracingPrivate;
  EtwpSecurityLock.SchedulerAssist = EtwpSecurityLock.TracingPrivate;
  EtwpSecurityLock.TracingPrivate[0] = (unsigned __int64)EtwpSecurityLock.TracingPrivate;
  EtwpSecurityLock.GlobalUpdateVpThreadPriorityListEntry.Flink = (struct _LIST_ENTRY *)&EtwpSecurityLock.KernelWaitTime;
  EtwpSecurityLock.UserWaitTime = (unsigned __int64)&EtwpSecurityLock.KernelWaitTime;
  EtwpSecurityLock.KernelWaitTime = (unsigned __int64)&EtwpSecurityLock.KernelWaitTime;
  v4[0] = 0;
  v0 = WmipAllocRegEntry(-1LL, 1342177280);
  if ( !v0 )
    return 3221225626LL;
  memset_0(v5, 0, 0x58uLL);
  v5[0] = 88;
  v5[4] = 2;
  v5[6] = -943770160;
  v5[7] = 298953435;
  v5[8] = -1610593601;
  v5[9] = 271124169;
  v5[14] = -471861315;
  v5[15] = 298989845;
  v5[16] = -1073740911;
  v5[17] = -1567049393;
  result = WmipAddDataSource((__int64)v0, (__int64)v5, 88, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    KernelShadowStackInitial = EtwpSecurityLock.KernelShadowStackInitial;
    for ( i = *(_DWORD **)EtwpSecurityLock.KernelShadowStackInitial; i != KernelShadowStackInitial; i = *(_DWORD **)i )
      i[4] |= 1u;
    result = WmipAddMofResource(v0[4], L"kernelbase.dll", 1, L"MofResourceName", v4);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
