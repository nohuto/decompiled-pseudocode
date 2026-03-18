/*
 * XREFs of DrvSetDisplayConfigValidateParams @ 0x1401F81D4
 * Callers:
 *     DrvFunctionalizeDisplayConfig @ 0x14002E708 (DrvFunctionalizeDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x14002E4CC (-GetTargetVirtualization@@YAJU_LUID@@IPEAE11PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT.c)
 *     DispBrokerGetCurrentMode @ 0x14007D610 (DispBrokerGetCurrentMode.c)
 *     Gre_Base_Globals @ 0x1400E6E60 (Gre_Base_Globals.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x140177920 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x140185084 (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x14018A9C8 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?IsPathVirtualFlagCloneCompatible@@YAEEE@Z @ 0x1401C6D3C (-IsPathVirtualFlagCloneCompatible@@YAEEE@Z.c)
 *     _stricmp @ 0x1401C7920 (_stricmp.c)
 */

__int64 __fastcall DrvSetDisplayConfigValidateParams(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rcx
  int v8; // [rsp+40h] [rbp-88h]
  int TargetVirtualization; // [rsp+40h] [rbp-88h]
  _QWORD *v10; // [rsp+48h] [rbp-80h]
  unsigned __int8 v11[4]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int j; // [rsp+54h] [rbp-74h]
  unsigned __int8 v13; // [rsp+58h] [rbp-70h] BYREF
  char v14; // [rsp+59h] [rbp-6Fh]
  unsigned int k; // [rsp+5Ch] [rbp-6Ch]
  unsigned __int8 v16[4]; // [rsp+60h] [rbp-68h] BYREF
  unsigned int i; // [rsp+64h] [rbp-64h]
  int v18; // [rsp+68h] [rbp-60h]
  int v19; // [rsp+6Ch] [rbp-5Ch]
  BOOL v20; // [rsp+70h] [rbp-58h]
  int v21; // [rsp+74h] [rbp-54h]
  int v22; // [rsp+78h] [rbp-50h]
  int v23; // [rsp+7Ch] [rbp-4Ch]
  char *Str1; // [rsp+80h] [rbp-48h]
  unsigned __int64 v25; // [rsp+88h] [rbp-40h]
  _QWORD *v26; // [rsp+98h] [rbp-30h]
  unsigned __int64 v27; // [rsp+A0h] [rbp-28h]
  unsigned int v28; // [rsp+D0h] [rbp+8h]
  unsigned int v30; // [rsp+E0h] [rbp+18h]
  int v31; // [rsp+E8h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v28 = a1;
  Str1 = 0LL;
  if ( a5 )
  {
    if ( (a3 & 0x80) != 0 && DrvIsTemporarySettingChangeDisabled() )
    {
      WdLogSingleEntry1(2LL, -1073741790LL);
      WdLogGlobalForLineNumber = 12918;
      return 3221225506LL;
    }
    if ( (v30 & 0x200) != 0 && DrvIsPermanentSettingChangesDisabled() )
    {
      WdLogSingleEntry1(2LL, -1073741790LL);
      WdLogGlobalForLineNumber = 12930;
      return 3221225506LL;
    }
  }
  if ( (v30 & 0xC0000000) != 0 )
  {
    if ( (v30 & 0x80) != 0 )
    {
      if ( v30 == 1073741952 || v30 == -2147483520 )
      {
        CurrentProcess = PsGetCurrentProcess(a1);
        Str1 = (char *)PsGetProcessImageFileName(CurrentProcess);
        if ( *(_DWORD *)(Gre_Base_Globals(v7) + 1348) || Str1 && !stricmp(Str1, "explorer.exe") )
        {
          if ( v28 || a2 )
          {
            WdLogSingleEntry1(2LL, -1073741811LL);
            WdLogGlobalForLineNumber = 12989;
            return 3221225485LL;
          }
          else
          {
            WdLogSingleEntry1(5LL, v30);
            WdLogGlobalForLineNumber = 12997;
            return 0LL;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v30, -1073741581LL);
          WdLogGlobalForLineNumber = 12978;
          return 3221225715LL;
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, v30, -1073741581LL);
        WdLogGlobalForLineNumber = 12963;
        return 3221225715LL;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v30, -1073741581LL);
      WdLogGlobalForLineNumber = 12951;
      return 3221225715LL;
    }
  }
  else if ( (v31 & 1) != 0 )
  {
    if ( (v31 & 0xFFFFFEBF) == 1 && v30 == 2191 && !v28 )
    {
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(1LL, v30, -1073741581LL);
      WdLogGlobalForLineNumber = 13018;
      return 3221225715LL;
    }
  }
  else
  {
    if ( (v31 & 0x10) != 0 && (unsigned int)DispBrokerGetCurrentMode(a1, (int)a2, a3) != 3 && (v31 & 8) == 0 )
    {
      WdLogSingleEntry2(1LL, v30, -1073741581LL);
      WdLogGlobalForLineNumber = 13042;
      return 3221225715LL;
    }
    if ( (v31 & 8) != 0 && v28 != 1 )
    {
      WdLogSingleEntry3(1LL, v28);
      WdLogGlobalForLineNumber = 13055;
      return 3221225715LL;
    }
    if ( (v31 & 8) != 0 && (v30 & 0x20) == 0 )
    {
      WdLogSingleEntry2(1LL, v30, -1073741581LL);
      WdLogGlobalForLineNumber = 13067;
      return 3221225715LL;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession(a1, (__int64)a2, a3, a4) && (v30 & 0x88F) != 0x88F )
    {
      WdLogSingleEntry2(2LL, v30, -1073741790LL);
      WdLogGlobalForLineNumber = 13088;
      return 3221225506LL;
    }
    if ( (v30 & 0x10000) != 0 )
    {
      if ( (v30 & 0xC7FC4000) != 0 )
      {
        WdLogSingleEntry2(2LL, v30, -1073741581LL);
        WdLogGlobalForLineNumber = 13099;
        return 3221225715LL;
      }
      if ( (v30 & 0x1F) != 0 || (v30 & 0x200) != 0 )
      {
        WdLogSingleEntry1(2LL, -1073741637LL);
        WdLogGlobalForLineNumber = 13107;
        return 3221225659LL;
      }
    }
    else if ( (v30 & 0xFFFD4000) != 0 )
    {
      WdLogSingleEntry2(2LL, v30, -1073741581LL);
      WdLogGlobalForLineNumber = 13114;
      return 3221225715LL;
    }
    if ( (v30 & 0xC0) == 0 || (v30 & 0xC0) == 0xC0 )
    {
      WdLogSingleEntry2(2LL, v30, -1073741581LL);
      WdLogGlobalForLineNumber = 13123;
      return 3221225715LL;
    }
    if ( (v30 & 0x180) == 0x100 )
    {
      WdLogSingleEntry2(2LL, v30, -1073741581LL);
      WdLogGlobalForLineNumber = 13131;
      return 3221225715LL;
    }
    if ( (v30 & 0x1000) != 0 && (v30 & 0xA0) != 0xA0 )
    {
      WdLogSingleEntry2(2LL, v30, -1073741581LL);
      WdLogGlobalForLineNumber = 13140;
      return 3221225715LL;
    }
    if ( (v30 & 0x2000) != 0 && (v30 & 0x10) == 0 )
    {
      WdLogSingleEntry2(2LL, v30, -1073741581LL);
      WdLogGlobalForLineNumber = 13148;
      return 3221225715LL;
    }
    if ( (v30 & 0x1F) != 0 )
    {
      if ( (v30 & 0x400) != 0 )
      {
        WdLogSingleEntry2(2LL, v30, -1073741581LL);
        WdLogGlobalForLineNumber = 13162;
        return 3221225715LL;
      }
      if ( (v30 & 0x20) != 0 )
      {
        WdLogSingleEntry2(2LL, v30, -1073741581LL);
        WdLogGlobalForLineNumber = 13170;
        return 3221225715LL;
      }
      if ( (v30 & 0x200) != 0 )
      {
        WdLogSingleEntry2(2LL, v30, -1073741581LL);
        WdLogGlobalForLineNumber = 13178;
        return 3221225715LL;
      }
      if ( (v30 & 0x10) != 0 )
      {
        if ( (v30 & 0x800) != 0 )
        {
          WdLogSingleEntry2(2LL, v30, -1073741581LL);
          WdLogGlobalForLineNumber = 13192;
          return 3221225715LL;
        }
        if ( !a2 )
        {
          WdLogSingleEntry2(2LL, v30, -1073741584LL);
          WdLogGlobalForLineNumber = 13200;
          return 3221225712LL;
        }
        if ( !v28 )
        {
          WdLogSingleEntry2(2LL, v30, -1073741585LL);
          WdLogGlobalForLineNumber = 13206;
          return 3221225711LL;
        }
        for ( i = 0; i < v28; ++i )
        {
          v26 = (_QWORD *)((char *)a2 + 216 * i);
          if ( (*v26 & 0x7FF30FFFFFFFFFFFLL) != 0 )
          {
            WdLogSingleEntry1(2LL, i);
            WdLogGlobalForLineNumber = 13217;
            return 3221225714LL;
          }
        }
      }
      else
      {
        if ( a2 )
        {
          WdLogSingleEntry2(2LL, v30, -1073741584LL);
          WdLogGlobalForLineNumber = 13228;
          return 3221225712LL;
        }
        if ( v28 )
        {
          WdLogSingleEntry2(2LL, v30, -1073741585LL);
          WdLogGlobalForLineNumber = 13234;
          return 3221225711LL;
        }
      }
    }
    else
    {
      if ( (v30 & 0x20) == 0 )
      {
        WdLogSingleEntry2(2LL, v30, -1073741581LL);
        WdLogGlobalForLineNumber = 13245;
        return 3221225715LL;
      }
      if ( (v30 & 0x800) != 0 )
      {
        WdLogSingleEntry2(2LL, v30, -1073741581LL);
        WdLogGlobalForLineNumber = 13253;
        return 3221225715LL;
      }
      if ( (v30 & 0x10000) == 0 )
      {
        if ( !a2 )
        {
          WdLogSingleEntry2(2LL, v30, -1073741584LL);
          WdLogGlobalForLineNumber = 13263;
          return 3221225712LL;
        }
        if ( !v28 )
        {
          WdLogSingleEntry2(2LL, v30, -1073741585LL);
          WdLogGlobalForLineNumber = 13269;
          return 3221225711LL;
        }
      }
      if ( v28 )
      {
        v8 = EnforceSDCCloneSourceIndexCoherency(v28, a2);
        if ( v8 < 0 )
        {
          WdLogSingleEntry1(2LL, v8);
          WdLogGlobalForLineNumber = 13279;
          return (unsigned int)v8;
        }
        v14 = 0;
        v25 = (v30 & 0x10000) != 0 ? 0x80ACF19001830F8FuLL : 0x802CF19001830F8FuLL;
        v27 = v25;
        for ( j = 0; j < v28; ++j )
        {
          v10 = (_QWORD *)((char *)a2 + 216 * j);
          v13 = 0;
          v11[0] = 0;
          v16[0] = 0;
          if ( (~v27 & *v10) != 0 )
          {
            WdLogSingleEntry1(2LL, *v10);
            WdLogGlobalForLineNumber = 13296;
            return 3221225485LL;
          }
          if ( (v10[1] & 0xFFFFFE7FFE7DF470uLL) != 0 || (*v10 & v10[1]) != v10[1] )
          {
            WdLogSingleEntry2(2LL, *v10, v10[1]);
            WdLogGlobalForLineNumber = 13304;
            return 3221225485LL;
          }
          if ( (__int64)*v10 < 0 )
          {
            if ( (*v10 & 0x8004700000000000uLL) != 0x8004700000000000uLL )
            {
              WdLogSingleEntry1(2LL, *v10);
              WdLogGlobalForLineNumber = 13314;
              return 3221225485LL;
            }
            TargetVirtualization = GetTargetVirtualization(
                                     (struct _LUID)v10[2],
                                     *((unsigned int *)v10 + 7),
                                     &v13,
                                     v11,
                                     v16,
                                     0LL,
                                     0LL,
                                     0LL);
            if ( TargetVirtualization < 0 )
            {
              WdLogSingleEntry1(2LL, TargetVirtualization);
              WdLogGlobalForLineNumber = 13330;
              return 3221225712LL;
            }
            if ( (*v10 & 0x8000000000000LL) != 0 )
            {
              v20 = v13 == 0;
              v23 = *((unsigned __int8 *)v10 + 101);
              v19 = v11[0] ? 0 : 2;
              v22 = v19 | v20;
              v21 = v16[0] ? 0 : 4;
              if ( v23 != (v21 | v22) )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 13341;
                return 3221225485LL;
              }
            }
            if ( (*v10 & 0x800LL) != 0 )
            {
              if ( !*((_DWORD *)v10 + 29) && !*((_DWORD *)v10 + 30) )
                v14 = 1;
            }
            else
            {
              v14 = 1;
            }
            for ( k = 0; k < j && ((__int64)*v10 >= 0 || *((_DWORD *)a2 + 54 * k + 39) != *((_DWORD *)v10 + 39)); ++k )
              ;
            if ( k < j )
            {
              if ( (*((_QWORD *)a2 + 27 * k) & 0x8000000000000LL) != (*v10 & 0x8000000000000LL)
                || (_mm_lfence(),
                    !IsPathVirtualFlagCloneCompatible(*((_BYTE *)a2 + 216 * k + 101), *((_BYTE *)v10 + 101))) )
              {
                WdLogSingleEntry3(2LL, k);
                WdLogGlobalForLineNumber = 13380;
                return 3221225714LL;
              }
              if ( v11[0]
                && (*((_DWORD *)a2 + 54 * k + 4) != *((_DWORD *)v10 + 4)
                 || *((_DWORD *)a2 + 54 * k + 5) != *((_DWORD *)v10 + 5)) )
              {
                WdLogSingleEntry3(2LL, k);
                WdLogGlobalForLineNumber = 13392;
                return 3221225714LL;
              }
            }
            if ( (*v10 & 0x100LL) != 0 && (*v10 & 0x18000000000LL) != 0 )
            {
              WdLogSingleEntry1(2LL, j);
              WdLogGlobalForLineNumber = 13407;
              return 3221225714LL;
            }
            if ( (*v10 & 0x87LL) != 0 )
            {
              if ( (*v10 & 4LL) != 0 )
              {
                v18 = *((_DWORD *)v10 + 19);
                if ( v18 != 1 && v18 != 2 && v18 != 3 )
                {
                  WdLogSingleEntry2(2LL, *((int *)v10 + 19), -1073741582LL);
                  WdLogGlobalForLineNumber = 13436;
                  return 3221225714LL;
                }
              }
              if ( (*v10 & 2LL) != 0 && (!*((_DWORD *)v10 + 12) || !*((_DWORD *)v10 + 13)) )
              {
                WdLogSingleEntry4(2LL, *((unsigned int *)v10 + 12), *((unsigned int *)v10 + 13), j, -1073741582LL);
                WdLogGlobalForLineNumber = 13446;
                return 3221225714LL;
              }
            }
            if ( (*v10 & 0x1000000LL) != 0 )
            {
              if ( !*((_DWORD *)v10 + 49) || !*((_DWORD *)v10 + 50) )
              {
                WdLogSingleEntry4(2LL, *((unsigned int *)v10 + 49), *((unsigned int *)v10 + 50), j, -1073741582LL);
                WdLogGlobalForLineNumber = 13457;
                return 3221225714LL;
              }
              if ( !*((_DWORD *)v10 + 53) )
              {
                WdLogSingleEntry3(2LL, *((unsigned int *)v10 + 53));
                WdLogGlobalForLineNumber = 13464;
                return 3221225714LL;
              }
            }
            if ( (*v10 & 0x800000LL) != 0 && (*v10 & 0x1000000000LL) == 0 )
            {
              if ( v13 && v11[0] )
              {
                WdLogSingleEntry2(2LL, j, -1073741584LL);
                WdLogGlobalForLineNumber = 13478;
                return 3221225712LL;
              }
              if ( (*v10 & 0x100LL) == 0 )
              {
                WdLogSingleEntry2(2LL, j, -1073741584LL);
                WdLogGlobalForLineNumber = 13486;
                return 3221225712LL;
              }
              if ( *((_DWORD *)v10 + 36) >= *((_DWORD *)v10 + 38) || *((_DWORD *)v10 + 35) >= *((_DWORD *)v10 + 37) )
              {
                WdLogSingleEntry2(2LL, j, -1073741582LL);
                WdLogGlobalForLineNumber = 13495;
                return 3221225714LL;
              }
              if ( *((int *)v10 + 36) < 0
                || *((int *)v10 + 35) < 0
                || *((_DWORD *)v10 + 38) > *((_DWORD *)v10 + 23)
                || *((_DWORD *)v10 + 37) > *((_DWORD *)v10 + 22) )
              {
                WdLogSingleEntry2(2LL, j, -1073741582LL);
                WdLogGlobalForLineNumber = 13506;
                return 3221225714LL;
              }
            }
          }
        }
        if ( !v14 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 13517;
          return 3221225485LL;
        }
      }
    }
    return 0LL;
  }
}
