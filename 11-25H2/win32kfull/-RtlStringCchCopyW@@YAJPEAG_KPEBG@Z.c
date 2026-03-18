/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?GetCurrentWallpaperSettings@@YAXPEAU_UNICODE_STRING@@PEAUtagWALLPAPERSETTINGS@@@Z @ 0x14012F85C (-GetCurrentWallpaperSettings@@YAXPEAU_UNICODE_STRING@@PEAUtagWALLPAPERSETTINGS@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x14012FB54 (LoadWallpaperFilenameFromRegistry.c)
 *     NtUserShutdownBlockReasonCreate @ 0x140130090 (NtUserShutdownBlockReasonCreate.c)
 *     ?xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z @ 0x1401303C4 (-xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x140130EA8 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     NtUserGetDManipHookInitFunction @ 0x140130FC0 (NtUserGetDManipHookInitFunction.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140131284 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1401CC210 (NtUserShutdownBlockReasonQuery.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x140211020 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     _RegisterDManipHook @ 0x140222070 (_RegisterDManipHook.c)
 *     _UnregisterClass @ 0x140242308 (_UnregisterClass.c)
 *     _RegisterUserApiHook @ 0x140286DBC (_RegisterUserApiHook.c)
 *     _GetWOWClass @ 0x1402880C4 (_GetWOWClass.c)
 *     UserGetHipDeviceInfo @ 0x14028DAE0 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x14028DEC8 (_SetDisplayMapping.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1402919EC (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtUserFindExistingCursorIcon @ 0x140296850 (NtUserFindExistingCursorIcon.c)
 *     NtUserFindWindowEx @ 0x140296B00 (NtUserFindWindowEx.c)
 *     NtUserRegisterWindowMessage @ 0x14029D1D0 (NtUserRegisterWindowMessage.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1402B75AC (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1402B85DC (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140332708 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyW(char *a1, __int64 a2, char *a3)
{
  __int64 v3; // r9
  signed __int64 v4; // r8
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = *(_WORD *)&a1[v4];
      if ( !v5 )
        break;
      *(_WORD *)a1 = v5;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    v6 = (unsigned __int16 *)(a1 - 2);
    if ( a2 )
      v6 = (unsigned __int16 *)a1;
    *v6 = 0;
    result = 2147483653LL;
    if ( a2 )
      return 0LL;
  }
  return result;
}
