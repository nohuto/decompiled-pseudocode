/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1400B45F0
 * Callers:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B4474 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<36864,144>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r9

  v2 = a1[1] ^ a1[2];
  if ( !a2 || a2 < v2 || a2 >= v2 + 36864 )
    return 0LL;
  v3 = (a2 & 0xFFF) / 0x90;
  if ( (a2 & 0xFFF) == 144 * v3 )
    return 2
         - (unsigned int)(RtlTestBit(
                            (PRTL_BITMAP)(a1[3] ^ a1[2]),
                            v3 + 28 * ((unsigned int)(a2 - (*((_DWORD *)a1 + 4) ^ *((_DWORD *)a1 + 2))) >> 12)) != 0);
  else
    return 3LL;
}
