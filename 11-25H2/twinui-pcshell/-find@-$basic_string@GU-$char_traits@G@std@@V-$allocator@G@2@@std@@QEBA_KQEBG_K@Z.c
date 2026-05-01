/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180154950
 * Callers:
 *     ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180154780 (-OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180239D80 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1802488B0 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x1802509D0 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 *     _lambda_ff3af0abcf4100822182f80ac5bd56ae_::operator() @ 0x18045ED54 (_lambda_ff3af0abcf4100822182f80ac5bd56ae_--operator().c)
 *     GetColorFromColorString @ 0x180461094 (GetColorFromColorString.c)
 *     ?RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ @ 0x180562740 (-RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ.c)
 *     ?IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Management@Windows@winrt@@@Z @ 0x1805B03C4 (-IsFileSystemSupported@LockScreenWidgetPackageHelperBase@@IEAA_NUPackageVolume@Deployment@Manage.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180600690 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::find(char *a1, _WORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int16 v7; // di
  char *v8; // rsi
  char *i; // r8
  char *v10; // rdx
  __int64 v11; // rax
  char *v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r10
  _WORD *j; // rdx

  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    a1 = *(char **)a1;
  if ( v4 > v5 )
    return -1LL;
  v6 = v5 - v4;
  if ( a3 > v6 )
    return -1LL;
  if ( v4 )
  {
    v7 = *a2;
    v8 = &a1[2 * v6 + 2];
    for ( i = &a1[2 * a3]; ; i = v12 + 2 )
    {
      v10 = i;
      v11 = v8 - i;
      v12 = 0LL;
      v13 = v11 >> 1;
      if ( v13 )
      {
        while ( *(_WORD *)v10 != v7 )
        {
          if ( v13 == 1 )
            goto LABEL_12;
          --v13;
          v10 += 2;
        }
        v12 = v10;
      }
LABEL_12:
      if ( !v12 )
        break;
      v14 = v4;
      for ( j = a2; ; ++j )
      {
        if ( !v14 )
          return (v12 - a1) >> 1;
        if ( *(_WORD *)((char *)j + v12 - (char *)a2) != *j )
          break;
        --v14;
      }
    }
    return -1LL;
  }
  return a3;
}
