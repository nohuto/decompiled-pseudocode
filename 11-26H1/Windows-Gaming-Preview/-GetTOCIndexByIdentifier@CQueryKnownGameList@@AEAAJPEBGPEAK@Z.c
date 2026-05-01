/*
 * XREFs of ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x180040CAC
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E034 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003EC20 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CQueryKnownGameList::GetTOCIndexByIdentifier(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  char *v6; // rbp
  __int64 v7; // rdx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // esi
  int v12[4]; // [rsp+20h] [rbp-68h] BYREF
  char v13; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v6 = 0LL;
  *(_OWORD *)v12 = 0LL;
  if ( !a3 )
  {
    v7 = 1068LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  if ( !a2 )
  {
    v7 = 1069LL;
    goto LABEL_3;
  }
  v9 = 0;
  if ( !*((_DWORD *)this + 200) )
    return 2147942402LL;
  while ( 1 )
  {
    v10 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, int *))(*(_QWORD *)this + 88LL))(this, v9, v12);
    v11 = v10;
    if ( v10 < 0 )
      break;
    if ( !LOWORD(v12[0]) || (int)_o__wcsnicmp(v12, a2, 4LL) > 0 )
    {
      if ( !v6 )
        return 2147942402LL;
LABEL_13:
      *a3 = v9 - 1;
      return 0LL;
    }
    ++v9;
    v6 = &v13;
    if ( v9 >= *((_DWORD *)this + 200) )
      goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x433,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
