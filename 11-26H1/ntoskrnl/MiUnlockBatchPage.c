/*
 * XREFs of MiUnlockBatchPage @ 0x14031A580
 * Callers:
 *     MiDeleteSectionCluster @ 0x14031A390 (MiDeleteSectionCluster.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUnlockBatchPage(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned int i; // r8d

  result = a1 + 136;
  for ( i = 0; i < *(_DWORD *)(a1 + 60); ++i )
  {
    if ( *(_QWORD *)result == a2 )
    {
      *(_QWORD *)result = 0LL;
      result = (unsigned int)--*(_DWORD *)(a1 + 56);
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !(_DWORD)result )
        *(_DWORD *)(a1 + 60) = 0;
      return result;
    }
    result += 8LL;
  }
  return result;
}
