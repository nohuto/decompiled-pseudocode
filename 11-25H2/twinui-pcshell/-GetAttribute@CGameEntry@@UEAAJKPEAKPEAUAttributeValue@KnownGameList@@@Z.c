/*
 * XREFs of ?GetAttribute@CGameEntry@@UEAAJKPEAKPEAUAttributeValue@KnownGameList@@@Z @ 0x1801B44D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGameEntry::GetAttribute(
        CGameEntry *this,
        unsigned int a2,
        unsigned int *a3,
        struct KnownGameList::AttributeValue *a4)
{
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    v8 = 1287LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  if ( !a4 )
  {
    v8 = 1288LL;
    goto LABEL_10;
  }
  if ( a2 >= *((unsigned __int16 *)this + 26) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50A,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  else
  {
    v5 = 2LL * a2;
    v6 = *(_DWORD *)(*((_QWORD *)this + 8) + 8 * v5);
    *a3 = v6;
    if ( (v6 & 0x10000000) != 0 )
    {
      *(_DWORD *)a4 = 0;
      *((_DWORD *)a4 + 2) = *((_WORD *)a3 + 1) & 0x7FF;
    }
    else
    {
      *(_DWORD *)a4 = 1;
      *((_QWORD *)a4 + 1) = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v5 + 8);
      *((_DWORD *)a4 + 4) = *(_DWORD *)(*((_QWORD *)this + 8) + 8 * v5 + 4);
    }
    return 0LL;
  }
}
