/*
 * XREFs of wil::details::lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___::_lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___ @ 0x180110D7C
 * Callers:
 *     AudioServerCreateStream @ 0x1801149A0 (AudioServerCreateStream.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18010F920 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___::_lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___(
        __int64 a1)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    if ( !RevertToSelf() )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xB8C,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        v1);
  }
}
