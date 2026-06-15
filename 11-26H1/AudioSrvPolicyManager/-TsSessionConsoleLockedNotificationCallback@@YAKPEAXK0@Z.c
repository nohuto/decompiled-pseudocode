/*
 * XREFs of ?TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z @ 0x1800440F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_232257857a1cb6c76353db7ef02330a7_::operator() @ 0x1800288D4 (_lambda_232257857a1cb6c76353db7ef02330a7_--operator().c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TsSessionConsoleLockedNotificationCallback(void *a1, __int64 a2, void *a3)
{
  int v3; // eax
  __int64 *v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v7; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a1;
  v5[0] = (__int64 *)&v8;
  v5[1] = (__int64 *)&v7;
  v3 = lambda_232257857a1cb6c76353db7ef02330a7_::operator()(v5);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2033LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v3);
  return 0LL;
}
