/*
 * XREFs of ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140059094
 * Callers:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140058924 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z @ 0x140119A1C (-ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x14017346C (DwmAsyncShellWindowChange.c)
 *     IsMotherDesktopWindow @ 0x14018FFC0 (IsMotherDesktopWindow.c)
 *     FreeWindowGCData @ 0x14019F0B0 (FreeWindowGCData.c)
 *     _DeregisterShellHookWindow @ 0x14019F180 (_DeregisterShellHookWindow.c)
 *     FreeWindowMessageFilter @ 0x14019F20C (FreeWindowMessageFilter.c)
 *     UpdatePointerRedirIsAlive @ 0x1401AAB4C (UpdatePointerRedirIsAlive.c)
 *     _FindActivationFilterWindow @ 0x1401B3B0C (_FindActivationFilterWindow.c)
 *     CleanupIAMAccess @ 0x140219550 (CleanupIAMAccess.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x140227D84 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x14022E674 (-xxxDeferredDesktopRotation@@YA_KXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14027A230 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x140281BE4 (Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1402B5B04 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1402B5EDC (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline @ 0x1402B605C (Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline @ 0x1402B6158 (Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall xxxFreeWindow_Phase1(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  BOOL v4; // ebp
  int IsEnabledDeviceUsageNoInline; // eax
  struct tagWND *v6; // r8
  struct tagWND *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  void *v10; // rax
  struct tagWND **v11; // rax
  struct tagWND **v12; // rax
  struct tagWND **v13; // rax
  struct tagWND **v14; // rcx
  __int64 v15; // rax
  char *ActivationFilterWindow; // rax
  char *v17; // rbx
  _QWORD *v18; // rcx
  void **v19; // rax

  v4 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) >= 0 && !(unsigned int)IsMotherDesktopWindow() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4793LL);
  if ( (unsigned int)Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline() )
    xxxFW_DestroyIMEWindowIfRequired(a1, a2);
  IsEnabledDeviceUsageNoInline = Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline();
  v7 = (struct tagWND *)*((_QWORD *)a1 + 3);
  if ( v7 )
  {
    if ( IsEnabledDeviceUsageNoInline )
    {
      v4 = CleanupShellRelatedData(a1);
      goto LABEL_25;
    }
    if ( a1 == *(struct tagWND **)(*((_QWORD *)v7 + 1) + 168LL) )
    {
      CleanupIAMAccess(*((struct tagDESKTOP **)a1 + 3));
      v8 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
      *(_QWORD *)(*(_QWORD *)v8 + 24LL) = 0LL;
      HMAssignmentUnlock(v8 + 168);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v10 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL), v9);
        DwmAsyncShellWindowChange(v10);
      }
      v7 = (struct tagWND *)*((_QWORD *)a1 + 3);
      if ( (*(_DWORD *)(**((_QWORD **)v7 + 1) + 64LL) & 2) != 0 )
        v4 = 1;
    }
    v11 = (struct tagWND **)*((_QWORD *)v7 + 1);
    if ( v11[23] == a1 )
    {
      *((_QWORD *)*v11 + 4) = 0LL;
      HMAssignmentUnlock(v11 + 23);
    }
    v12 = *(struct tagWND ***)(*((_QWORD *)a1 + 3) + 8LL);
    if ( v12[24] == a1 )
    {
      *((_QWORD *)*v12 + 5) = 0LL;
      HMAssignmentUnlock(v12 + 24);
    }
    v13 = (struct tagWND **)*((_QWORD *)a1 + 3);
    v14 = v13 + 38;
    if ( v13[38] != a1 )
    {
      if ( v13[41] == a1 )
      {
        ShellWindowManagement::SetWindow(*((ShellWindowManagement **)a1 + 3), 0LL, v6);
LABEL_21:
        UpdatePointerRedirIsAlive(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x40) != 0 )
          DeregisterShellHookWindow(a1);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x20) != 0 )
        {
          v15 = **(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL);
          --*(_DWORD *)(v15 + 48);
          SetOrClrWF(0, a1, 0x20u, 1);
        }
        goto LABEL_25;
      }
      v14 = v13 + 37;
      if ( a1 != v13[37] )
      {
        ActivationFilterWindow = (char *)FindActivationFilterWindow(a1);
        v17 = ActivationFilterWindow;
        if ( ActivationFilterWindow )
        {
          v18 = *(_QWORD **)ActivationFilterWindow;
          if ( *(char **)(*(_QWORD *)ActivationFilterWindow + 8LL) != ActivationFilterWindow
            || (v19 = (void **)*((_QWORD *)ActivationFilterWindow + 1), *v19 != v17) )
          {
            __fastfail(3u);
          }
          *v19 = v18;
          v18[1] = v19;
          HMAssignmentUnlock(v17 + 16);
          Win32FreePool(v17);
        }
        goto LABEL_21;
      }
    }
    HMAssignmentUnlock(v14);
    goto LABEL_21;
  }
LABEL_25:
  if ( *((_DWORD *)a1 + 65) )
    CleanupInputDelegation(a1);
  InputTransform::ClearTransforms(a1, v7);
  FreeWindowMessageFilter(a1);
  FreeWindowGCData(a1);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 && a2 != *((struct tagTHREADINFO **)a1 + 2) )
    HMChangeOwnerThread(a1, a2);
  if ( v4 )
    xxxDeferredDesktopRotation();
  if ( !(unsigned int)Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline()
    && (*((_DWORD *)a1 + 95) & 0x800) != 0 )
  {
    if ( (unsigned int)Feature_AssertionFixes__private_IsEnabledDeviceUsageNoInline() )
      *((_DWORD *)a1 + 95) &= ~0x800u;
    if ( !*((_WORD *)a2 + 632) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4908LL);
    --*((_WORD *)a2 + 632);
  }
}
