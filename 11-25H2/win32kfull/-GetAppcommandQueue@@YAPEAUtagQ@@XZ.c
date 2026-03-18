/*
 * XREFs of ?GetAppcommandQueue@@YAPEAUtagQ@@XZ @ 0x14024F9A0
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x14024FA10 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     <none>
 */

struct tagQ *__fastcall GetAppcommandQueue(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888)
    && ((v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18888), (v6 = *(_QWORD *)(v5 + 120)) != 0)
     || (v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18888) + 128LL)) != 0) )
  {
    return *(struct tagQ **)(*(_QWORD *)(v6 + 16) + 472LL);
  }
  else
  {
    return 0LL;
  }
}
