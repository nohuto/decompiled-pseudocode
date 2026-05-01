/*
 * XREFs of ?GetGameConfigFromPID@CQueryKnownGameList@@UEAAJKPEAUKGLGameConfig@KnownGameList@@@Z @ 0x18003DF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitGameConfigFromEntry@@YAJPEAUIGameEntry@KnownGameList@@PEAUKGLGameConfig@2@@Z @ 0x1800411A4 (-InitGameConfigFromEntry@@YAJPEAUIGameEntry@KnownGameList@@PEAUKGLGameConfig@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CQueryKnownGameList::GetGameConfigFromPID(
        CQueryKnownGameList *this,
        __int64 a2,
        struct KnownGameList::KGLGameConfig *a3)
{
  unsigned int v4; // ebx
  struct KnownGameList::IGameEntry *v5; // rcx
  int v7; // edi
  struct KnownGameList::IGameEntry *v8; // rcx
  int inited; // eax
  struct KnownGameList::IGameEntry *v10; // rcx
  struct KnownGameList::IGameEntry *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct KnownGameList::IGameEntry *v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  if ( !a3 )
  {
    v4 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x159,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    v5 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v4;
  }
  v7 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, __int64, struct KnownGameList::IGameEntry **))(*(_QWORD *)this + 48LL))(
         this,
         a2,
         &v13);
  if ( v7 >= 0 )
  {
    inited = InitGameConfigFromEntry(v13, a3);
    v4 = inited;
    if ( inited < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15F,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)inited);
      v10 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return v4;
    }
    v11 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return 0LL;
  }
  else
  {
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return (unsigned int)v7;
  }
}
