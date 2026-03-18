/*
 * XREFs of DrvSessionHasAnyGraphicsDevice @ 0x140190660
 * Callers:
 *     <none>
 * Callees:
 *     UserIsConsoleConnection @ 0x140028F70 (UserIsConsoleConnection.c)
 *     UserIsDisconnectConnection @ 0x14002A9D0 (UserIsDisconnectConnection.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall DrvSessionHasAnyGraphicsDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx

  v6 = 1;
  if ( !(unsigned int)GET_USERCRIT_DISPOSITION(a1, a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8488;
  }
  if ( !UserIsDisconnectConnection(v3, v2, v4, v5) )
  {
    v8 = *(_QWORD *)(W32GetSessionState(v7) + 88);
    v13 = *(_QWORD *)((UserIsConsoleConnection(v10, v9, v11, v12) ? 8 : 0) + v8 + 1272);
    if ( !v13 || (*(_DWORD *)(v13 + 160) & 0x2000000) != 0 && !*(_QWORD *)(v13 + 128) )
      return 0;
  }
  return v6;
}
