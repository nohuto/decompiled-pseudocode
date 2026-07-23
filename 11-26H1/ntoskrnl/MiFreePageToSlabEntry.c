/*
 * XREFs of MiFreePageToSlabEntry @ 0x14036BB5C
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x14036B704 (MiFreePageToSlabAllocator.c)
 * Callees:
 *     MiSlabEntryBecameEmpty @ 0x14036BE10 (MiSlabEntryBecameEmpty.c)
 *     MiUpdateSlabTypeAvailablePages @ 0x14036BE78 (MiUpdateSlabTypeAvailablePages.c)
 */

__int64 __fastcall MiFreePageToSlabEntry(int a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  unsigned int v6; // esi
  __int64 v7; // r10
  unsigned int v8; // r9d
  volatile signed __int32 *v9; // r8
  int v10; // esi
  __int64 result; // rax
  unsigned __int64 v12; // rax

  v5 = MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a3 + 136) >> 3) & 3];
  v6 = a1 / 48 - *(_DWORD *)(a2 + 40);
  _InterlockedAdd((volatile signed __int32 *)(a2 + 84), 1u);
  _InterlockedAdd((volatile signed __int32 *)(a3 + 96), 1u);
  MiUpdateSlabTypeAvailablePages(*(_QWORD *)(a3 + 24), *(unsigned int *)(a3 + 128), 1LL);
  v7 = v6 & 0x1F;
  LOBYTE(v8) = 1;
  v9 = (volatile signed __int32 *)(*(_QWORD *)(a2 + 72) + 4 * ((unsigned __int64)v6 >> 5));
  if ( (unsigned __int64)(v7 + 1) <= 0x20 )
  {
    _InterlockedAnd(v9, ~(1 << v7));
  }
  else
  {
    v10 = v6 & 0x1F;
    if ( !v10 )
      goto LABEL_3;
    _InterlockedAnd(v9, ~(((1 << (32 - v10)) - 1) << v7));
    v8 = 1 - (32 - v10);
    ++v9;
    if ( v8 >= 0x20 )
    {
      v12 = (unsigned __int64)v8 >> 5;
      do
      {
        *v9 = 0;
        v8 -= 32;
        ++v9;
        --v12;
      }
      while ( v12 );
    }
    if ( v8 )
LABEL_3:
      _InterlockedAnd(v9, -1 << v8);
  }
  result = *(unsigned int *)(a2 + 88);
  if ( (int)result + *(_DWORD *)(a2 + 84) >= v5 )
    return MiSlabEntryBecameEmpty(a3, a2);
  return result;
}
