/*
 * XREFs of MiFindDefragmentSlabEntries @ 0x14070BB04
 * Callers:
 *     MiEstablishDefragSlabEntries @ 0x14070B794 (MiEstablishDefragSlabEntries.c)
 * Callees:
 *     MiEnumerateSlabAllocatorsEx @ 0x14049A754 (MiEnumerateSlabAllocatorsEx.c)
 */

unsigned __int64 __fastcall MiFindDefragmentSlabEntries(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // r9d
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 84) & 0xFFFFFF9F;
  v8 = 0LL;
  *(_DWORD *)(a1 + 84) = v2;
  if ( (v2 & 0x10) == 0 )
  {
    v2 |= 0x20u;
    *(_DWORD *)(a1 + 84) = v2;
  }
  if ( *(_QWORD *)(a1 + 56) )
    *(_DWORD *)(a1 + 84) = v2 | 0x40;
  v3 = *(_DWORD *)(a1 + 72);
  v4 = *(_DWORD *)(a1 + 68);
  v5 = *(_QWORD *)a1;
  if ( v3 != 8 )
  {
    MiEnumerateSlabAllocatorsEx(v5, (__int64)MiCountSlabContextAvailablePagesForDefrag, (__int64)&v8, v4, v3);
    result = *(unsigned int *)(a1 + 76);
    if ( v8 < result )
    {
      *(_QWORD *)(a1 + 40) = 0LL;
      return result;
    }
    return MiEnumerateSlabAllocatorsEx(
             *(_QWORD *)a1,
             (__int64)MiFindDefragmentSlabEntriesHelper,
             a1,
             *(_DWORD *)(a1 + 68),
             *(_DWORD *)(a1 + 72));
  }
  result = MiEnumerateSlabAllocatorsEx(v5, (__int64)MiFindDefragmentSlabEntriesHelperByIdentity, a1, v4, 8u);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
  {
    result = *(_QWORD *)(a1 + 48);
    if ( !result || v7 == result )
    {
      result = *(unsigned int *)(a1 + 84);
      if ( (result & 8) != 0 )
      {
        *(_QWORD *)(a1 + 48) = 0LL;
        *(_DWORD *)(a1 + 84) = result & 0xFFFFFF8F | 0x20;
        return MiEnumerateSlabAllocatorsEx(
                 *(_QWORD *)a1,
                 (__int64)MiFindDefragmentSlabEntriesHelper,
                 a1,
                 *(_DWORD *)(a1 + 68),
                 *(_DWORD *)(a1 + 72));
      }
    }
  }
  return result;
}
