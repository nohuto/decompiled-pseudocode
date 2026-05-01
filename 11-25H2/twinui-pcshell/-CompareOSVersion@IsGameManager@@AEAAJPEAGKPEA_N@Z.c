/*
 * XREFs of ?CompareOSVersion@IsGameManager@@AEAAJPEAGKPEA_N@Z @ 0x18031972C
 * Callers:
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1800EDA28 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 *     ?IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z @ 0x180319D78 (-IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

__int64 __fastcall IsGameManager::CompareOSVersion(
        IsGameManager *this,
        unsigned __int16 *a2,
        unsigned int a3,
        bool *a4)
{
  DWORD v6; // r14d
  ULONGLONG v8; // r9
  DWORD v9; // esi
  unsigned int v10; // edi
  unsigned int v11; // ebx
  int v12; // edx
  DWORD v13; // edx
  __int64 v14; // rdx
  struct _OSVERSIONINFOEXW VersionInformation; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  VersionInformation.dwOSVersionInfoSize = 284;
  *a4 = 0;
  v6 = 0;
  *(_OWORD *)&VersionInformation.dwMajorVersion = 0LL;
  memset_0(VersionInformation.szCSDVersion, 0, sizeof(VersionInformation.szCSDVersion));
  v8 = 0LL;
  *(_QWORD *)&VersionInformation.wServicePackMajor = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  while ( v10 < a3 )
  {
    v12 = a2[v10];
    if ( v12 == 46 || v10 == a3 - 1 )
    {
      if ( v11 >= 3 )
      {
        v14 = 2395LL;
        goto LABEL_19;
      }
      if ( !v10 )
      {
        v14 = 2396LL;
        goto LABEL_19;
      }
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          VersionInformation.dwMinorVersion = v6;
          v9 |= 1u;
          v13 = 1;
        }
        else
        {
          VersionInformation.dwBuildNumber = v6;
          v13 = 4;
          v9 |= 4u;
        }
      }
      else
      {
        VersionInformation.dwMajorVersion = v6;
        v13 = 2;
        v9 |= 2u;
      }
      v8 = VerSetConditionMask(v8, v13, 3u);
      ++v11;
      v6 = 0;
    }
    else
    {
      if ( (unsigned __int16)(v12 - 48) > 9u )
      {
        v14 = 2422LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)0x8000FFFFLL);
        return 2147549183LL;
      }
      v6 = v12 + 2 * (5 * v6 - 24);
    }
    ++v10;
  }
  *a4 = VerifyVersionInfoW(&VersionInformation, v9, v8);
  return 0LL;
}
