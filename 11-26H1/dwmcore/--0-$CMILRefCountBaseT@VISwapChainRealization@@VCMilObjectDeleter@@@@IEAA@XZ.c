/*
 * XREFs of ??0?$CMILRefCountBaseT@VISwapChainRealization@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x1802AC6A4
 * Callers:
 *     ??0?$CMILCOMBaseT@VISwapChainRealization@@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x1802AC68C (--0-$CMILCOMBaseT@VISwapChainRealization@@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 * Callees:
 *     ??0ISwapChainRealization@@QEAA@XZ @ 0x18012A054 (--0ISwapChainRealization@@QEAA@XZ.c)
 */

__int64 __fastcall CMILRefCountBaseT<ISwapChainRealization,CMilObjectDeleter>::CMILRefCountBaseT<ISwapChainRealization,CMilObjectDeleter>(
        ISwapChainRealization *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  ISwapChainRealization::ISwapChainRealization(a1);
  result = v1;
  *(_DWORD *)(v1 + 24) = 0;
  return result;
}
