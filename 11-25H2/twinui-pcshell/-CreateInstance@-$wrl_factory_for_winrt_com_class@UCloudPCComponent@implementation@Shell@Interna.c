/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180619EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x1802294C0 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1806185C4 (--0-$heap_implements@V-$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  void *v6; // rbx
  __int64 v7; // rdx
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent *v8; // rax
  __int64 v9; // r12
  char v10; // r8
  char v11; // r10
  char v12; // r11
  char v13; // di
  char v14; // si
  char v15; // r14
  char v16; // r15
  __int16 v17; // dx
  __int16 v18; // cx
  unsigned int v19; // ebx
  int v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v22; // [rsp+30h] [rbp-48h]
  int v23; // [rsp+38h] [rbp-40h] BYREF
  __int16 v24; // [rsp+3Ch] [rbp-3Ch]
  __int16 v25; // [rsp+3Eh] [rbp-3Ah]
  char v26; // [rsp+40h] [rbp-38h]
  char v27; // [rsp+41h] [rbp-37h]
  char v28; // [rsp+42h] [rbp-36h]
  char v29; // [rsp+43h] [rbp-35h]
  char v30; // [rsp+44h] [rbp-34h]
  char v31; // [rsp+45h] [rbp-33h]
  char v32; // [rsp+46h] [rbp-32h]
  char v33; // [rsp+47h] [rbp-31h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v22 = a4;
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
    v6 = operator new(0x98uLL);
    memset_0(v6, 0, 0x98uLL);
    v8 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>>(
           (winrt::Windows::Internal::Shell::implementation::CloudPCComponent *)v6,
           v7);
    v9 = ((unsigned __int64)v8 + 88) & -(__int64)(v8 != 0LL);
    v21 = v9;
    v10 = *((_BYTE *)a3 + 8);
    v11 = *((_BYTE *)a3 + 9);
    v12 = *((_BYTE *)a3 + 10);
    LOBYTE(v6) = *((_BYTE *)a3 + 11);
    v13 = *((_BYTE *)a3 + 12);
    v14 = *((_BYTE *)a3 + 13);
    v15 = *((_BYTE *)a3 + 14);
    v16 = *((_BYTE *)a3 + 15);
    v17 = *((_WORD *)a3 + 3);
    v18 = *((_WORD *)a3 + 2);
    v23 = *a3;
    v24 = v18;
    v25 = v17;
    v26 = v10;
    v27 = v11;
    v28 = v12;
    v29 = (char)v6;
    v30 = v13;
    v31 = v14;
    v32 = v15;
    v33 = v16;
    v19 = *winrt::Windows::Foundation::IUnknown::as(&v21, &v20, (__int64)&v23, (__int64)v22);
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
    return v19;
  }
}
