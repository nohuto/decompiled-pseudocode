/*
 * XREFs of ?GetAppcommandQueue@@YAPEAUtagQ@@XZ @ 0x140259F60
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x14027AA50 (EditionHandleAndPostKeyEvent.c)
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

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928)
    && ((v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18928), (v6 = *(_QWORD *)(v5 + 120)) != 0)
     || (v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18928) + 128LL)) != 0) )
  {
    return *(struct tagQ **)(*(_QWORD *)(v6 + 16) + 464LL);
  }
  else
  {
    return 0LL;
  }
}
