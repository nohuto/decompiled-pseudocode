/*
 * XREFs of NtUserfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x140182CD0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnOPTOUTLPDWORDOPTOUTLPDWORD(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        char a6)
{
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // r8
  int v15; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v16[9]; // [rsp+34h] [rbp-24h] BYREF

  v8 = a2;
  v15 = 0;
  v16[0] = 0;
  W32GetCurrentThreadNonPaged(a1, a2);
  UserSessionState = W32GetUserSessionState(v11, v10);
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, _DWORD *, __int64))(UserSessionState
                                                                             + 8LL * ((a6 + 6) & 0x1F)
                                                                             + 70920))(
          a1,
          v8,
          &v15,
          v16,
          a5);
  if ( a3 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = v15;
  }
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_DWORD *)MmUserProbeAddress;
    *a4 = v16[0];
  }
  return v13;
}
