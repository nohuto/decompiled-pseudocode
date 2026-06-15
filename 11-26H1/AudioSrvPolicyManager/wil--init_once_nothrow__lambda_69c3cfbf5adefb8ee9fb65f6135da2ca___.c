/*
 * XREFs of wil::init_once_nothrow__lambda_69c3cfbf5adefb8ee9fb65f6135da2ca___ @ 0x18001F790
 * Callers:
 *     ?UpdateGlobalUserPresenceState@@YAXXZ @ 0x18001F2CC (-UpdateGlobalUserPresenceState@@YAXXZ.c)
 *     _lambda_ab89a89ea42e1cdbde82015b563aa09f_::operator() @ 0x18001F690 (_lambda_ab89a89ea42e1cdbde82015b563aa09f_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002CDC4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _lambda_69c3cfbf5adefb8ee9fb65f6135da2ca_::operator() @ 0x1800435D0 (_lambda_69c3cfbf5adefb8ee9fb65f6135da2ca_--operator().c)
 */

__int64 __fastcall wil::init_once_nothrow__lambda_69c3cfbf5adefb8ee9fb65f6135da2ca___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const char *v3; // r9
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]

  v9 = HIDWORD(a3);
  fPending = 0;
  if ( !InitOnceBeginInitialize(&InitOnce, 0, &fPending, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x36C, (unsigned int)"wil", v3);
  if ( !fPending )
    return 0LL;
  v5 = lambda_69c3cfbf5adefb8ee9fb65f6135da2ca_::operator()();
  v6 = v5;
  if ( v5 >= 0 )
  {
    InitOnceComplete(&InitOnce, 0, 0LL);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x371, (int)"wil", (const char *)(unsigned int)v5);
  InitOnceComplete(&InitOnce, 4u, 0LL);
  return v6;
}
