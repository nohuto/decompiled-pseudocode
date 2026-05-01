/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1805F4600
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x18021A770 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1805F353C (--0-$heap_implements@V-$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@W.c)
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
  __int64 v9; // r8
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *v10; // rax
  char v11; // cl
  char v12; // dl
  char v13; // r8
  char v14; // r10
  char v15; // r11
  char v16; // di
  char v17; // si
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
    v7 = operator new(0x128uLL);
    memset_0(v7, 0, 0x128uLL);
    v10 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>(
            (winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)v7,
            v8,
            v9);
    v19 = ((unsigned __int64)v10 + 8) & -(__int64)(v10 != 0LL);
    v11 = *((_BYTE *)a3 + 8);
    v12 = *((_BYTE *)a3 + 9);
    v13 = *((_BYTE *)a3 + 10);
    v14 = *((_BYTE *)a3 + 11);
    v15 = *((_BYTE *)a3 + 12);
    LOBYTE(v7) = *((_BYTE *)a3 + 13);
    v16 = *((_BYTE *)a3 + 14);
    v17 = *((_BYTE *)a3 + 15);
    v20 = *a3;
    v21 = *((_WORD *)a3 + 2);
    v22 = *((_WORD *)a3 + 3);
    v23 = v11;
    v24 = v12;
    v25 = v13;
    v26 = v14;
    v27 = v15;
    v28 = (char)v7;
    v29 = v16;
    v30 = v17;
    LODWORD(v7) = *winrt::Windows::Foundation::IUnknown::as(&v19, &v18, (__int64)&v20, (__int64)a4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
    return (unsigned int)v7;
  }
}
