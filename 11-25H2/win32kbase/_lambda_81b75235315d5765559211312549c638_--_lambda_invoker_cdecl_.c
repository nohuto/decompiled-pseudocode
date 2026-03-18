/*
 * XREFs of _lambda_81b75235315d5765559211312549c638_::_lambda_invoker_cdecl_ @ 0x140215A50
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 */

__int64 __fastcall lambda_81b75235315d5765559211312549c638_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // rax
  _DWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  result = W32GetUserSessionState(a1, a2);
  v3 = *(_QWORD *)(result + 18904);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 464);
    v7 = 0LL;
    v9 = 0LL;
    v6[0] = *(_DWORD *)(v4 + 56);
    v6[1] = (unsigned int)PsGetThreadId(*(PETHREAD *)v3);
    v5 = *(__int64 **)(*(_QWORD *)(v3 + 472) + 120LL);
    if ( v5 )
      v8 = *v5;
    else
      v8 = 0LL;
    return SendMessageTo(2LL, v6, 32LL);
  }
  return result;
}
