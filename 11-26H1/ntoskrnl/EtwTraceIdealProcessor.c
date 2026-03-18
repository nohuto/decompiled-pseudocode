/*
 * XREFs of EtwTraceIdealProcessor @ 0x1404E78D8
 * Callers:
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x140200F50 (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x140204850 (KeSetIdealProcessorThreadEx.c)
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiSetUserAffinityThread @ 0x14022A784 (KiSetUserAffinityThread.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140237654 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiSetSystemAffinityThread @ 0x14037C620 (KiSetSystemAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x1404631C0 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceIdealProcessor(__int64 a1, __int16 a2, int a3, int a4)
{
  __int64 result; // rax
  _DWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-28h] BYREF

  if ( a3 != a4 )
  {
    v5[0] = *(_DWORD *)(a1 + 1296);
    v5[2] = a4;
    v5[1] = a3;
    v6[0] = v5;
    v6[1] = 12LL;
    return EtwTraceKernelEvent((int)v6, 1, 0x88000000, a2, 23075075);
  }
  return result;
}
