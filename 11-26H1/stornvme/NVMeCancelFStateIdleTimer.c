/*
 * XREFs of NVMeCancelFStateIdleTimer @ 0x140008540
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeCancelFStateIdleTimer(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r8

  v1 = *(_DWORD *)(a1 + 1600);
  if ( (v1 & 0x20) == 0 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 1640);
  *(_DWORD *)(a1 + 1600) = v1 & 0xFFFFFFDF;
  return StorPortExtendedFunction(33LL, a1, v2, NVMeFStateIdleTimerCallback);
}
