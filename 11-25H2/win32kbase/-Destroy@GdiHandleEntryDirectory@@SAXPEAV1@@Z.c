/*
 * XREFs of ?Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z @ 0x1401294DC
 * Callers:
 *     ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1401A0388 (-Destroy@GdiHandleManager@@SAXPEAV1@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Destroy@EntryDataLookupTable@GdiHandleEntryTable@@SAXPEAV12@@Z @ 0x140129548 (-Destroy@EntryDataLookupTable@GdiHandleEntryTable@@SAXPEAV12@@Z.c)
 */

void __fastcall GdiHandleEntryDirectory::Destroy(char *Buffer)
{
  __int64 *v2; // rbx
  unsigned int i; // edi
  __int64 v4; // rsi

  v2 = (__int64 *)(Buffer + 8);
  for ( i = 0; i < 0x100; ++i )
  {
    v4 = *v2;
    if ( *v2 )
    {
      GdiHandleEntryTable::EntryDataLookupTable::Destroy(*(PVOID *)(v4 + 24));
      GreDeleteFastMutex((char *)v4);
      *v2 = 0LL;
    }
    ++v2;
  }
  GreDeleteFastMutex(Buffer);
}
