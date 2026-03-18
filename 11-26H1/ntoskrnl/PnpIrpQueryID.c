/*
 * XREFs of PnpIrpQueryID @ 0x14090E818
 * Callers:
 *     PpProfileCommitTransitioningDock @ 0x1407AD3A4 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1407AD4F8 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PnpQueryID @ 0x14090F2E8 (PnpQueryID.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     PnpQueryDeviceID @ 0x140AA88B8 (PnpQueryDeviceID.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IopSynchronousCall @ 0x14090E5F0 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpQueryID(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int16 v7; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+38h] [rbp-50h]

  *a3 = 0LL;
  memset_0(&v7, 0, 0x48uLL);
  v8 = a2;
  v7 = 4891;
  result = IopSynchronousCall(a1, (__int64)&v7, -1073741637, 0LL, a3);
  if ( (int)result < 0 )
  {
    *a3 = 0LL;
  }
  else if ( !*a3 )
  {
    return 3221225659LL;
  }
  return result;
}
