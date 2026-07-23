/*
 * XREFs of SymCryptFdefIntCopyMixedSize @ 0x14056FC7C
 * Callers:
 *     SymCryptIntCopyMixedSize @ 0x14055E6C0 (SymCryptIntCopyMixedSize.c)
 * Callees:
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall SymCryptFdefIntCopyMixedSize(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi
  unsigned int v6; // ecx
  unsigned int v7; // eax
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax

  v2 = 0;
  if ( a1 != a2 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    if ( v5 >= *(_DWORD *)(a2 + 4) )
      v5 = *(_DWORD *)(a2 + 4);
    memmove((void *)(a2 + 32), (const void *)(a1 + 32), v5 << 6);
    v6 = *(_DWORD *)(a2 + 4);
    if ( v6 > v5 )
      SymCryptWipe(a2 + 32 + 64LL * v5, (v6 - v5) << 6);
    v7 = *(_DWORD *)(a1 + 4);
    if ( v7 > v5 )
    {
      v8 = (_QWORD *)(a1 + 4 * (16 * v5 + 8LL));
      v9 = 0LL;
      v10 = (8 * (v7 - v5)) & 0x1FFFFFFF;
      if ( v10 )
      {
        do
        {
          v9 |= *v8++;
          --v10;
        }
        while ( v10 );
        if ( v9 )
          return 32781;
      }
    }
  }
  return v2;
}
