/*
 * XREFs of ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x180031EF0
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800BAD08 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x18028992C (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x18028B4FC (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x18047CCB0 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEA_N@Z @ 0x18047CE24 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x18047CFB4 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180032DDC (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     ??$_Integral_to_string@GI@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@I@Z @ 0x180465CB8 (--$_Integral_to_string@GI@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@I@.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference(
        KeyboardHosting::TabTipAdapter *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  HSTRING v3; // rdi
  KeyboardHosting::TabTipAdapter *v5; // r13
  unsigned __int64 v6; // rax
  const void *v7; // rcx
  const void *Reserved1; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 size_of; // rax
  size_t v16; // r8
  __int64 v17; // rsi
  HSTRING v18; // rcx
  unsigned int v19; // r8d
  const WCHAR *v20; // rcx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  HRESULT v23; // eax
  int v24; // edx
  unsigned int v25; // r8d
  const WCHAR *v26; // rcx
  HRESULT v27; // eax
  int v28; // edx
  unsigned int v29; // r8d
  int v30; // eax
  __int64 v31; // rbx
  __int128 *p_Src; // rbx
  __int64 v33; // rax
  unsigned int v34; // [rsp+20h] [rbp-79h]
  __int128 Src; // [rsp+30h] [rbp-69h] BYREF
  __int64 v37; // [rsp+40h] [rbp-59h]
  unsigned __int64 v38; // [rsp+48h] [rbp-51h]
  HSTRING_HEADER v39; // [rsp+50h] [rbp-49h] BYREF
  HSTRING v40; // [rsp+68h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-29h] BYREF
  HSTRING string; // [rsp+88h] [rbp-11h] BYREF
  PCWSTR sourceString[4]; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v5 = this;
  v34 = a3;
  Src = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v6 = std::_WChar_traits<wchar_t>::length((__int64)L"ViewVisibilityUpdated_");
  std::wstring::_Construct<1,unsigned short const *>((char **)&Src, v7, v6);
  std::_Integral_to_string<unsigned short,unsigned int>(&v39, a2);
  Reserved1 = &v39;
  if ( (unsigned __int64)v40 > 7 )
    Reserved1 = v39.Reserved.Reserved1;
  v9 = v37;
  v10 = v38;
  v11 = *(_QWORD *)&v39.Reserved.Reserved2[16];
  if ( *(_QWORD *)&v39.Reserved.Reserved2[16] <= v38 - v37 )
  {
    v37 += *(_QWORD *)&v39.Reserved.Reserved2[16];
    p_Src = &Src;
    if ( v38 > 7 )
      p_Src = (__int128 *)Src;
    memmove_0((char *)p_Src + 2 * v9, Reserved1, 2LL * *(_QWORD *)&v39.Reserved.Reserved2[16]);
    v33 = v11 + v9;
    v17 = 0LL;
    *((_WORD *)p_Src + v33) = 0;
    goto LABEL_12;
  }
  v12 = 0x7FFFFFFFFFFFFFFELL;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFELL - v37) < *(_QWORD *)&v39.Reserved.Reserved2[16] )
    std::_Xlen_string();
  v13 = (v37 + *(_QWORD *)&v39.Reserved.Reserved2[16]) | 7;
  if ( v13 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v14 = v38 >> 1;
    if ( v38 <= 0x7FFFFFFFFFFFFFFELL - (v38 >> 1) )
    {
      v12 = v38 + v14;
      if ( v13 >= v38 + v14 )
        v12 = (v37 + *(_QWORD *)&v39.Reserved.Reserved2[16]) | 7;
    }
  }
  size_of = std::_Get_size_of_n<2>(v12 + 1);
  v3 = (HSTRING)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v37 = v9 + v11;
  v38 = v12;
  v16 = 2 * v9;
  v5 = (KeyboardHosting::TabTipAdapter *)((char *)v3 + 2 * v9);
  v17 = v11 + v9;
  v18 = v3;
  if ( v10 > 7 )
    goto LABEL_33;
  memcpy_0(v3, &Src, v16);
  memcpy_0(v5, Reserved1, 2 * v11);
  *((_WORD *)v3 + v17) = 0;
  while ( 1 )
  {
    v17 = 0LL;
    v5 = this;
    *(_QWORD *)&Src = v3;
LABEL_12:
    std::wstring::_Tidy_deallocate(&v39);
    std::_Integral_to_string<unsigned short,unsigned int>(sourceString, v34);
    v20 = (const WCHAR *)sourceString;
    if ( sourceString[3] > (PCWSTR)7 )
      v20 = sourceString[0];
    string = 0LL;
    v21 = -1LL;
    v22 = -1LL;
    do
      ++v22;
    while ( v20[v22] );
    v11 = 0xFFFFFFFFLL;
    if ( v22 > 0xFFFFFFFF )
      goto LABEL_32;
    if ( (int)v22 + 1 < (unsigned int)v22 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v22, v19);
LABEL_30:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v24, v25);
      __debugbreak();
    }
    v23 = WindowsCreateStringReference(v20, v22, &hstringHeader, &string);
    if ( v23 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23, v24, v25);
      goto LABEL_39;
    }
    v3 = string;
    v26 = (const WCHAR *)&Src;
    if ( v38 > 7 )
      v26 = (const WCHAR *)Src;
    v40 = 0LL;
    do
      ++v21;
    while ( v26[v21] );
    if ( v21 <= 0xFFFFFFFF )
      break;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v24, v25);
LABEL_32:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v22, v19);
LABEL_33:
    v31 = Src;
    memcpy_0(v18, (const void *)Src, v16);
    memcpy_0(v5, Reserved1, 2 * v11);
    *((_WORD *)v3 + v17) = 0;
    std::_Deallocate<16>(v31, 2 * v10 + 2);
  }
  if ( (int)v21 + 1 < (unsigned int)v21 )
    goto LABEL_30;
  v27 = WindowsCreateStringReference(v26, v21, &v39, &v40);
  if ( v27 < 0 )
  {
LABEL_39:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27, v28, v29);
    JUMPOUT(0x180032211LL);
  }
  v30 = KeyboardHosting::TabTipAdapter::SetShellPreference(v5, v40, v3);
  if ( v30 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCCD,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v30,
      v34);
  v40 = 0LL;
  string = 0LL;
  std::wstring::_Tidy_deallocate(sourceString);
  std::wstring::_Tidy_deallocate(&Src);
}
