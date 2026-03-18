/*
 * XREFs of MiSanitizePage @ 0x1404A096C
 * Callers:
 *     MiMapContiguousMemory @ 0x140363E10 (MiMapContiguousMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x14095C9CC (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140AEC50C (MiRotateToFrameBufferNoCopy.c)
 *     MiRotateToFrameBuffer @ 0x140AEC740 (MiRotateToFrameBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSanitizePage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax

  v1 = a1;
  v2 = 1LL << ((unsigned __int8)dword_140E2D6F8 - 12);
  if ( a1 >= v2 )
    return (v2 - 1) & a1;
  return v1;
}
