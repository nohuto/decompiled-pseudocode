/*
 * XREFs of ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1400F4A9C
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1400F44B8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x14023E820 (EditionImmActivateAndUnloadThreadsLayout.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionImmActivateAndUnloadThreadsLayout(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5))(void)
{
  int v6; // edi
  int v7; // esi
  __int64 (*result)(void); // rax
  int v9; // r8d

  v6 = a2;
  v7 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5528LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionImmActivateAndUnloadThreadsLayout(v7, v6, v9, a4, a5);
  }
  return result;
}
