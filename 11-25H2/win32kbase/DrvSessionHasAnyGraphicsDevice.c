/*
 * XREFs of DrvSessionHasAnyGraphicsDevice @ 0x14006D6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x14003F600 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     UserIsConsoleConnection @ 0x14004D1E0 (UserIsConsoleConnection.c)
 *     UserIsDisconnectConnection @ 0x14006BBA0 (UserIsDisconnectConnection.c)
 */

__int64 DrvSessionHasAnyGraphicsDevice()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = 1;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8700;
  }
  if ( !UserIsDisconnectConnection(v1, v0) )
  {
    v4 = *(_QWORD *)(W32GetSessionState(v3) + 88);
    if ( UserIsConsoleConnection(v6, v5) )
      v7 = *(_QWORD *)(v4 + 1192);
    else
      v7 = *(_QWORD *)(v4 + 1184);
    if ( !v7 || (*(_DWORD *)(v7 + 160) & 0x2000000) != 0 && !*(_QWORD *)(v7 + 128) )
      return 0;
  }
  return v2;
}
