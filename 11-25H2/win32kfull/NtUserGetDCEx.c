/*
 * XREFs of NtUserGetDCEx @ 0x1402498D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x140275B0C (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1402832A8 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserGetDCEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 *v12; // rsi
  __int64 DCEx; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool HasUILimit; // al
  __int64 v17; // rdx
  struct tagTHREADINFO *v18; // rcx
  __int64 v19; // rcx
  int v20; // ecx

  v8 = EnterSharedCrit(0LL, 1LL);
  if ( a2 && !(unsigned int)GreIsValidRegion(a2)
    || a2 == *(_QWORD *)(W32GetUserSessionState(v7, v6) + 43064)
    || (a3 & 0xFFDAF800) != 0 )
  {
    v20 = 87;
    goto LABEL_22;
  }
  if ( !a1 )
  {
    v12 = *(__int64 **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v10, v9) + 62) + 8LL) + 24LL);
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      HasUILimit = tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v8 + 464), 1u);
    }
    else
    {
      v18 = PtiCurrent(v15, v14);
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v18 + 132, 0, 0) & 0x20000000) == 0 )
        goto LABEL_17;
      HasUILimit = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)v18, v17) + 58) + 752LL) + 24LL) & 1;
    }
    if ( !HasUILimit )
      goto LABEL_17;
    v19 = 0LL;
    if ( v12 )
      v19 = *v12;
    if ( ValidateHwnd(v19) )
      goto LABEL_17;
    v20 = 5;
LABEL_22:
    DCEx = 0LL;
    UserSetLastError(v20);
    goto LABEL_23;
  }
  v12 = (__int64 *)ValidateHwnd(a1);
  if ( !v12 )
  {
    DCEx = 0LL;
    goto LABEL_23;
  }
LABEL_17:
  DCEx = 0LL;
  if ( !a2 || (unsigned int)GreLockRegion(a2) )
  {
    DCEx = _GetDCEx(v12, a2, a3);
    if ( a2 )
      GreUnlockRegion(a2);
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v11);
  return DCEx;
}
