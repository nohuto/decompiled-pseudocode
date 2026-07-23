/*
 * XREFs of PsPerfLogSessionRundown @ 0x140804B5C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceSiloDcEvent @ 0x1404B4AA4 (EtwTraceSiloDcEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PsGetNextSession @ 0x140A837F0 (PsGetNextSession.c)
 */

__int64 __fastcall PsPerfLogSessionRundown(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int16 v4; // di
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 NextSession; // rax
  void *v9; // rbx
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-38h] BYREF

  v12[1] = 12LL;
  v12[0] = &v11;
  v4 = (a3 != 0) + 588;
  v6 = 0LL;
  v11 = 0LL;
  while ( 1 )
  {
    NextSession = PsGetNextSession(v6);
    v9 = (void *)NextSession;
    if ( !NextSession )
      break;
    v7 = *(_QWORD *)(NextSession + 744);
    DWORD2(v11) = *(_DWORD *)(v7 + 8);
    *(_QWORD *)&v11 = v7;
    EtwTraceSiloDcEvent((__int64)v12, 1u, a1, a2, v4, 0x501803u);
    v6 = v9;
  }
  return 0LL;
}
