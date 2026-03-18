/*
 * XREFs of ?Destroy@GdiHandleEntryDirectory@Cxx@@SAXPEAV12@@Z @ 0x140179558
 * Callers:
 *     ?_Initialize@GdiHandleManager@Cxx@@AEAA_NIPEAU_ENTRY@@IE@Z @ 0x1401916DC (-_Initialize@GdiHandleManager@Cxx@@AEAA_NIPEAU_ENTRY@@IE@Z.c)
 *     ?Destroy@GdiHandleManager@Cxx@@UEAAXXZ @ 0x14024B1F0 (-Destroy@GdiHandleManager@Cxx@@UEAAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Destroy@EntryDataLookupTable@GdiHandleEntryTable@Cxx@@SAXPEAV123@@Z @ 0x1401795C8 (-Destroy@EntryDataLookupTable@GdiHandleEntryTable@Cxx@@SAXPEAV123@@Z.c)
 */

void __fastcall Cxx::GdiHandleEntryDirectory::Destroy(char **Buffer, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  PVOID *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  for ( i = 0LL; i < 2048; i += 8LL )
  {
    v6 = *(PVOID **)&(*Buffer)[i];
    if ( v6 )
    {
      Cxx::GdiHandleEntryTable::EntryDataLookupTable::Destroy(*v6);
      GreDeleteFastMutex((char *)v6, v7, v8, v9);
      *(_QWORD *)&(*Buffer)[i] = 0LL;
    }
  }
  GreDeleteFastMutex(*Buffer, a2, a3, a4);
  GreDeleteFastMutex((char *)Buffer, v10, v11, v12);
}
