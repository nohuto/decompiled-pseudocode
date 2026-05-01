/*
 * XREFs of ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x18002A71C
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x1800961C8 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180293388 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180294234 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x18046EAC4 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEA_N@Z @ 0x18046EC30 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x18046EDC8 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180029F78 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??$_Construct@$00PEAG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEAG_K@Z @ 0x18002AEE0 (--$_Construct@$00PEAG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEAG_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802D0044 (-_Xlen_string@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E0490 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference(
        KeyboardHosting::TabTipAdapter *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  KeyboardHosting::TabTipAdapter *v4; // r12
  unsigned int v5; // r15d
  size_t size_of; // rax
  _OWORD *v7; // rax
  _BYTE *v8; // r9
  PCWSTR *v9; // rdx
  WCHAR *v10; // r13
  __int64 v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  size_t v17; // rax
  size_t v18; // r8
  char *v19; // rbx
  KeyboardHosting::TabTipAdapter *v20; // rcx
  unsigned int v21; // r8d
  KeyboardHosting::TabTipAdapter *v22; // rdx
  _BYTE *v23; // r9
  const WCHAR *v24; // rcx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rdx
  HRESULT v27; // eax
  int v28; // edx
  unsigned int v29; // r8d
  const WCHAR *v30; // rcx
  HRESULT v31; // eax
  int v32; // edx
  unsigned int v33; // r8d
  int v34; // eax
  KeyboardHosting::TabTipAdapter *v35; // rdx
  WCHAR *v36; // rcx
  KeyboardHosting::TabTipAdapter *v37; // rdx
  void *v38; // rcx
  void *v39; // rbx
  void **v40; // rbx
  char *v41; // rax
  void *v42; // [rsp+28h] [rbp-E0h] BYREF
  KeyboardHosting::TabTipAdapter *v43; // [rsp+30h] [rbp-D8h] BYREF
  void *Src[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B8h]
  unsigned __int64 sourceString; // [rsp+58h] [rbp-B0h]
  PCWSTR sourceString_8[2]; // [rsp+60h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+70h] [rbp-98h]
  HSTRING_HEADER v49; // [rsp+80h] [rbp-88h] BYREF
  HSTRING v50; // [rsp+98h] [rbp-70h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-68h] BYREF
  HSTRING string; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v53[48]; // [rsp+EAh] [rbp-1Eh] BYREF
  _BYTE v54[6]; // [rsp+11Ah] [rbp+12h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v4 = this;
  v43 = this;
  v5 = a3;
  *(_OWORD *)&Src[1] = 0LL;
  size_of = std::_Get_size_of_n<2>(0x18uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  Src[1] = v7;
  v45 = 22LL;
  sourceString = 23LL;
  *v7 = *(_OWORD *)L"ViewVisibilityUpdated_";
  v7[1] = *(_OWORD *)L"bilityUpdated_";
  *((_QWORD *)v7 + 4) = *(_QWORD *)L"dated_";
  *((_DWORD *)v7 + 10) = *(_DWORD *)L"d_";
  *((_WORD *)v7 + 22) = 0;
  v8 = v53;
  do
  {
    v8 -= 2;
    *(_WORD *)v8 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  *(_OWORD *)sourceString_8 = 0LL;
  si128 = 0LL;
  if ( v8 == v53 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(sourceString_8[0]) = 0;
  }
  else
  {
    std::wstring::_Construct<1,unsigned short *>(sourceString_8, v8, (v53 - v8) >> 1);
  }
  v9 = sourceString_8;
  v10 = (WCHAR *)sourceString_8[0];
  if ( si128.m128i_i64[1] > 7uLL )
    v9 = (PCWSTR *)sourceString_8[0];
  v42 = v9;
  v11 = v45;
  v12 = sourceString;
  v13 = si128.m128i_i64[0];
  if ( si128.m128i_i64[0] <= sourceString - v45 )
  {
    v45 += si128.m128i_i64[0];
    v40 = &Src[1];
    if ( sourceString > 7 )
      v40 = (void **)Src[1];
    memmove_0((char *)v40 + 2 * v11, v9, 2 * si128.m128i_i64[0]);
    v41 = (char *)(v13 + v11);
    v13 = 0LL;
    *((_WORD *)v40 + (_QWORD)v41) = 0;
    goto LABEL_16;
  }
  v14 = 0x7FFFFFFFFFFFFFFELL;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFELL - v45) < si128.m128i_i64[0] )
    std::_Xlen_string();
  v15 = (si128.m128i_i64[0] + v45) | 7;
  if ( v15 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v16 = sourceString >> 1;
    if ( sourceString <= 0x7FFFFFFFFFFFFFFELL - (sourceString >> 1) )
    {
      v14 = (si128.m128i_i64[0] + v45) | 7;
      if ( v15 < v16 + sourceString )
        v14 = v16 + sourceString;
    }
  }
  v17 = std::_Get_size_of_n<2>(v14 + 1);
  v4 = (KeyboardHosting::TabTipAdapter *)std::_Allocate<16,std::_Default_allocate_traits,0>(v17);
  v45 += v13;
  sourceString = v14;
  v18 = 2 * v11;
  v19 = (char *)v4 + 2 * v11;
  Src[0] = v19;
  v11 += v13;
  v20 = v4;
  if ( v12 > 7 )
    goto LABEL_52;
  memcpy_0(v4, &Src[1], v18);
  memcpy_0(v19, v42, 2 * v13);
  v13 = 0LL;
  *((_WORD *)v4 + v11) = 0;
  while ( 1 )
  {
    Src[1] = v4;
    v4 = v43;
LABEL_16:
    v12 = 4096LL;
    if ( si128.m128i_i64[1] > 7uLL )
    {
      v22 = (KeyboardHosting::TabTipAdapter *)(2 * si128.m128i_i64[1] + 2);
      v43 = v22;
      v42 = v10;
      if ( (unsigned __int64)v22 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v42, (unsigned __int64 *)&v43);
        v22 = v43;
        v10 = (WCHAR *)v42;
      }
      operator delete(v10, v22);
    }
    v23 = v54;
    do
    {
      v23 -= 2;
      *(_WORD *)v23 = v5 % 0xA + 48;
      v5 /= 0xAu;
    }
    while ( v5 );
    *(_OWORD *)sourceString_8 = 0LL;
    si128 = 0LL;
    if ( v23 == v54 )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(sourceString_8[0]) = 0;
    }
    else
    {
      std::wstring::_Construct<1,unsigned short *>(sourceString_8, v23, (v54 - v23) >> 1);
    }
    v24 = (const WCHAR *)sourceString_8;
    if ( si128.m128i_i64[1] > 7uLL )
      v24 = sourceString_8[0];
    string = 0LL;
    v25 = -1LL;
    v26 = -1LL;
    do
      ++v26;
    while ( v24[v26] );
    v5 = -1;
    if ( v26 > 0xFFFFFFFF )
      goto LABEL_51;
    if ( (int)v26 + 1 < (unsigned int)v26 )
      goto LABEL_49;
    v27 = WindowsCreateStringReference(v24, v26, &hstringHeader, &string);
    if ( v27 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27, v28, v29);
      goto LABEL_60;
    }
    v11 = (__int64)string;
    v30 = (const WCHAR *)&Src[1];
    if ( sourceString > 7 )
      v30 = (const WCHAR *)Src[1];
    v50 = 0LL;
    do
      ++v25;
    while ( v30[v25] );
    if ( v25 > 0xFFFFFFFF )
      goto LABEL_50;
    if ( (int)v25 + 1 >= (unsigned int)v25 )
      break;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v28, v29);
LABEL_49:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v26, v21);
LABEL_50:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v28, v29);
LABEL_51:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v26, v21);
LABEL_52:
    v39 = Src[1];
    memcpy_0(v20, Src[1], v18);
    memcpy_0(Src[0], v42, 2 * v13);
    *((_WORD *)v4 + v11) = 0;
    std::_Deallocate<16,0>(v39, (const struct std::nothrow_t *)(2 * v12 + 2));
    v13 = 0LL;
  }
  v31 = WindowsCreateStringReference(v30, v25, &v49, &v50);
  if ( v31 < 0 )
  {
LABEL_60:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v31, v32, v33);
    goto LABEL_61;
  }
  v34 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v50, (HSTRING)v11);
  if ( v34 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC65,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v34,
      (int)v42);
  v50 = 0LL;
  string = 0LL;
  if ( si128.m128i_i64[1] > 7uLL )
  {
    v35 = (KeyboardHosting::TabTipAdapter *)(2 * si128.m128i_i64[1] + 2);
    v43 = v35;
    v36 = (WCHAR *)sourceString_8[0];
    v42 = (void *)sourceString_8[0];
    if ( (unsigned __int64)v35 < 0x1000 )
    {
LABEL_42:
      operator delete(v36, v35);
      goto LABEL_43;
    }
LABEL_61:
    std::_Adjust_manually_vector_aligned(&v42, (unsigned __int64 *)&v43);
    v35 = v43;
    v36 = (WCHAR *)v42;
    goto LABEL_42;
  }
LABEL_43:
  if ( sourceString > 7 )
  {
    v37 = (KeyboardHosting::TabTipAdapter *)(2 * sourceString + 2);
    v43 = v37;
    v38 = Src[1];
    v42 = Src[1];
    if ( (unsigned __int64)v37 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v42, (unsigned __int64 *)&v43);
      v37 = v43;
      v38 = v42;
    }
    operator delete(v38, v37);
  }
}
