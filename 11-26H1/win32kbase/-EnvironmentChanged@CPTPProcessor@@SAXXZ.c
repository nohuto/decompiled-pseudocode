/*
 * XREFs of ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1401C4DE0
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x140163F00 (UpdateTPCurrentActiveState.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x14020AE78 (RIMSetExtendedPointerDeviceProperty.c)
 * Callees:
 *     CBaseInput::ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___ @ 0x1401B6604 (CBaseInput--ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___.c)
 */

void __fastcall CPTPProcessor::EnvironmentChanged(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 UserSessionState; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 16832) )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v4, v3, v5) + 3080) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 16832) + 1232LL);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v9, 0LL);
      UserSessionState = W32GetUserSessionState(v11, v10, v12);
      CBaseInput::ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___(*(_QWORD *)(UserSessionState + 16832));
      ExReleasePushLockSharedEx(v9, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
