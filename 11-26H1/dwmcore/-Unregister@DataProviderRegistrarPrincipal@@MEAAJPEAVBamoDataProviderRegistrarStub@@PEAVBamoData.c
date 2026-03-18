/*
 * XREFs of ?Unregister@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x180242190
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z @ 0x18022E658 (-RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataProviderRegistrarPrincipal::Unregister(
        DataProviderManager **this,
        struct BamoDataProviderRegistrarStub *a2,
        struct BamoDataProviderProxy *a3)
{
  int v4; // r8d

  v4 = DataProviderManager::RemoveDataProvider(this[7], a3);
  if ( v4 < 0 )
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)a2 + 1) + 32LL))((char *)a2 + 8, (unsigned int)v4);
  return 0LL;
}
