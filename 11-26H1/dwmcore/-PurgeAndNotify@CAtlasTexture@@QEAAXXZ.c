/*
 * XREFs of ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x180105BE4
 * Callers:
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x18006A290 (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x18020B068 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?NotifyOwner@CAtlasEntry@@AEBAXXZ @ 0x180105C34 (-NotifyOwner@CAtlasEntry@@AEBAXXZ.c)
 */

void __fastcall CAtlasTexture::PurgeAndNotify(CAtlasTexture *this)
{
  __int64 i; // rdi
  CAtlasEntry *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v3 = *(CAtlasEntry **)(*((_QWORD *)this + 2) + 8 * i);
    if ( v3 )
      CAtlasEntry::NotifyOwner(v3);
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
}
