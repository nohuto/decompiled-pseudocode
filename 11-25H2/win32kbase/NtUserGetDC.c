/*
 * XREFs of NtUserGetDC @ 0x14016FF60
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     GreUnlockVisRgn @ 0x140045BA0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140045F80 (GreLockVisRgn.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreSelectVisRgnShared @ 0x140089820 (GreSelectVisRgnShared.c)
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetDC @ 0x1400A24A0 (_GetDC.c)
 *     ValidateHwndEx @ 0x1400BAF40 (ValidateHwndEx.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401AC114 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

HDC __fastcall NtUserGetDC(__int64 a1)
{
  BOOL v2; // esi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdi
  HDC DC; // rdi
  bool HasUILimit; // al
  __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 RectRgnIndirect; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF

  v2 = 1;
  v3 = EnterSharedCrit(0, 1u);
  if ( a1 )
  {
    v5 = ValidateHwndEx(a1, 1LL, 0);
    if ( !v5 )
    {
      DC = 0LL;
      goto LABEL_17;
    }
  }
  else
  {
    v5 = 0LL;
  }
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    HasUILimit = tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v3 + 464), 1u);
LABEL_9:
    if ( HasUILimit && !v5 )
    {
      v8 = *(__int64 **)(*(_QWORD *)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 24LL);
      if ( v8 )
        v9 = *v8;
      else
        v9 = 0LL;
      v2 = ValidateHwndEx(v9, 1LL, 0) != 0;
    }
    goto LABEL_15;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent() + 132, 0, 0) & 0x20000000) != 0 )
  {
    HasUILimit = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)PtiCurrent() + 58) + 752LL) + 24LL) & 1;
    goto LABEL_9;
  }
LABEL_15:
  DC = (HDC)GetDC(v5);
  if ( !v2 )
  {
    v18 = 0LL;
    RectRgnIndirect = GreCreateRectRgnIndirect((struct REGION_CORE *)&v18);
    UserSessionState = W32GetUserSessionState(v12, v11);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL));
    GreSelectVisRgnShared(DC, RectRgnIndirect, 1u);
    v16 = W32GetUserSessionState(v15, v14);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v16 + 56968) + 48LL));
  }
LABEL_17:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v4);
  return DC;
}
