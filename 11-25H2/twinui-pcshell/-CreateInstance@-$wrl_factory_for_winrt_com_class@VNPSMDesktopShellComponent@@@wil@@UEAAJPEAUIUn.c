/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180151500
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make@V?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x180151C38 (--$make@V-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@$$V@winrt@@YA-A_PXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::wrl_factory_for_winrt_com_class<NPSMDesktopShellComponent>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  char v8; // r9
  __int16 v9; // r8
  __int16 v10; // dx
  unsigned int v11; // ebx
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
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    v7 = (_QWORD *)winrt::make<wil::details::module_count_wrapper<NPSMDesktopShellComponent>,>(&v12);
    v8 = *((_BYTE *)a3 + 8);
    v9 = *((_WORD *)a3 + 3);
    v10 = *((_WORD *)a3 + 2);
    v13 = *a3;
    v14 = v10;
    v15 = v9;
    v16 = v8;
    v17 = *((_BYTE *)a3 + 9);
    v18 = *((_BYTE *)a3 + 10);
    v19 = *((_BYTE *)a3 + 11);
    v20 = *((_BYTE *)a3 + 12);
    v21 = *((_BYTE *)a3 + 13);
    v22 = *((_BYTE *)a3 + 14);
    v23 = *((_BYTE *)a3 + 15);
    v11 = (**(__int64 (__fastcall ***)(_QWORD, int *, _QWORD *))*v7)(*v7, &v13, a4);
    if ( v12 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v12);
    return v11;
  }
}
