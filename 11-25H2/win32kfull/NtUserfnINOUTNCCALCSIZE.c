/*
 * XREFs of NtUserfnINOUTNCCALCSIZE @ 0x140186920
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINOUTNCCALCSIZE(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  unsigned int v8; // r12d
  _BYTE *v10; // rdx
  ULONG64 v11; // rcx
  __int128 *v12; // r14
  __int128 *v13; // rdi
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int128 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+58h] [rbp-B0h]
  __int64 v18; // [rsp+68h] [rbp-A0h]
  __int128 v19; // [rsp+80h] [rbp-88h] BYREF
  __int128 v20; // [rsp+90h] [rbp-78h]
  __int128 v21; // [rsp+A0h] [rbp-68h]
  __int128 *v22; // [rsp+B0h] [rbp-58h]
  __int128 v23; // [rsp+B8h] [rbp-50h] BYREF

  v8 = a2;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v23 = 0LL;
  W32GetCurrentThreadNonPaged(a1, a2);
  v10 = (_BYTE *)a4;
  v11 = MmUserProbeAddress;
  if ( a3 )
  {
    if ( a4 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[55] = v10[55];
    v19 = *(_OWORD *)a4;
    v20 = *(_OWORD *)(a4 + 16);
    v21 = *(_OWORD *)(a4 + 32);
    v22 = *(__int128 **)(a4 + 48);
    v10 = v22;
    v11 = MmUserProbeAddress;
    if ( (unsigned __int64)v22 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[39] = v10[39];
    v13 = v22;
    v16 = *v22;
    v17 = v22[1];
    v18 = *((_QWORD *)v22 + 4);
    v22 = &v16;
    v12 = &v19;
  }
  else
  {
    if ( a4 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[15] = v10[15];
    v23 = *(_OWORD *)a4;
    v12 = &v23;
    v13 = 0LL;
  }
  UserSessionState = W32GetUserSessionState(v11, v10);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                    + 8LL * ((a6 + 6) & 0x1F)
                                                                                    + 70920))(
             a1,
             v8,
             a3,
             v12,
             a5);
  if ( a3 )
  {
    *(_OWORD *)a4 = v19;
    *(_OWORD *)(a4 + 16) = v20;
    *(_OWORD *)(a4 + 32) = v21;
    *(_QWORD *)(a4 + 48) = v13;
    *v13 = v16;
    v13[1] = v17;
    *((_QWORD *)v13 + 4) = v18;
  }
  else
  {
    *(_OWORD *)a4 = v23;
  }
  return result;
}
