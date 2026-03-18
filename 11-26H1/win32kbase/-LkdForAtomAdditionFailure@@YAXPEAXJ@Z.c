/*
 * XREFs of ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1401EA130
 * Callers:
 *     UserAddAtomEx @ 0x140120D00 (UserAddAtomEx.c)
 *     UserAddAtomToAtomTableEx @ 0x14012A570 (UserAddAtomToAtomTableEx.c)
 *     UserAddAtomToAtomTable @ 0x14018FFC0 (UserAddAtomToAtomTable.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall LkdForAtomAdditionFailure(void *a1, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // edx
  int v8; // r8d
  __int64 UserSessionState; // rbx

  if ( a1 == *(void **)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 41416) )
  {
    v6 = *((_QWORD *)PtiCurrent(v5, v4) + 64);
    *(_QWORD *)(v6 + 224) |= 0x800uLL;
    UserSessionState = W32GetUserSessionState(v6, v7, v8);
    if ( !*(_BYTE *)(UserSessionState + 42268) )
    {
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 21LL, a2, 0LL, KeGetCurrentThread(), 0LL, 0LL, 0);
      *(_BYTE *)(UserSessionState + 42268) = 1;
    }
  }
}
