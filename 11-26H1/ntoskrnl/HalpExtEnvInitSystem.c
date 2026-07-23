/*
 * XREFs of HalpExtEnvInitSystem @ 0x140BF1030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpExtEnvInitSystem(int a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v3 = a1 - 1;
  if ( !v3 )
  {
    *(_QWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[64] = a3;
    return 0LL;
  }
  v4 = v3 - 6;
  if ( !v4 )
  {
    IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].SparePtr = 0LL;
    *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[64] = &IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].WaitListEntry.Blink;
    IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)&IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[56];
    IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].Object = &IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[72];
    IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].Thread = (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[72];
    return 0LL;
  }
  v5 = v4 - 8;
  if ( !v5 )
    goto LABEL_10;
  v6 = v5 - 2;
  if ( !v6 )
  {
LABEL_8:
    HalpExtEnvAllocationPhase = 1;
    return 0LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_10:
    HalpExtEnvAllocationPhase = 2;
    return 0LL;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    *(_QWORD *)&HalpDeviceBlockUnblockPushLock.WaitBlockFill11[64] = 0LL;
    return 0LL;
  }
  if ( v8 == 1 )
    goto LABEL_8;
  return 0LL;
}
