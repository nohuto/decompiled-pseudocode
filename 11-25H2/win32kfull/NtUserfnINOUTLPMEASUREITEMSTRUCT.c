/*
 * XREFs of NtUserfnINOUTLPMEASUREITEMSTRUCT @ 0x1401E6D80
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINOUTLPMEASUREITEMSTRUCT(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6)
{
  unsigned int v8; // esi
  _BYTE *v10; // rdx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+48h] [rbp-50h] BYREF
  __int128 v14; // [rsp+58h] [rbp-40h]

  v8 = a2;
  v13 = 0LL;
  v14 = 0LL;
  PtiCurrent(a1, a2);
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[31] = v10[31];
  v13 = *a4;
  v14 = a4[1];
  UserSessionState = W32GetUserSessionState(MmUserProbeAddress, v10);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                    + 8LL * ((a6 + 6) & 0x1F)
                                                                                    + 70920))(
             a1,
             v8,
             a3,
             &v13,
             a5);
  *a4 = v13;
  a4[1] = v14;
  return result;
}
