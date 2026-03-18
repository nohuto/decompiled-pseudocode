/*
 * XREFs of ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1400C40C8
 * Callers:
 *     NtUserCallNextHookEx @ 0x1400C3A30 (NtUserCallNextHookEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PhkNextValid @ 0x1400C5F24 (PhkNextValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPMSLLHOOKSTRUCT(unsigned int a1, __int64 a2, struct tagMSLLHOOKSTRUCT *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct tagTHREADINFO *v8; // rax
  __int64 Valid; // rax
  __int128 v11; // [rsp+38h] [rbp-40h] BYREF
  __int128 v12; // [rsp+48h] [rbp-30h]

  v11 = 0LL;
  v12 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagMSLLHOOKSTRUCT *)MmUserProbeAddress;
  v11 = *(_OWORD *)a3;
  v12 = *((_OWORD *)a3 + 1);
  v7 = 0LL;
  if ( *((_QWORD *)PtiCurrent(MmUserProbeAddress, a2) + 91) )
  {
    v8 = PtiCurrent(v6, v5);
    Valid = PhkNextValid(*((_QWORD *)v8 + 91));
    return xxxCallHook2(Valid, a1, a2, &v11, 0);
  }
  return v7;
}
