/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180623CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?as@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x1801FA5D4 (-as@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-AUhresult@2@AEBUguid@2@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18062258C (--0-$heap_implements@V-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@Q.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<CopilotHotkeyManager>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  void *v7; // rbx
  CopilotHotkeyManager *v8; // rax
  __int64 v9; // r14
  char v10; // cl
  char v11; // dl
  char v12; // r8
  char v13; // r10
  char v14; // r11
  char v15; // di
  char v16; // si
  unsigned int v17; // ebx
  int v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+28h] [rbp-40h] BYREF
  int v20; // [rsp+30h] [rbp-38h] BYREF
  __int16 v21; // [rsp+34h] [rbp-34h]
  __int16 v22; // [rsp+36h] [rbp-32h]
  char v23; // [rsp+38h] [rbp-30h]
  char v24; // [rsp+39h] [rbp-2Fh]
  char v25; // [rsp+3Ah] [rbp-2Eh]
  char v26; // [rsp+3Bh] [rbp-2Dh]
  char v27; // [rsp+3Ch] [rbp-2Ch]
  char v28; // [rsp+3Dh] [rbp-2Bh]
  char v29; // [rsp+3Eh] [rbp-2Ah]
  char v30; // [rsp+3Fh] [rbp-29h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

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
    v7 = operator new(0x280uLL);
    memset_0(v7, 0, 0x280uLL);
    v8 = winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>((CopilotHotkeyManager *)v7);
    v9 = ((unsigned __int64)v8 + 16) & -(__int64)(v8 != 0LL);
    v19 = v9;
    v10 = *((_BYTE *)a3 + 8);
    v11 = *((_BYTE *)a3 + 9);
    v12 = *((_BYTE *)a3 + 10);
    v13 = *((_BYTE *)a3 + 11);
    v14 = *((_BYTE *)a3 + 12);
    LOBYTE(v7) = *((_BYTE *)a3 + 13);
    v15 = *((_BYTE *)a3 + 14);
    v16 = *((_BYTE *)a3 + 15);
    v20 = *a3;
    v21 = *((_WORD *)a3 + 2);
    v22 = *((_WORD *)a3 + 3);
    v23 = v10;
    v24 = v11;
    v25 = v12;
    v26 = v13;
    v27 = v14;
    v28 = (char)v7;
    v29 = v15;
    v30 = v16;
    v17 = *winrt::com_ptr<IObjectWithSite>::as(&v19, &v18, (__int64)&v20, (__int64)a4);
    if ( v9 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v19);
    return v17;
  }
}
