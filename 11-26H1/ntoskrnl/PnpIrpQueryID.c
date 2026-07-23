/*
 * XREFs of PnpIrpQueryID @ 0x1409B0948
 * Callers:
 *     PpProfileCommitTransitioningDock @ 0x1407B0404 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1407B0558 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PnpQueryID @ 0x1409B1418 (PnpQueryID.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PnpQueryDeviceID @ 0x1409DBDEC (PnpQueryDeviceID.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
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
