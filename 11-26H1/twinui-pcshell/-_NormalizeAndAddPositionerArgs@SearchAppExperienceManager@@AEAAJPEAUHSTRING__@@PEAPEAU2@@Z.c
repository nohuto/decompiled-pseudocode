/*
 * XREFs of ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803A48A8
 * Callers:
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A3B70 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1801069F0 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x18017283C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180172954 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x18035DA30 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 *     _alloca_probe @ 0x1806CCB80 (_alloca_probe.c)
 */

__int64 __fastcall SearchAppExperienceManager::_NormalizeAndAddPositionerArgs(
        SearchAppExperienceManager *this,
        HSTRING a2,
        HSTRING *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  PCWSTR StringRawBuffer; // rax
  char *v8; // rbx
  UINT32 v9; // edi
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  HSTRING_HEADER *v12; // rax
  HRESULT v13; // eax
  HSTRING newString; // [rsp+20h] [rbp-E0h] BYREF
  UINT32 length; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING string1; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING Reserved1; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR sourceString[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[4172]; // [rsp+64h] [rbp-9Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10D8h] [rbp+FD8h]

  Reserved1 = a2;
  *a3 = 0LL;
  string1 = 0LL;
  if ( a2 )
  {
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
    v8 = (char *)StringRawBuffer;
    if ( StringRawBuffer && length )
    {
      v9 = length - 1;
      if ( StringRawBuffer[length - 1] == 47 )
      {
        *(_DWORD *)sourceString = 0;
        memset_0(v21, 0, 0x1044uLL);
        v4 = StringCchCopyNW((char *)sourceString, 2084LL, v8, v9);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = 791LL;
          goto LABEL_9;
        }
        Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                               &hstringHeader,
                               sourceString,
                               v10)[1].Reserved.Reserved1;
        v4 = Microsoft::WRL::Wrappers::HString::Set(&string1, &Reserved1);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = 792LL;
          goto LABEL_9;
        }
      }
      else
      {
        v4 = Microsoft::WRL::Wrappers::HString::Set(&string1, &Reserved1);
        v5 = v4;
        if ( v4 < 0 )
        {
          v6 = 796LL;
          goto LABEL_9;
        }
      }
    }
  }
  else
  {
    v4 = Microsoft::WRL::Wrappers::HString::Set(&string1, L"StartMode=MergedHome", 0x14u);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 779LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_18;
    }
  }
  Reserved1 = (HSTRING)L"&Positioner=desktop";
  WindowsDeleteString(0LL);
  newString = 0LL;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&Reserved1, v11);
  v13 = WindowsConcatString(string1, (HSTRING)v12[1].Reserved.Reserved1, &newString);
  v5 = v13;
  if ( v13 >= 0 )
  {
    *a3 = newString;
    newString = 0LL;
    WindowsDeleteString(0LL);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x324,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
    WindowsDeleteString(newString);
  }
  newString = 0LL;
LABEL_18:
  WindowsDeleteString(string1);
  return v5;
}
