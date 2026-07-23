/*
 * XREFs of KeEnumerateNextSchedulerSubNodeInSystem @ 0x1404529F0
 * Callers:
 *     KiConfigureCooperativeIdleSearchContextTargets @ 0x1405ED3C8 (KiConfigureCooperativeIdleSearchContextTargets.c)
 *     KiGetNextClockOwner @ 0x1405F0D04 (KiGetNextClockOwner.c)
 *     PoAllProcessorsDeepIdle @ 0x140603E90 (PoAllProcessorsDeepIdle.c)
 *     KiConfigureAllSchedulingInformation @ 0x140CCFA80 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KeEnumerateNextNodeInSystem @ 0x140452D80 (KeEnumerateNextNodeInSystem.c)
 */

__int64 __fastcall KeEnumerateNextSchedulerSubNodeInSystem(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r9d
  int v6; // eax
  __int64 v7; // r8
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    v5 = *(_DWORD *)(a1 + 16);
    if ( v5 < *(_DWORD *)(*(_QWORD *)(a1 + 8) + 48LL) )
      break;
    KeEnumerateNextNodeInSystem(a1, &v9);
    if ( v6 < 0 )
      return (unsigned int)-2147483622;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL * *(unsigned int *)(a1 + 16));
  *(_DWORD *)(a1 + 16) = v5 + 1;
  if ( !v7 )
    return (unsigned int)-2147483622;
  *a2 = v7;
  return v2;
}
