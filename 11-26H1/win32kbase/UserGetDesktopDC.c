/*
 * XREFs of UserGetDesktopDC @ 0x14000F79C
 * Callers:
 *     NtGdiOpenDCW @ 0x140010610 (NtGdiOpenDCW.c)
 *     NtGdiCreateMetafileDC @ 0x14016F900 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140111814 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401C9CF0 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, __int64 a2, int a3)
{
  struct tagTHREADINFO *v5; // rbx
  HDEV v6; // r14
  bool HasUILimit; // al
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *v12; // rbx
  __int64 v13; // rcx
  __int64 DisplayDC; // rax
  char v16; // [rsp+50h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  v5 = PtiCurrent();
  v6 = *(HDEV *)(*(_QWORD *)(W32GetUserSessionState() + 56968) + 40LL);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    HasUILimit = tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v5 + 57), 1u);
  }
  else if ( (_InterlockedCompareExchange((volatile signed __int32 *)v5 + 130, 0, 0) & 0x20000000) != 0 )
  {
    HasUILimit = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v5 + 57) + 752LL) + 32LL) & 1;
  }
  else
  {
    HasUILimit = 0;
  }
  if ( a3 && a1 != 2 && HasUILimit )
  {
    v8 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)v5 + 61) + 8LL) + 24LL);
    v9 = v8 ? *v8 : 0LL;
    if ( !ValidateHwndEx(v9, 1LL) )
      goto LABEL_13;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1
    || PsIsSystemThread(CurrentThread)
    || (v12 = *(struct _KPROCESS **)(W32GetUserGdiSessionState() + 40), PsGetThreadProcess(CurrentThread) == v12) )
  {
    DisplayDC = GreCreateDisplayDC(v6, a1);
  }
  else
  {
    v13 = *((_QWORD *)PtiCurrent() + 61);
    if ( !v13 )
    {
LABEL_13:
      v10 = 0LL;
      goto LABEL_21;
    }
    DisplayDC = GetDCEx(*(struct tagWND **)(*(_QWORD *)(v13 + 8) + 24LL), 0LL);
  }
  v10 = DisplayDC;
LABEL_21:
  if ( !v16 )
    UserSessionSwitchLeaveCritWithNonPaged();
  return v10;
}
