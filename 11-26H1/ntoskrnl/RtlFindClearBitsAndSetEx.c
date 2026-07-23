/*
 * XREFs of RtlFindClearBitsAndSetEx @ 0x1404932B0
 * Callers:
 *     ExpSaPageGroupAllocateMemory @ 0x14049319C (ExpSaPageGroupAllocateMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140999F24 (MiAllocateFromSubAllocatedRegion.c)
 *     MiObtainRelocationBits @ 0x14099C068 (MiObtainRelocationBits.c)
 * Callees:
 *     RtlFindClearBitsEx @ 0x140361740 (RtlFindClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 */

unsigned __int64 __fastcall RtlFindClearBitsAndSetEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 ClearBits; // rax
  unsigned __int64 v6; // rbx

  ClearBits = RtlFindClearBitsEx(a1, a2, a3);
  v6 = ClearBits;
  if ( ClearBits != -1LL )
    RtlSetBitsEx((__int64)a1, ClearBits, a2);
  return v6;
}
