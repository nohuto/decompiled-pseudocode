/*
 * XREFs of ?IsPackagedApp@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA_NXZ @ 0x18002B540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::IsPackagedApp(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  __int64 v1; // r8
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 29);
  if ( v1 && *((_QWORD *)this + 27) )
  {
    v5 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 64LL))(v1, &v5);
    v3 = v5;
    if ( v2 >= 0 && v5 )
    {
      v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      return 1;
    }
    if ( v5 )
    {
      v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  return 0;
}
