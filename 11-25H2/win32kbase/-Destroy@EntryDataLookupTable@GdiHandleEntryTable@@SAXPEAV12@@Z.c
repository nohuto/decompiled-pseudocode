/*
 * XREFs of ?Destroy@EntryDataLookupTable@GdiHandleEntryTable@@SAXPEAV12@@Z @ 0x140129548
 * Callers:
 *     ?Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z @ 0x1401294DC (-Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall GdiHandleEntryTable::EntryDataLookupTable::Destroy(char *Buffer)
{
  unsigned int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // rsi
  char *v5; // rcx

  v2 = (unsigned int)(*((_DWORD *)Buffer + 2) + 255) >> 8;
  if ( v2 )
  {
    v3 = 0LL;
    v4 = v2;
    do
    {
      v5 = *(char **)(v3 + *(_QWORD *)Buffer);
      if ( v5 )
        GreDeleteFastMutex(v5);
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  GreDeleteFastMutex(Buffer);
}
