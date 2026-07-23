/*
 * XREFs of SmProcessListRequestExtended @ 0x14081FE00
 * Callers:
 *     SmProcessListRequest @ 0x14081FBB8 (SmProcessListRequest.c)
 * Callees:
 *     SmKmStoreDereference @ 0x140265080 (SmKmStoreDereference.c)
 *     SmKmStoreReference @ 0x1402D2520 (SmKmStoreReference.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SmProcessListRequestExtended(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v6; // r15
  __int64 v7; // rax

  v4 = 0;
  if ( *(_BYTE *)(a2 + 1) )
  {
    v5 = 1;
    do
    {
      v6 = a2 + 4LL * v4;
      v7 = SmKmStoreReference(a1, *(_DWORD *)(v6 + 16));
      if ( v7 )
      {
        *(_WORD *)(a2 + ((unsigned __int64)v4 << 7) + 144) = 0;
        SmKmStoreDereference(a1, *(_DWORD *)(v7 + 2464));
      }
      else
      {
        memmove((void *)(v6 + 16), (const void *)(a2 + 4 * (v5-- + 4LL)), 4 * (*(unsigned __int8 *)(a2 + 1) - v4--) - 4);
        --*(_BYTE *)(a2 + 1);
      }
      ++v4;
      ++v5;
    }
    while ( v4 < *(unsigned __int8 *)(a2 + 1) );
  }
  return 0LL;
}
