/*
 * XREFs of ?GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180110490
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1801105E4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::GetGameEntryFromAppId(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2,
        struct KnownGameList::IGameEntry **a3)
{
  int GameEntryByIdentifier; // ebx
  __int64 v4; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    GameEntryByIdentifier = -2147467261;
    v4 = 329LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)GameEntryByIdentifier);
    return (unsigned int)GameEntryByIdentifier;
  }
  *a3 = 0LL;
  GameEntryByIdentifier = CQueryKnownGameList::GetGameEntryByIdentifier(this, a2, 0, a3);
  result = 2147943568LL;
  if ( GameEntryByIdentifier != -2147023728 )
  {
    if ( GameEntryByIdentifier >= 0 )
      return 0LL;
    v4 = 336LL;
    goto LABEL_3;
  }
  return result;
}
