/*
 * XREFs of ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x180111630
 * Callers:
 *     ?GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x180110050 (-GetGameRelated@IsGameManager@@UEAAJKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z.c)
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x180111910 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 *     ?GetTitleIdFromProcessId@IsGameManager@@UEAAJKPEAVString@Internal@Windows@@@Z @ 0x180319CF0 (-GetTitleIdFromProcessId@IsGameManager@@UEAAJKPEAVString@Internal@Windows@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x180111E00 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ?FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z @ 0x18018DD78 (-FreeAndAssignOnSuccess@String@Internal@Windows@@CAJJPEAUHSTRING__@@PEAPEAU4@@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18018EDB8 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z @ 0x1801B8D6C (-Initialize@String@Internal@Windows@@QEAAJPEBGI@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$make_unique_nothrow@$$BY0A@G@wil@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@_K@Z @ 0x180319648 (--$make_unique_nothrow@$$BY0A@G@wil@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@wistd@.c)
 *     ??4?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803196B8 (--4-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsGameManager::GetStringFromGameConfigStore(
        __int64 a1,
        _OWORD *a2,
        unsigned int a3,
        Windows::Internal::String *a4)
{
  unsigned __int16 *v8; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // r8d
  HRESULT v13; // eax
  unsigned int v14; // ebx
  HSTRING v15; // rbx
  HRESULT v16; // eax
  int v17; // eax
  const struct std::nothrow_t *v18; // rdx
  __int64 unique; // rax
  const struct std::nothrow_t *v21; // rdx
  void *v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  __int64 v27; // rdx
  const struct std::nothrow_t *v28; // rdx
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v30; // [rsp+38h] [rbp-C8h] BYREF
  void *v31[2]; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v33[128]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  memset_0(v33, 0, sizeof(v33));
  v29 = 256;
  v8 = 0LL;
  v30 = 0LL;
  Windows::Internal::String::Release(a4);
  v9 = *(__int64 **)(a1 + 16);
  v10 = *v9;
  *(_OWORD *)string = *a2;
  v11 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *, _QWORD, unsigned __int16 *, int *))(v10 + 64))(
          v9,
          string,
          a3,
          v33,
          &v29);
  v12 = (unsigned int)v29 >> 1;
  v29 = 2 * ((unsigned int)v29 >> 1);
  if ( v11 == -2147024774 )
  {
    unique = wil::make_unique_nothrow<unsigned short [0]>(v31, v12);
    wistd::unique_ptr<unsigned short [0],wistd::default_delete<unsigned short [0]>>::operator=(&v30, unique);
    v22 = v31[0];
    v31[0] = 0LL;
    if ( v22 )
      operator delete(v22, v21);
    v8 = (unsigned __int16 *)v30;
    if ( !v30 )
    {
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x573,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)0x8007000ELL);
      return v14;
    }
    v23 = *(__int64 **)(a1 + 16);
    v24 = *v23;
    *(_OWORD *)string = *a2;
    if ( (*(int (__fastcall **)(__int64 *, HSTRING *, _QWORD, HSTRING, int *))(v24 + 64))(v23, string, a3, v30, &v29) >= 0 )
    {
      v25 = Windows::Internal::String::Initialize(a4, v8, (unsigned int)v29 >> 1);
      v26 = retaddr;
      if ( v25 < 0 )
      {
        v27 = 1400LL;
LABEL_19:
        wil::details::in1diag3::_Log_Hr(
          v26,
          (void *)v27,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v25);
      }
    }
  }
  else if ( v11 >= 0 )
  {
    v25 = Windows::Internal::String::Initialize(a4, v33, v12);
    v26 = retaddr;
    if ( v25 < 0 )
    {
      v27 = 1405LL;
      goto LABEL_19;
    }
  }
  v31[0] = 0LL;
  v30 = 0LL;
  string[0] = 0LL;
  v13 = WindowsCreateString(&FLOAT_0_0, 1u, string);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x586,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_7:
    if ( v8 )
      operator delete(v8, v18);
    return v14;
  }
  v15 = string[0];
  v31[0] = string[0];
  WindowsDeleteString(0LL);
  string[0] = 0LL;
  v16 = WindowsTrimStringEnd(*(HSTRING *)a4, v15, string);
  if ( (int)Windows::Internal::String::FreeAndAssignOnSuccess(v16, string[0], &v30) >= 0 )
  {
    v17 = Windows::Internal::String::Initialize(a4, &v30);
    v14 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58A,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v17);
      Windows::Internal::String::~String(&v30);
      Windows::Internal::String::~String((HSTRING *)v31);
      goto LABEL_7;
    }
  }
  Windows::Internal::String::~String(&v30);
  Windows::Internal::String::~String((HSTRING *)v31);
  if ( v8 )
    operator delete(v8, v28);
  return 0LL;
}
