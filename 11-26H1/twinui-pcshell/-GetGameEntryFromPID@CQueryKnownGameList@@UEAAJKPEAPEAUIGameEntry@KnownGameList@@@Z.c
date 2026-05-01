/*
 * XREFs of ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180110500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1801105E4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180111070 (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ??1?$unique_ptr@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@U?$default_delete@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@XZ @ 0x1801D0414 (--1-$unique_ptr@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@U-$default_delete@$$BY0A@UDISPLAYCONFIG_PATH_IN.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQueryKnownGameList::GetGameEntryFromPID(
        CQueryKnownGameList *this,
        unsigned int a2,
        struct KnownGameList::IGameEntry **a3)
{
  unsigned int ProcessNameByPID; // ebx
  unsigned __int16 *v7; // rdi
  int GameEntryByIdentifier; // eax
  const struct std::nothrow_t *v9; // rdx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int16 *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  if ( !a3 )
  {
    ProcessNameByPID = -2147467261;
    v11 = 313LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)ProcessNameByPID);
    return ProcessNameByPID;
  }
  *a3 = 0LL;
  ProcessNameByPID = CQueryKnownGameList::GetProcessNameByPID(this, a2, (const unsigned __int16 **)&v13);
  if ( (ProcessNameByPID & 0x80000000) != 0 )
  {
    v11 = 317LL;
    goto LABEL_8;
  }
  v7 = v13;
  GameEntryByIdentifier = CQueryKnownGameList::GetGameEntryByIdentifier(this, v13, a2, a3);
  ProcessNameByPID = GameEntryByIdentifier;
  if ( GameEntryByIdentifier != -2147023728 )
  {
    if ( GameEntryByIdentifier >= 0 )
      ProcessNameByPID = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x142,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)GameEntryByIdentifier);
    std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v13);
    return ProcessNameByPID;
  }
  if ( v7 )
    operator delete(v7, v9);
  return 2147943568LL;
}
