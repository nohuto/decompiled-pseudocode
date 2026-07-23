/*
 * XREFs of RtlpHpVsSubsegmentCleanup @ 0x140354AF4
 * Callers:
 *     RtlpHpVsContextCleanup @ 0x140354A48 (RtlpHpVsContextCleanup.c)
 *     RtlpHpVsChunkFree @ 0x140355330 (RtlpHpVsChunkFree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsSubsegmentCleanup(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)a2 ^ a2;
  v3 = *(_QWORD *)(a2 + 8) ^ a2;
  if ( (*(_QWORD *)(v2 + 8) ^ v2) != a2 || (*(_QWORD *)v3 ^ v3) != a2 )
    __fastfail(3u);
  *(_QWORD *)v3 = v2 ^ v3;
  *(_QWORD *)(v2 + 8) = v2 ^ v3;
  result = (unsigned int)-(__int64)__popcnt(*(_QWORD *)(a2 + 16));
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), (int)result);
  return result;
}
