/*
 * XREFs of RtlFindClearBitsAndSetEx @ 0x140499760
 * Callers:
 *     ExpSaPageGroupAllocateMemory @ 0x14049964C (ExpSaPageGroupAllocateMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C8F44 (MiAllocateFromSubAllocatedRegion.c)
 *     MiObtainRelocationBits @ 0x1409CB088 (MiObtainRelocationBits.c)
 * Callees:
 *     RtlFindClearBitsEx @ 0x14035F9A0 (RtlFindClearBitsEx.c)
 *     RtlSetBitsEx @ 0x14036F510 (RtlSetBitsEx.c)
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
