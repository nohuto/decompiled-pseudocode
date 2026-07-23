/*
 * XREFs of MiCombineWorkingSetTail @ 0x140709450
 * Callers:
 *     MiCombinePte @ 0x140709100 (MiCombinePte.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x140364CA0 (MiReleaseWalkLocks.c)
 *     MiProcessCrcList @ 0x140A67C40 (MiProcessCrcList.c)
 */

__int64 __fastcall MiCombineWorkingSetTail(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 184);
  if ( v1[1] == v1[2] )
  {
    MiReleaseWalkLocks(a1);
    MiProcessCrcList(
      v1[3],
      v1[4],
      v1[1],
      *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL));
    v1[1] = 0LL;
  }
  return 0LL;
}
