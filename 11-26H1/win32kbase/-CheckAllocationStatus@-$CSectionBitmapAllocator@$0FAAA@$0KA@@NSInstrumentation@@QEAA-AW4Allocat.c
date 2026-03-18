/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0FAAA@$0KA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1401DD754
 * Callers:
 *     ?Free@?$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401DE3B0 (-Free@-$CTypeIsolation@$0FAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<20480,160>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9

  v2 = a1[1];
  v3 = v2 ^ a1[2];
  if ( !a2 || a2 < v3 || a2 >= v3 + 20480 )
    return 0LL;
  v4 = (a2 & 0xFFF) / 0xA0;
  if ( (a2 & 0xFFF) == 160 * v4 )
    return 2
         - (unsigned int)(RtlTestBit(
                            (PRTL_BITMAP)(a1[3] ^ a1[2]),
                            v4 + 25 * (((unsigned int)a2 - ((unsigned int)a1[2] ^ (unsigned int)v2)) >> 12)) != 0);
  else
    return 3LL;
}
