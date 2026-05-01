/*
 * XREFs of ?QueryContextMenu@CPinnedList@@UEAAJPEAUHMENU__@@IIII@Z @ 0x1806957D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_ShouldAddMenu@CPinnedList@@IEAAJI@Z @ 0x18069A0AC (-_ShouldAddMenu@CPinnedList@@IEAAJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinnedList::QueryContextMenu(
        CPinnedList *this,
        HMENU a2,
        UINT a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  char *v6; // rbx
  __int64 result; // rax
  __int64 v12; // rax
  UINT uID[4]; // [rsp+30h] [rbp-258h] BYREF
  WCHAR Buffer[264]; // [rsp+40h] [rbp-248h] BYREF

  v6 = (char *)this - 8;
  result = CPinnedList::_ShouldAddMenu((CPinnedList *)((char *)this - 8), a6);
  if ( !(_DWORD)result )
  {
    if ( (*(unsigned int (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 72LL))(
           (char *)this + 8,
           *((_QWORD *)this + 12)) )
    {
      *((_DWORD *)v6 + 24) = 0;
      if ( !(unsigned int)IsProcessAnExplorer() )
        return 2LL;
    }
    else
    {
      *((_DWORD *)v6 + 24) = 1;
    }
    v12 = *(_QWORD *)v6;
    uID[0] = 0;
    if ( (*(int (__fastcall **)(char *, UINT *))(v12 + 136))(v6, uID) >= 0 )
    {
      if ( LoadStringW(&_ImageBase, uID[0], Buffer, 260) )
        InsertMenuW(a2, a3, 0x400u, (unsigned int)(a4 + *((_DWORD *)this + 22)), Buffer);
    }
    return 2LL;
  }
  return result;
}
