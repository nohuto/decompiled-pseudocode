/*
 * XREFs of _anonymous_namespace_::UpdateThresholdFromMetric @ 0x1401FE558
 * Callers:
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x14014C274 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 * Callees:
 *     UpdateWinIniInt @ 0x1401D5E24 (UpdateWinIniInt.c)
 */

char __fastcall anonymous_namespace_::UpdateThresholdFromMetric(
        __int64 a1,
        _BYTE *a2,
        _BYTE *a3,
        char a4,
        char a5,
        int a6)
{
  __int64 UserSessionState; // rax
  __int64 v9; // rcx

  LOBYTE(UserSessionState) = a4;
  if ( (_BYTE)a1 )
  {
    LOBYTE(UserSessionState) = (unsigned int)UpdateWinIniInt(0LL, 0xCu, a4) != 0;
    *a2 = UserSessionState;
    *a3 = UserSessionState;
  }
  if ( *a3 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v9 = *(_QWORD *)(UserSessionState + 63448);
    *(_BYTE *)(v9 + 4LL * a6) = a5;
    *(_BYTE *)(v9 + 4LL * a6 + 1) = a5;
    *(_BYTE *)(v9 + 4LL * a6 + 2) = a5;
    *(_BYTE *)(v9 + 4LL * a6 + 3) = a5;
  }
  return UserSessionState;
}
