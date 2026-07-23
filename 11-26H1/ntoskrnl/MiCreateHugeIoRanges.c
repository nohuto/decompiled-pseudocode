/*
 * XREFs of MiCreateHugeIoRanges @ 0x140CFED70
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiAddPartitionHugeRange @ 0x1406EFCE8 (MiAddPartitionHugeRange.c)
 *     MiInitializeHugePfnDatabase @ 0x1406F10F0 (MiInitializeHugePfnDatabase.c)
 */

__int64 __fastcall MiCreateHugeIoRanges(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  int v3; // ecx
  ULONG_PTR v4; // r8
  __int64 **v5; // rcx
  __int64 *v6; // rcx

  result = *(_QWORD *)(a1 + 360);
  if ( (result & 1) != 0 )
  {
    if ( result == 1 )
      return result;
    v2 = result ^ ((a1 + 352) | 1);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 360);
  }
  while ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 24);
    if ( v3 == 38 || v3 == 39 )
    {
      v4 = *(_QWORD *)(v2 + 32);
      if ( !v4 || (v4 & 0x3FFFF) != 0 || (*(_DWORD *)(v2 + 40) & 0x3FFFF) != 0 )
        KeBugCheckEx(0x1Au, 0x303031CuLL, v4, *(_QWORD *)(v2 + 40), *(int *)(v2 + 24));
      if ( (unsigned int)MiInitializeHugePfnDatabase() )
        MiAddPartitionHugeRange(
          (unsigned __int16 *)&MiSystemPartition,
          v2,
          (unsigned int)(*(_DWORD *)(v2 + 24) != 38) + 1,
          0LL);
    }
    v5 = *(__int64 ***)(v2 + 8);
    result = v2;
    if ( v5 )
    {
      v2 = *(_QWORD *)(v2 + 8);
      v6 = *v5;
      if ( v6 )
      {
        do
        {
          result = *v6;
          v2 = (__int64)v6;
          v6 = (__int64 *)result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v2 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v2 || *(_QWORD *)v2 == result )
          break;
        result = v2;
      }
    }
  }
  return result;
}
