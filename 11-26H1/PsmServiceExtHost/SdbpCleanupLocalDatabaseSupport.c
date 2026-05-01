/*
 * XREFs of SdbpCleanupLocalDatabaseSupport @ 0x18008FFCC
 * Callers:
 *     SdbReleaseDatabase @ 0x18008DDFC (SdbReleaseDatabase.c)
 * Callees:
 *     SdbpCloseLocalDatabaseEx @ 0x180090030 (SdbpCloseLocalDatabaseEx.c)
 */

__int64 __fastcall SdbpCleanupLocalDatabaseSupport(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  int v4; // eax

  if ( (*(_DWORD *)(a1 + 36) & 0xFFF8) != 0 )
  {
    for ( i = 3; i < 0x10; ++i )
    {
      v4 = *(_DWORD *)(a1 + 36);
      if ( _bittest(&v4, i) )
        SdbpCloseLocalDatabaseEx(a1, a2, i);
    }
  }
  if ( *(_QWORD *)(a1 + 24) )
    SdbpCloseLocalDatabaseEx(a1, a2, 1LL);
  return 1LL;
}
