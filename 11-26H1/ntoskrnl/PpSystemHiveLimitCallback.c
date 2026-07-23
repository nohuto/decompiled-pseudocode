/*
 * XREFs of PpSystemHiveLimitCallback @ 0x1407A6E80
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140AC8870 (PipForDeviceNodeSubtree.c)
 */

__int64 __fastcall PpSystemHiveLimitCallback(__int64 a1, unsigned int a2)
{
  PVOID v2; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]

  if ( a2 < *(_DWORD *)(a1 + 4) )
  {
    v2 = IopRootDeviceNode;
    PnpSystemHiveTooLarge = 0;
    v4 = 49LL;
    v5 = 0;
    PpDevNodeLockTree(1LL);
    PipForDeviceNodeSubtree(v2, PiResetProblemDevicesWorker, &v4);
    PpDevNodeUnlockTree(1LL);
    return PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 0xEu, 0, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    PnpSystemHiveTooLarge = 1;
  }
  return result;
}
