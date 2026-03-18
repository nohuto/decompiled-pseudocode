/*
 * XREFs of ?GetNumAvailable64KPages@@YA_KXZ @ 0x1400A78C8
 * Callers:
 *     Upgrade64KBWork @ 0x1400A8034 (Upgrade64KBWork.c)
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

unsigned __int64 GetNumAvailable64KPages(void)
{
  _QWORD v1[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v2[10]; // [rsp+40h] [rbp-68h] BYREF

  memset(v2, 0, 0x48uLL);
  v1[0] = 1LL;
  v1[1] = v2;
  if ( (int)ZwManagePartition(-2LL, 0LL, 7LL, v1, 16) < 0 )
    return 0LL;
  else
    return v2[4] + v2[3];
}
