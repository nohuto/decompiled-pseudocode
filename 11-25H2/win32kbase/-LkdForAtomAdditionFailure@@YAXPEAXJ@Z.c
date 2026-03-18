/*
 * XREFs of ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1401C1594
 * Callers:
 *     UserAddAtomEx @ 0x1400D8E20 (UserAddAtomEx.c)
 *     UserAddAtomToAtomTableEx @ 0x1400DE950 (UserAddAtomToAtomTableEx.c)
 *     UserAddAtomToAtomTable @ 0x14019D6C0 (UserAddAtomToAtomTable.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall LkdForAtomAdditionFailure(void *a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 UserSessionState; // rbx

  v2 = a2;
  if ( a1 == *(void **)(W32GetUserSessionState(a1, a2) + 41376) )
  {
    v3 = *((_QWORD *)PtiCurrent() + 65);
    *(_QWORD *)(v3 + 224) |= 0x800uLL;
    UserSessionState = W32GetUserSessionState(v3, v4);
    if ( !*(_BYTE *)(UserSessionState + 42240) )
    {
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 21LL, v2, 0LL, KeGetCurrentThread(), 0LL, 0LL, 0);
      *(_BYTE *)(UserSessionState + 42240) = 1;
    }
  }
}
