/*
 * XREFs of NtUserGetDC @ 0x1401A2020
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     _GetDC @ 0x1400360E0 (_GetDC.c)
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401C9CF0 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  BOOL v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagWND *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 DC; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool HasUILimit; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rcx
  struct HOBJ__ *RectRgnIndirect; // rbx
  __int64 v22; // rcx
  __int64 SessionState; // rax
  __int64 v24; // rdx
  int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // r8d
  __int128 v31; // [rsp+20h] [rbp-38h] BYREF

  v5 = 1;
  v6 = EnterSharedCrit(0LL, 1LL, a3, a4);
  if ( a1 )
  {
    v9 = (struct tagWND *)ValidateHwndEx(a1, 1, 0);
    if ( !v9 )
    {
      DC = 0LL;
      goto LABEL_17;
    }
  }
  else
  {
    v9 = 0LL;
  }
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    HasUILimit = tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v6 + 456), 1u);
LABEL_9:
    if ( HasUILimit && !v9 )
    {
      v19 = *(__int64 **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v17, v16) + 61) + 8LL) + 24LL);
      if ( v19 )
        v20 = *v19;
      else
        v20 = 0LL;
      v5 = ValidateHwndEx(v20, 1, 0) != 0;
    }
    goto LABEL_15;
  }
  v18 = PtiCurrent(v14, v13);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v18 + 130, 0, 0) & 0x20000000) != 0 )
  {
    v17 = *((_QWORD *)PtiCurrent((__int64)v18, v16) + 57);
    HasUILimit = *(_BYTE *)(*(_QWORD *)(v17 + 752) + 32LL) & 1;
    goto LABEL_9;
  }
LABEL_15:
  DC = GetDC(v9, v16);
  if ( !v5 )
  {
    v31 = 0LL;
    RectRgnIndirect = GreCreateRectRgnIndirect((int *)&v31);
    SessionState = W32GetSessionState(v22);
    GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v24, v25);
    GreSelectVisRgn(DC, (HRGN)RectRgnIndirect, 1);
    v27 = W32GetSessionState(v26);
    GrepUnlockVisRgn(*(struct _ERESOURCE ***)(v27 + 88), v28, v29);
  }
LABEL_17:
  UserSessionSwitchLeaveCritWithNonPaged(v8, v7, v10, v11);
  return DC;
}
