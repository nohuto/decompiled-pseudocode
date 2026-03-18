/*
 * XREFs of NtUserfnINOUTDRAG @ 0x1402A3D10
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINOUTDRAG(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  unsigned int v8; // esi
  _BYTE *v10; // rdx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+48h] [rbp-40h] BYREF
  __int128 v14; // [rsp+58h] [rbp-30h]
  __int128 v15; // [rsp+68h] [rbp-20h]

  v8 = a2;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  PtiCurrent(a1, a2);
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[47] = v10[47];
  v13 = *a4;
  v14 = a4[1];
  v15 = a4[2];
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
  a4[2] = v15;
  return result;
}
