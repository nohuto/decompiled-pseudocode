/*
 * XREFs of ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003F300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E034 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003FE0C (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetGameEntryFromPID(
        CQueryKnownGameList *this,
        unsigned int a2,
        struct KnownGameList::IGameEntry **a3)
{
  int ProcessNameByPID; // ebx
  __int64 v7; // rdx
  unsigned __int16 *v9; // rbx
  const struct std::nothrow_t *v10; // rdx
  int GameEntryByIdentifier; // edi
  const struct std::nothrow_t *v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int16 *v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0LL;
  if ( !a3 )
  {
    ProcessNameByPID = -2147467261;
    v7 = 313LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)ProcessNameByPID);
    return (unsigned int)ProcessNameByPID;
  }
  *a3 = 0LL;
  ProcessNameByPID = CQueryKnownGameList::GetProcessNameByPID(this, a2, (const unsigned __int16 **)&v14);
  if ( ProcessNameByPID < 0 )
  {
    v7 = 317LL;
    goto LABEL_3;
  }
  v9 = v14;
  GameEntryByIdentifier = CQueryKnownGameList::GetGameEntryByIdentifier(this, v14, a2, a3);
  if ( GameEntryByIdentifier == -2147023728 )
  {
    if ( v9 )
      operator delete(v9, v10);
    return 2147943568LL;
  }
  else if ( GameEntryByIdentifier >= 0 )
  {
    if ( v9 )
      operator delete(v9, v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)GameEntryByIdentifier);
    if ( v9 )
      operator delete(v9, v12);
    return (unsigned int)GameEntryByIdentifier;
  }
}
