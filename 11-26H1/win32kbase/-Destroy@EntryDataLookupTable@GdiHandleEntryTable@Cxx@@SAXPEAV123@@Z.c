/*
 * XREFs of ?Destroy@EntryDataLookupTable@GdiHandleEntryTable@Cxx@@SAXPEAV123@@Z @ 0x1401795C8
 * Callers:
 *     ?Destroy@GdiHandleEntryDirectory@Cxx@@SAXPEAV12@@Z @ 0x140179558 (-Destroy@GdiHandleEntryDirectory@Cxx@@SAXPEAV12@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall Cxx::GdiHandleEntryTable::EntryDataLookupTable::Destroy(
        char *Buffer,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rsi
  char *v8; // rcx

  v5 = (unsigned int)(*((_DWORD *)Buffer + 2) + 255) >> 8;
  if ( v5 )
  {
    v6 = 0LL;
    v7 = v5;
    do
    {
      v8 = *(char **)(v6 + *(_QWORD *)Buffer);
      if ( v8 )
        GreDeleteFastMutex(v8, a2, a3, a4);
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  GreDeleteFastMutex(Buffer, a2, a3, a4);
}
