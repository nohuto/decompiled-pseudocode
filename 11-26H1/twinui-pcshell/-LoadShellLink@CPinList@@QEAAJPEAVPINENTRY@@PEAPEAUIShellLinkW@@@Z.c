/*
 * XREFs of ?LoadShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAPEAUIShellLinkW@@@Z @ 0x1806945BC
 * Callers:
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x180696380 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinList::LoadShellLink(CPinList *this, struct PINENTRY *a2, struct IShellLinkW **a3)
{
  _QWORD *v3; // rdi
  HRESULT v7; // ebx
  LPVOID ppv; // [rsp+30h] [rbp-38h] BYREF

  v3 = (_QWORD *)((char *)a2 + 8);
  if ( *((_QWORD *)a2 + 1) )
  {
    v7 = 0;
  }
  else if ( *((_DWORD *)a2 + 6) )
  {
    ppv = 0LL;
    v7 = CoCreateInstance(&CLSID_ShellLink, 0LL, 3u, &GUID_00000109_0000_0000_c000_000000000046, &ppv);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 1) + 40LL))(
             *((_QWORD *)this + 1),
             *((_QWORD *)a2 + 2),
             0LL,
             0LL);
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 40LL))(ppv, *((_QWORD *)this + 1));
        if ( v7 >= 0 )
          v7 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, _QWORD *))ppv)(
                 ppv,
                 &GUID_000214f9_0000_0000_c000_000000000046,
                 v3);
      }
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    }
  }
  else
  {
    v7 = -2147467259;
  }
  *a3 = (struct IShellLinkW *)*v3;
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
    return 0;
  }
  return (unsigned int)v7;
}
