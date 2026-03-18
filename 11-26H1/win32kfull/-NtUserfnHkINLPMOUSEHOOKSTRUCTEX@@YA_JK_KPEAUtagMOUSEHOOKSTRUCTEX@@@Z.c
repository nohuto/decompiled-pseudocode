/*
 * XREFs of ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x14003DC5C
 * Callers:
 *     NtUserCallNextHookEx @ 0x14003D690 (NtUserCallNextHookEx.c)
 * Callees:
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14003D278 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPMOUSEHOOKSTRUCTEX(unsigned int a1, __int64 a2, struct tagMOUSEHOOKSTRUCTEX *a3)
{
  __int64 v4[2]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-20h]

  *(_OWORD *)v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagMOUSEHOOKSTRUCTEX *)MmUserProbeAddress;
  *(_OWORD *)v4 = *(_OWORD *)a3;
  v5 = *((_OWORD *)a3 + 1);
  v6 = *((_QWORD *)a3 + 4);
  return xxxCallNextHookEx(a1, a2, (__int64)v4);
}
