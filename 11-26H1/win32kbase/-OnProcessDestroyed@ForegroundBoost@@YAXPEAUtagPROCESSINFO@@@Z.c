/*
 * XREFs of ?OnProcessDestroyed@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401D3FB4
 * Callers:
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1401630E0 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401C93F0 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ForegroundBoost::OnProcessDestroyed(ForegroundBoost *this, struct tagPROCESSINFO *a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  struct W32_PUSH_LOCK *v6; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  ForegroundBoost **i; // rcx
  ForegroundBoost *v11; // rax

  if ( (unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(v4, v3, v5) + 18904);
    W32AcquirePushLockExclusiveEx(v6);
    if ( !ForegroundBoost::_anonymous_namespace_::IsProcessBackground() )
    {
      *((_QWORD *)this + 101) &= 0xFFFFFFC03FFFFFFFuLL;
      for ( i = (ForegroundBoost **)(W32GetUserSessionState(v8, v7, v9) + 36408);
            ;
            i = (ForegroundBoost **)((char *)v11 + 1112) )
      {
        v11 = *i;
        if ( !*i )
          break;
        if ( v11 == this )
        {
          *i = (ForegroundBoost *)*((_QWORD *)this + 139);
          break;
        }
      }
      *((_QWORD *)this + 139) = 0LL;
    }
    W32ReleasePushLockExclusiveEx(v6);
  }
}
