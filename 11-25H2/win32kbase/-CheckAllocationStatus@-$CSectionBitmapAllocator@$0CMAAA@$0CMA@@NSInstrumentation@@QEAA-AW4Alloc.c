/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1400FF6DC
 * Callers:
 *     ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400FF560 (-Free@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<180224,704>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r10
  unsigned int v4; // r8d

  v2 = a1[1] ^ a1[2];
  if ( !a2 || a2 < v2 || a2 >= v2 + 180224 )
    return 0LL;
  v3 = (a2 & 0xFFF) / 0x2C0;
  if ( (a2 & 0xFFF) != 704 * v3 )
    return 3LL;
  v4 = (unsigned int)(a2 - (*((_DWORD *)a1 + 4) ^ *((_DWORD *)a1 + 2))) >> 12;
  return 2 - (unsigned int)(RtlTestBit((PRTL_BITMAP)(a1[3] ^ a1[2]), v4 + v3 + 4 * v4) != 0);
}
