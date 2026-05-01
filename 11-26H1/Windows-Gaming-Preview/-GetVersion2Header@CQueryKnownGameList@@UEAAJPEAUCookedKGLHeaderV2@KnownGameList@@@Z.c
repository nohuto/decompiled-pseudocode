/*
 * XREFs of ?GetVersion2Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV2@KnownGameList@@@Z @ 0x180040DE0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180002F5E (_invalid_parameter_noinfo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::GetVersion2Header(
        CQueryKnownGameList *this,
        struct KnownGameList::CookedKGLHeaderV2 *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( *((_DWORD *)this + 9) >= 2u )
    {
      if ( this == (CQueryKnownGameList *)-32LL )
      {
        *(_OWORD *)a2 = 0LL;
        *((_OWORD *)a2 + 1) = 0LL;
        *(_DWORD *)_o__errno(-32LL) = 22;
        invalid_parameter_noinfo();
      }
      else
      {
        *(_OWORD *)a2 = *((_OWORD *)this + 2);
        *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x257,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000DLL);
      return 2147942413LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x255,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
