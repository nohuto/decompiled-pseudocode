/*
 * XREFs of NtUserfnEMPTY @ 0x140137080
 * Callers:
 *     NtUserfnPARENTNOTIFY @ 0x140136FC0 (NtUserfnPARENTNOTIFY.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnEMPTY(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v8; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax

  v8 = a2;
  W32GetCurrentThreadNonPaged(a1, a2);
  UserSessionState = W32GetUserSessionState(v11, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(UserSessionState
                                                                               + 8LL * ((a6 + 6) & 0x1F)
                                                                               + 70920))(
           a1,
           v8,
           a3,
           a4,
           a5);
}
