/*
 * XREFs of ?get_LauncherExecutable@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIStorageFile@Storage@5@@Z @ 0x180035F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LauncherExecutable(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::Storage::IStorageFile **a2)
{
  __int64 v4; // rcx

  *a2 = 0LL;
  v4 = *((_QWORD *)this + 35);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a2 = (struct Windows::Storage::IStorageFile *)*((_QWORD *)this + 35);
  }
  return 0LL;
}
