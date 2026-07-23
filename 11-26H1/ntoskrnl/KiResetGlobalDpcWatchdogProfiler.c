/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x140530224
 * Callers:
 *     KeAccumulateTicks @ 0x140221310 (KeAccumulateTicks.c)
 *     KeRelaxTimingConstraints @ 0x1405EB750 (KeRelaxTimingConstraints.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiResetGlobalDpcWatchdogProfiler(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 36584);
  if ( v1 && *(_QWORD *)(a1 + 36592) != v1 )
  {
    result = *(unsigned int *)(a1 + 33716);
    if ( *(_DWORD *)(a1 + 33708) < (int)result )
      *(_QWORD *)(a1 + 36592) = v1;
  }
  return result;
}
