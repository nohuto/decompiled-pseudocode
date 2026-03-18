/*
 * XREFs of NtUserfnTOUCHHITTESTING @ 0x1402A44D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnTOUCHHITTESTING(__int64 a1, __int64 a2, __int64 a3, void *a4, __int64 a5, char a6)
{
  unsigned int v8; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int128 v14; // [rsp+30h] [rbp-98h] BYREF
  __int128 v15; // [rsp+40h] [rbp-88h]
  __int128 v16; // [rsp+50h] [rbp-78h]
  __int128 v17; // [rsp+68h] [rbp-60h] BYREF
  __int128 v18; // [rsp+78h] [rbp-50h]
  __int128 v19; // [rsp+88h] [rbp-40h]

  v8 = a2;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  PtiCurrent(a1, a2);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  RtlCopyFromUser(&v14, a4, 0x30uLL);
  v17 = v14;
  v18 = v15;
  v19 = v16;
  UserSessionState = W32GetUserSessionState(v11, v10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                  + 8LL * ((a6 + 6) & 0x1F)
                                                                                  + 70920))(
           a1,
           v8,
           a3,
           &v17,
           a5);
}
