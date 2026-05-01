/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18063FA70
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x18021A770 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18063E4B0 (--0-$heap_implements@V-$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  void *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  winrt::Windows::Internal::Shell::implementation::CloudPCComponent *v10; // rax
  __int64 v11; // r14
  char v12; // cl
  char v13; // dl
  char v14; // r8
  char v15; // r10
  char v16; // r11
  char v17; // di
  char v18; // si
  unsigned int v19; // ebx
  int v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h] BYREF
  int v22; // [rsp+30h] [rbp-38h] BYREF
  __int16 v23; // [rsp+34h] [rbp-34h]
  __int16 v24; // [rsp+36h] [rbp-32h]
  char v25; // [rsp+38h] [rbp-30h]
  char v26; // [rsp+39h] [rbp-2Fh]
  char v27; // [rsp+3Ah] [rbp-2Eh]
  char v28; // [rsp+3Bh] [rbp-2Dh]
  char v29; // [rsp+3Ch] [rbp-2Ch]
  char v30; // [rsp+3Dh] [rbp-2Bh]
  char v31; // [rsp+3Eh] [rbp-2Ah]
  char v32; // [rsp+3Fh] [rbp-29h]
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
    v7 = operator new(0x98uLL);
    memset_0(v7, 0, 0x98uLL);
    v10 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>>(
            (winrt::Windows::Internal::Shell::implementation::CloudPCComponent *)v7,
            v8,
            v9);
    v11 = ((unsigned __int64)v10 + 88) & -(__int64)(v10 != 0LL);
    v21 = v11;
    v12 = *((_BYTE *)a3 + 8);
    v13 = *((_BYTE *)a3 + 9);
    v14 = *((_BYTE *)a3 + 10);
    v15 = *((_BYTE *)a3 + 11);
    v16 = *((_BYTE *)a3 + 12);
    LOBYTE(v7) = *((_BYTE *)a3 + 13);
    v17 = *((_BYTE *)a3 + 14);
    v18 = *((_BYTE *)a3 + 15);
    v22 = *a3;
    v23 = *((_WORD *)a3 + 2);
    v24 = *((_WORD *)a3 + 3);
    v25 = v12;
    v26 = v13;
    v27 = v14;
    v28 = v15;
    v29 = v16;
    v30 = (char)v7;
    v31 = v17;
    v32 = v18;
    v19 = *winrt::Windows::Foundation::IUnknown::as(&v21, &v20, (__int64)&v22, (__int64)a4);
    if ( v11 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
    return v19;
  }
}
