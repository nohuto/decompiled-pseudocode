/*
 * XREFs of KiQuerySubNodeActiveAffinity @ 0x140461720
 * Callers:
 *     KeQueryNodeActiveAffinity2 @ 0x140507BA0 (KeQueryNodeActiveAffinity2.c)
 *     KiDoesNodeIntersectAffinity @ 0x1405F215C (KiDoesNodeIntersectAffinity.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A74EC0 (KiSynchNumaCounterSetCallback.c)
 *     KiConfigureSchedulingInformation @ 0x140BF9AF0 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiQuerySubNodeActiveAffinity(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned __int64 result; // rax

  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 128);
    result = *(unsigned __int16 *)(a1 + 136);
    *(_WORD *)(a2 + 8) = result;
  }
  if ( a3 )
  {
    result = __popcnt(*(_QWORD *)(a1 + 128));
    *a3 = result;
  }
  return result;
}
