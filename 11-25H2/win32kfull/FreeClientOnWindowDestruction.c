/*
 * XREFs of FreeClientOnWindowDestruction @ 0x1401ACD40
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeClientOnWindowDestruction(__int64 a1, __int64 a2)
{
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rbp
  _QWORD *v8; // rsi

  v3 = (_QWORD **)(W32GetUserSessionState(a1, a2) + 16712);
  v4 = *v3;
  while ( v4 != v3 )
  {
    v7 = v4 - 2;
    v8 = v4;
    v4 = (_QWORD *)*v4;
    if ( a1 == *v7 )
    {
      HMAssignmentUnlock(v7);
      v5 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v6 = (_QWORD *)v8[1], (_QWORD *)*v6 != v8) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      Win32FreePool(v7);
    }
  }
}
