/*
 * XREFs of MiRebalanceSystemCacheFreedViews @ 0x1402A2790
 * Callers:
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402A29D8 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiDeleteUnmappedSystemCacheViews @ 0x1406FA688 (MiDeleteUnmappedSystemCacheViews.c)
 * Callees:
 *     MiInsertReadiedSystemCacheViews @ 0x1402A28A4 (MiInsertReadiedSystemCacheViews.c)
 */

void __fastcall MiRebalanceSystemCacheFreedViews(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // edi

  v3 = a1 + 2560;
  if ( *(_QWORD *)(a1 + 2576) )
  {
    v7 = *(_DWORD *)(a1 + 2584);
    v8 = a2 - v7;
    if ( a3 || v8 > 2 || (v7 & 1) == 0 && v8 >= 2 )
      MiInsertReadiedSystemCacheViews(a1, v3);
  }
  if ( *(_QWORD *)(v3 + 48) )
  {
    v9 = *(_DWORD *)(v3 + 56);
    v10 = a2 - v9;
    if ( a3 || v10 > 2 || (v9 & 1) == 0 && v10 >= 2 )
      MiInsertReadiedSystemCacheViews(a1, v3 + 32);
  }
  if ( *(_QWORD *)(v3 + 80) )
  {
    v11 = *(_DWORD *)(v3 + 88);
    v12 = a2 - v11;
    if ( a3 || v12 > 2 || (v11 & 1) == 0 && v12 >= 2 )
      MiInsertReadiedSystemCacheViews(a1, v3 + 64);
  }
  if ( *(_QWORD *)(v3 + 112) )
  {
    v13 = *(_DWORD *)(v3 + 120);
    v14 = a2 - v13;
    if ( a3 || v14 > 2 || (v13 & 1) == 0 && v14 >= 2 )
      MiInsertReadiedSystemCacheViews(a1, v3 + 96);
  }
}
