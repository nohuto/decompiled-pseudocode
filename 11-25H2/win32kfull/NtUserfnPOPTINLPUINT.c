/*
 * XREFs of NtUserfnPOPTINLPUINT @ 0x1402A42D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnPOPTINLPUINT(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        volatile void *a4,
        __int64 a5,
        char a6)
{
  unsigned int v8; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax

  v8 = a2;
  PtiCurrent(a1, a2);
  if ( a4 )
  {
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      ExRaiseAccessViolation();
    ProbeForRead(a4, 8 * a3, 4u);
  }
  UserSessionState = W32GetUserSessionState(v11, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, volatile void *, __int64))(UserSessionState
                                                                                                + 8LL
                                                                                                * ((a6 + 6) & 0x1F)
                                                                                                + 70920))(
           a1,
           v8,
           a3,
           a4,
           a5);
}
