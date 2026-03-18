/*
 * XREFs of NtUserfnINCNTOUTSTRINGNULL @ 0x1402A3760
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINCNTOUTSTRINGNULL(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _WORD *a4,
        __int64 a5,
        char a6,
        int a7)
{
  unsigned int v9; // r14d
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  int v17; // [rsp+40h] [rbp-18h] BYREF
  int v18; // [rsp+44h] [rbp-14h]
  _WORD *v19; // [rsp+48h] [rbp-10h]

  v9 = a2;
  PtiCurrent(a1, a2);
  v11 = (a7 << 31) ^ (a3 ^ (a7 << 31)) & 0x7FFFFFFF;
  v18 = v11;
  v12 = 0LL;
  if ( !a7 )
  {
    v11 ^= (v11 ^ (2 * v11)) & 0x7FFFFFFF;
    v18 = v11;
  }
  if ( (v11 & 0x7FFFFFFFu) < 2 || (v11 & 0x7FFFFFFFu) < a3 )
  {
    UserSetLastError(87);
  }
  else
  {
    v17 = 0;
    v19 = a4;
    ProbeForWrite(a4, v11 & 0x7FFFFFFF, (v11 >> 31) + 2);
    *a4 = 0;
    UserSessionState = W32GetUserSessionState(v14, v13);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, int *, __int64))(UserSessionState
                                                                                        + 8LL * ((a6 + 6) & 0x1F)
                                                                                        + 70920))(
             a1,
             v9,
             a3,
             &v17,
             a5);
  }
  return v12;
}
