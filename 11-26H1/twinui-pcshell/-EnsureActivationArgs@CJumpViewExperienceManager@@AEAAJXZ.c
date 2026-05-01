/*
 * XREFs of ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x180171490
 * Callers:
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18038E1A0 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800334F0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180033DCC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x18017283C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18017290C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@@Z @ 0x18038BFAC (--$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@-$basic_string@GU-$char_t.c)
 *     ?_Become_small@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18038EB14 (-_Become_small@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CJumpViewExperienceManager::EnsureActivationArgs(HSTRING *this)
{
  WCHAR *StringRawBuffer; // rsi
  unsigned __int64 v3; // rdx
  __int64 v4; // rbx
  const unsigned __int16 *v5; // rdx
  int v6; // eax
  int v7; // eax
  UINT32 length; // [rsp+20h] [rbp-48h] BYREF
  HSTRING string; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int16 *Src[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v12[2]; // [rsp+40h] [rbp-28h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  length = 0;
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(this[45], &length);
  std::wstring::wstring((__int64)Src);
  v3 = length + 43;
  v4 = *(_QWORD *)v12;
  if ( *(_QWORD *)v12 <= v3 && v13 != v3 )
  {
    if ( v13 >= v3 )
    {
      if ( length + 43 <= 7 && v13 > 7 )
        std::wstring::_Become_small(Src);
    }
    else
    {
      std::wstring::_Reallocate_grow_by<_lambda_7f96eb1dcf99da5daec8c2467d2d5499_,>(Src);
      *(_QWORD *)v12 = v4;
    }
  }
  std::wstring::append(Src, (void *)L"Windows.Internal.ShellExperience.JumpView", 0x29uLL);
  std::wstring::append((__int64 *)Src, 1uLL, 0x20u);
  std::wstring::append(Src, StringRawBuffer, length);
  string = 0LL;
  v5 = (const unsigned __int16 *)Src;
  if ( v13 > 7 )
    v5 = Src[0];
  v6 = Microsoft::WRL::Wrappers::HString::Set((Microsoft::WRL::Wrappers::HString *)&string, v5, v12[0]);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x453,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      length);
  v7 = CSingleViewShellExperience::SetArgs((CSingleViewShellExperience *)(this + 19), string);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x454,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v7,
      length);
  WindowsDeleteString(string);
  string = 0LL;
  std::wstring::_Tidy_deallocate(Src);
  return 0LL;
}
