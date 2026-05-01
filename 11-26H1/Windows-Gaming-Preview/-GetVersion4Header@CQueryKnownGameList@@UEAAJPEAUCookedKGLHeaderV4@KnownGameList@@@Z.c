/*
 * XREFs of ?GetVersion4Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV4@KnownGameList@@@Z @ 0x180040FA0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180002F5E (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180002FE8 (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::GetVersion4Header(
        CQueryKnownGameList *this,
        struct KnownGameList::CookedKGLHeaderV4 *a2)
{
  struct KnownGameList::CookedKGLHeaderV4 *v2; // r9
  _OWORD *v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  if ( a2 )
  {
    v4 = (_OWORD *)((char *)this + 32);
    if ( *((_DWORD *)this + 9) >= 4u )
    {
      if ( this == (CQueryKnownGameList *)-32LL )
      {
        memset_0(a2, 0, 0x2C0uLL);
        *(_DWORD *)_o__errno(v7) = 22;
        invalid_parameter_noinfo();
      }
      else
      {
        v5 = 5LL;
        do
        {
          *(_OWORD *)v2 = *v4;
          *((_OWORD *)v2 + 1) = v4[1];
          *((_OWORD *)v2 + 2) = v4[2];
          *((_OWORD *)v2 + 3) = v4[3];
          *((_OWORD *)v2 + 4) = v4[4];
          *((_OWORD *)v2 + 5) = v4[5];
          *((_OWORD *)v2 + 6) = v4[6];
          v2 = (struct KnownGameList::CookedKGLHeaderV4 *)((char *)v2 + 128);
          v6 = v4[7];
          v4 += 8;
          *((_OWORD *)v2 - 1) = v6;
          --v5;
        }
        while ( v5 );
        *(_OWORD *)v2 = *v4;
        *((_OWORD *)v2 + 1) = v4[1];
        *((_OWORD *)v2 + 2) = v4[2];
        *((_OWORD *)v2 + 3) = v4[3];
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26D,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000DLL);
      return 2147942413LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26B,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
