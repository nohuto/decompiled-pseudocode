/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1805CFEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x1802294C0 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1805CEEB4 (--0-$heap_implements@V-$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  void *v7; // rbx
  __int64 v8; // rdx
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *v9; // rax
  char v10; // r8
  char v11; // r10
  char v12; // r11
  char v13; // di
  char v14; // si
  char v15; // r14
  char v16; // r15
  __int16 v17; // dx
  __int16 v18; // cx
  int v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+28h] [rbp-50h] BYREF
  int v21; // [rsp+30h] [rbp-48h] BYREF
  __int16 v22; // [rsp+34h] [rbp-44h]
  __int16 v23; // [rsp+36h] [rbp-42h]
  char v24; // [rsp+38h] [rbp-40h]
  char v25; // [rsp+39h] [rbp-3Fh]
  char v26; // [rsp+3Ah] [rbp-3Eh]
  char v27; // [rsp+3Bh] [rbp-3Dh]
  char v28; // [rsp+3Ch] [rbp-3Ch]
  char v29; // [rsp+3Dh] [rbp-3Bh]
  char v30; // [rsp+3Eh] [rbp-3Ah]
  char v31; // [rsp+3Fh] [rbp-39h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

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
    v7 = operator new(0x128uLL);
    memset_0(v7, 0, 0x128uLL);
    v9 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>(
           (winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)v7,
           v8);
    v20 = ((unsigned __int64)v9 + 8) & -(__int64)(v9 != 0LL);
    v10 = *((_BYTE *)a3 + 8);
    v11 = *((_BYTE *)a3 + 9);
    v12 = *((_BYTE *)a3 + 10);
    LOBYTE(v7) = *((_BYTE *)a3 + 11);
    v13 = *((_BYTE *)a3 + 12);
    v14 = *((_BYTE *)a3 + 13);
    v15 = *((_BYTE *)a3 + 14);
    v16 = *((_BYTE *)a3 + 15);
    v17 = *((_WORD *)a3 + 3);
    v18 = *((_WORD *)a3 + 2);
    v21 = *a3;
    v22 = v18;
    v23 = v17;
    v24 = v10;
    v25 = v11;
    v26 = v12;
    v27 = (char)v7;
    v28 = v13;
    v29 = v14;
    v30 = v15;
    v31 = v16;
    LODWORD(v7) = *winrt::Windows::Foundation::IUnknown::as(&v20, &v19, (__int64)&v21, (__int64)a4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
    return (unsigned int)v7;
  }
}
