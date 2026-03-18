/*
 * XREFs of NtUserfnINSTRING @ 0x140188CC0
 * Callers:
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x140188B28 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINSTRING(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, int a7)
{
  unsigned int v9; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 UserSessionState; // rax
  __int128 v16; // [rsp+40h] [rbp-18h] BYREF

  v9 = a2;
  v16 = 0LL;
  PtiCurrent(a1, a2);
  if ( v9 == 325 || v9 == 397 )
  {
    a3 &= ~0x2000uLL;
  }
  else if ( v9 != 406 )
  {
    v11 = -1LL;
    goto LABEL_5;
  }
  v11 = -1LL;
LABEL_5:
  if ( a7 )
  {
    *((_QWORD *)&v16 + 1) = a4;
    v12 = 0x80000000LL;
    DWORD1(v16) |= 0x80000000;
    if ( !a4 )
    {
      *(_QWORD *)&v16 = 0x8000000000000000uLL;
      goto LABEL_18;
    }
    do
      ++v11;
    while ( *(_BYTE *)(a4 + v11) );
    LODWORD(v16) = v11;
    v13 = (v11 + 1) | 0x80000000;
  }
  else
  {
    if ( a4 && (a4 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    *((_QWORD *)&v16 + 1) = a4;
    v12 = 0x7FFFFFFFLL;
    DWORD1(v16) &= ~0x80000000;
    if ( !a4 )
    {
      *(_QWORD *)&v16 = 0LL;
      goto LABEL_18;
    }
    do
      ++v11;
    while ( *(_WORD *)(a4 + 2 * v11) );
    LODWORD(v16) = 2 * v11;
    v13 = (2 * v11 + 2) & 0x7FFFFFFF;
  }
  DWORD1(v16) = v13;
LABEL_18:
  UserSessionState = W32GetUserSessionState(v12, v11);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                  + 8LL * ((a6 + 6) & 0x1F)
                                                                                  + 70920))(
           a1,
           v9,
           a3,
           &v16,
           a5);
}
