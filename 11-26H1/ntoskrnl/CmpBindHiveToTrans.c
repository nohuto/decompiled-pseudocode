/*
 * XREFs of CmpBindHiveToTrans @ 0x140AC5858
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1408F2710 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408F3684 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransAllocateTrans @ 0x140AC578C (CmpTransAllocateTrans.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CmpBindHiveToTrans(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r10

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 48) & 0x80u) == 0 )
  {
    if ( a1 )
    {
      v3 = *(unsigned int *)(a2 + 112);
      while ( v2 < (unsigned int)v3 )
      {
        if ( a1 == *(_QWORD *)(a2 + 8LL * v2 + 120) )
          return 1LL;
        ++v2;
      }
      *(_QWORD *)(a2 + 8 * v3 + 120) = a1;
      ++*(_DWORD *)(a2 + 112);
    }
    return 1LL;
  }
  if ( !*(_DWORD *)(a2 + 112) )
  {
    *(_QWORD *)(a2 + 120) = a1;
    return 1LL;
  }
  return *(_QWORD *)(a2 + 120) == a1;
}
