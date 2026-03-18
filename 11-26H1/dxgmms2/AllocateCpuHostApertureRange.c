/*
 * XREFs of AllocateCpuHostApertureRange @ 0x14010432C
 * Callers:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x140103F98 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAXPEAPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall AllocateCpuHostApertureRange(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = ExAllocatePool2(256LL, 4LL * (unsigned int)(a1 - 1) + 40, 1630824790LL);
  if ( result )
  {
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_DWORD *)(result + 24) = 0;
    *(_QWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 28) = -1;
    *(_DWORD *)(result + 32) = -1;
    *(_DWORD *)(result + 36) = -1;
  }
  else
  {
    _InterlockedIncrement(&dword_14008A824);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 444;
    DxgkLogInternalTriageEvent(v2, 262145LL);
    return 0LL;
  }
  return result;
}
