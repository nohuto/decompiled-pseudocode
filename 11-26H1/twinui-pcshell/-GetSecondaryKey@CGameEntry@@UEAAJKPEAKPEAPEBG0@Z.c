/*
 * XREFs of ?GetSecondaryKey@CGameEntry@@UEAAJKPEAKPEAPEBG0@Z @ 0x18067CEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGameEntry::GetSecondaryKey(
        CGameEntry *this,
        unsigned int a2,
        unsigned int *a3,
        const unsigned __int16 **a4,
        unsigned int *a5)
{
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a4 )
  {
    v5 = 1271LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  if ( !a5 )
  {
    v5 = 1272LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v5 = 1273LL;
    goto LABEL_3;
  }
  if ( a2 < *((unsigned __int16 *)this + 25) )
  {
    v7 = *((_QWORD *)this + 7);
    v8 = 2LL * a2;
    if ( *(_QWORD *)(v7 + 8 * v8 + 8) )
    {
      *a3 = *(_DWORD *)(v7 + 8 * v8);
      *a5 = *(_DWORD *)(*((_QWORD *)this + 7) + 8 * v8 + 4) >> 1;
      result = 0LL;
      *a4 = *(const unsigned __int16 **)(*((_QWORD *)this + 7) + 8 * v8 + 8);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4FB,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4FA,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  return result;
}
