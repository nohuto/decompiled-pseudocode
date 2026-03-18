/*
 * XREFs of UserGetDesktopDC @ 0x140098B10
 * Callers:
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x140041660 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     NtGdiOpenDCW @ 0x140097540 (NtGdiOpenDCW.c)
 *     NtGdiCreateMetafileDC @ 0x1401352D0 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ValidateHwndEx @ 0x1400BAF40 (ValidateHwndEx.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1960 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1A28 (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401AC114 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 */

HDC __fastcall UserGetDesktopDC(unsigned int a1, int a2, int a3)
{
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  HDEV v9; // r15
  HDC v10; // rdi
  bool HasUILimit; // al
  __int64 *v12; // rcx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  struct _KPROCESS *v15; // rbx
  __int64 v16; // rcx
  HDC DisplayDC; // rax
  char v19; // [rsp+50h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  v6 = PtiCurrent();
  v9 = *(HDEV *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 56968) + 48LL);
  v10 = 0LL;
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    HasUILimit = tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v6 + 58), 1u);
  }
  else if ( (_InterlockedCompareExchange((volatile signed __int32 *)v6 + 132, 0, 0) & 0x20000000) != 0 )
  {
    HasUILimit = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v6 + 58) + 752LL) + 24LL) & 1;
  }
  else
  {
    HasUILimit = 0;
  }
  if ( !a3
    || a1 == 2
    || !HasUILimit
    || ((v12 = *(__int64 **)(*(_QWORD *)(*((_QWORD *)v6 + 62) + 8LL) + 24LL)) != 0LL ? (v13 = *v12) : (v13 = 0LL),
        ValidateHwndEx(v13, 1LL)) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( a1
      || PsIsSystemThread(CurrentThread)
      || (v15 = *(struct _KPROCESS **)(W32GetUserGdiSessionState() + 40), PsGetThreadProcess(CurrentThread) == v15) )
    {
      LOBYTE(v10) = a2 != 0;
      DisplayDC = GreCreateDisplayDC(v9, a1, (int)v10);
      goto LABEL_19;
    }
    v16 = *((_QWORD *)PtiCurrent() + 62);
    if ( v16 )
    {
      DisplayDC = (HDC)GetDCEx(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 24LL), 0LL, 2155872259LL);
LABEL_19:
      v10 = DisplayDC;
    }
  }
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  return v10;
}
