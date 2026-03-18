/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0BKAAA@$0BKA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x14000B4AC
 * Callers:
 *     ?Free@?$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14000BBAC (-Free@-$CTypeIsolation@$0BKAAA@$0BKA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<106496,416>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r10
  unsigned int v4; // r8d

  v2 = a1[1] ^ a1[2];
  if ( !a2 || a2 < v2 || a2 >= v2 + 106496 )
    return 0LL;
  v3 = (a2 & 0xFFF) / 0x1A0;
  if ( (a2 & 0xFFF) != 416 * v3 )
    return 3LL;
  v4 = (unsigned int)(a2 - (*((_DWORD *)a1 + 4) ^ *((_DWORD *)a1 + 2))) >> 12;
  return 2 - (unsigned int)(RtlTestBit((PRTL_BITMAP)(a1[3] ^ a1[2]), v4 + v3 + 8 * v4) != 0);
}
