/*
 * XREFs of _lambda_c92a1355a24c64b2e5b1950f66ad99d0_::_lambda_invoker_cdecl_ @ 0x14021AF30
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 */

__int64 __fastcall lambda_c92a1355a24c64b2e5b1950f66ad99d0_::_lambda_invoker_cdecl_(int a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // rax
  _DWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  result = W32GetUserSessionState(a1, a2, a3);
  v4 = *(_QWORD *)(result + 18944);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 456);
    v8 = 0LL;
    v10 = 0LL;
    v7[0] = *(_DWORD *)(v5 + 56);
    v7[1] = (unsigned int)PsGetThreadId(*(PETHREAD *)v4);
    v6 = *(__int64 **)(*(_QWORD *)(v4 + 464) + 120LL);
    if ( v6 )
      v9 = *v6;
    else
      v9 = 0LL;
    return SendMessageTo(2, (int)v7, 32);
  }
  return result;
}
