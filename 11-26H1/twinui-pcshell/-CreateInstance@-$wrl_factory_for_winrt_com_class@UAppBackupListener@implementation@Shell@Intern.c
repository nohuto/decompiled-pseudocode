/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180222340
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make@V?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x1802AB99C (--$make@V-$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  _QWORD *v7; // rax
  char v8; // dl
  char v9; // r8
  unsigned int v10; // ebx
  const char *v11; // r9
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h] BYREF
  __int16 v14; // [rsp+2Ch] [rbp-1Ch]
  __int16 v15; // [rsp+2Eh] [rbp-1Ah]
  char v16; // [rsp+30h] [rbp-18h]
  char v17; // [rsp+31h] [rbp-17h]
  char v18; // [rsp+32h] [rbp-16h]
  char v19; // [rsp+33h] [rbp-15h]
  char v20; // [rsp+34h] [rbp-14h]
  char v21; // [rsp+35h] [rbp-13h]
  char v22; // [rsp+36h] [rbp-12h]
  char v23; // [rsp+37h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    try
    {
      v7 = (_QWORD *)winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>,>(&v12);
      v8 = *((_BYTE *)a3 + 8);
      v9 = *((_BYTE *)a3 + 9);
      v13 = *a3;
      v14 = *((_WORD *)a3 + 2);
      v15 = *((_WORD *)a3 + 3);
      v16 = v8;
      v17 = v9;
      v18 = *((_BYTE *)a3 + 10);
      v19 = *((_BYTE *)a3 + 11);
      v20 = *((_BYTE *)a3 + 12);
      v21 = *((_BYTE *)a3 + 13);
      v22 = *((_BYTE *)a3 + 14);
      v23 = *((_BYTE *)a3 + 15);
      v10 = (**(__int64 (__fastcall ***)(_QWORD, int *, _QWORD *))*v7)(*v7, &v13, a4);
      if ( v12 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v12);
      result = v10;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x49,
                             (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
                             v11);
    }
  }
  return result;
}
