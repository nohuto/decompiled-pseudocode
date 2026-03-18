/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1400B5AF8
 * Callers:
 *     ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B5FE0 (-Free@-$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<180224,704>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r11
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rcx

  v2 = a1[2];
  v3 = a1[1];
  v4 = v3 ^ v2;
  if ( !a2 || a2 < v4 || a2 >= v4 + 180224 )
    return 0LL;
  v6 = a2 & 0xFFF;
  if ( v6 == 704 * (v6 / 0x2C0) )
    return 2
         - (unsigned int)(RtlTestBit(
                            (PRTL_BITMAP)(a1[3] ^ v2),
                            (((unsigned int)a2 - ((unsigned int)v2 ^ (unsigned int)v3)) >> 12)
                          + v6 / 0x2C0
                          + 4 * (((unsigned int)a2 - ((unsigned int)v2 ^ (unsigned int)v3)) >> 12)) != 0);
  else
    return 3LL;
}
