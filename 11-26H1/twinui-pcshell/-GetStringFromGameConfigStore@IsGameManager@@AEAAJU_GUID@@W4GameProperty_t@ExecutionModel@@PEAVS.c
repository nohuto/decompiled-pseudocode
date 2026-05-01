/*
 * XREFs of ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x18004CD10
 * Callers:
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x18004D490 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 *     ?GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x18004E1A0 (-GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z.c)
 *     ?GetTitleIdFromProcessId@IsGameManager@@UEAAJKPEAVString@Internal@Windows@@@Z @ 0x180316190 (-GetTitleIdFromProcessId@IsGameManager@@UEAAJKPEAVString@Internal@Windows@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18004D95C (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180127C68 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z @ 0x180185534 (-FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z @ 0x1801B2264 (-Initialize@String@Internal@Windows@@QEAAJPEBGI@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$make_unique_nothrow@$$BY0A@G@wil@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@_K@Z @ 0x180315AEC (--$make_unique_nothrow@$$BY0A@G@wil@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@wistd@.c)
 *     ??4?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x180315B5C (--4-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsGameManager::GetStringFromGameConfigStore(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        Windows::Internal::String *a4)
{
  unsigned __int16 *v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // r8d
  HRESULT v12; // eax
  unsigned int v13; // ebx
  HSTRING v14; // rbx
  HRESULT v15; // eax
  int v16; // eax
  const struct std::nothrow_t *v17; // rdx
  __int64 unique; // rax
  const struct std::nothrow_t *v20; // rdx
  HSTRING v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  __int64 v25; // rdx
  const struct std::nothrow_t *v26; // rdx
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v29[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v31[128]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  memset_0(v31, 0, sizeof(v31));
  v27 = 256;
  v8 = 0LL;
  string = 0LL;
  Windows::Internal::String::Release(a4);
  v9 = *(_QWORD *)(a1 + 16);
  v30 = *a2;
  v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, unsigned __int16 *, int *))(*(_QWORD *)v9 + 64LL))(
          v9,
          &v30,
          a3,
          v31,
          &v27);
  v11 = (unsigned int)v27 >> 1;
  v27 = 2 * ((unsigned int)v27 >> 1);
  if ( v10 == -2147024774 )
  {
    unique = wil::make_unique_nothrow<unsigned short [0]>(v29, v11);
    wistd::unique_ptr<unsigned short [0],wistd::default_delete<unsigned short [0]>>::operator=(&string, unique);
    v21 = v29[0];
    v29[0] = 0LL;
    if ( v21 )
      operator delete(v21, v20);
    v8 = (unsigned __int16 *)string;
    if ( !string )
    {
      v13 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x573,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)0x8007000ELL);
      return v13;
    }
    v22 = *(_QWORD *)(a1 + 16);
    v30 = *a2;
    if ( (*(int (__fastcall **)(__int64, __int128 *, _QWORD, HSTRING, int *))(*(_QWORD *)v22 + 64LL))(
           v22,
           &v30,
           a3,
           string,
           &v27) >= 0 )
    {
      v23 = Windows::Internal::String::Initialize(a4, v8, (unsigned int)v27 >> 1);
      v24 = retaddr;
      if ( v23 < 0 )
      {
        v25 = 1400LL;
LABEL_19:
        wil::details::in1diag3::_Log_Hr(
          v24,
          (void *)v25,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v23);
      }
    }
  }
  else if ( v10 >= 0 )
  {
    v23 = Windows::Internal::String::Initialize(a4, v31, v11);
    v24 = retaddr;
    if ( v23 < 0 )
    {
      v25 = 1405LL;
      goto LABEL_19;
    }
  }
  v29[0] = 0LL;
  string = 0LL;
  v12 = WindowsCreateString(&word_18077AA48, 1u, &string);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x586,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_7:
    if ( v8 )
      operator delete(v8, v17);
    return v13;
  }
  v14 = string;
  *(_QWORD *)&v30 = string;
  WindowsDeleteString(0LL);
  string = 0LL;
  v15 = WindowsTrimStringEnd(*(HSTRING *)a4, v14, &string);
  if ( (int)Windows::Internal::String::FreeAndAssignOnSuccess(v15, string, v29) >= 0 )
  {
    v16 = Windows::Internal::String::Initialize(a4, v29);
    v13 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58A,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v16);
      Windows::Internal::String::~String((Windows::Internal::String *)v29);
      Windows::Internal::String::~String((Windows::Internal::String *)&v30);
      goto LABEL_7;
    }
  }
  Windows::Internal::String::~String((Windows::Internal::String *)v29);
  Windows::Internal::String::~String((Windows::Internal::String *)&v30);
  if ( v8 )
    operator delete(v8, v26);
  return 0LL;
}
