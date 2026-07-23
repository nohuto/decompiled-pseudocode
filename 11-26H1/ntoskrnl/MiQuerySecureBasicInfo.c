/*
 * XREFs of MiQuerySecureBasicInfo @ 0x140923550
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     VslQueryVirtualMemory @ 0x1404E41F0 (VslQueryVirtualMemory.c)
 *     MiQueryReturnResults @ 0x140923994 (MiQueryReturnResults.c)
 */

__int64 __fastcall MiQuerySecureBasicInfo(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int16 v4; // cx
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int128 v7; // [rsp+40h] [rbp-18h]

  v2 = a1[10];
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( (*(_QWORD *)(v2 + 368) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    return 3221226021LL;
  result = VslQueryVirtualMemory(v2, a1[5], &v5);
  v4 = 0;
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)v7 == 4096 )
      v4 = *(_WORD *)MiGetProcessPartition(a1[10]);
    WORD2(v6) = v4;
    a1[8] = (__int64)&v5;
    a1[7] = 48LL;
    return MiQueryReturnResults(a1);
  }
  return result;
}
