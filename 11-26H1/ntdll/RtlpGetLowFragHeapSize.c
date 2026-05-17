/*
 * XREFs of RtlpGetLowFragHeapSize @ 0x1800F90BC
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x18007EE98 (RtlpCreateLowFragHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetLowFragHeapSize(__int64 a1, char a2)
{
  int v2; // ecx

  if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    return 0LL;
  v2 = RtlpAffinityState[0];
  if ( (a2 & 1) != 0 )
    v2 = 1;
  return 48 * ((unsigned int)(v2 - 1) + 69LL + 4LL * (unsigned int)(129 * v2));
}
