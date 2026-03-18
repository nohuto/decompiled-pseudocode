/*
 * XREFs of ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1401BEDC8
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x14011C5F8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x140248E34 (EditionImmActivateAndUnloadThreadsLayout.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionImmActivateAndUnloadThreadsLayout(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5))(void)
{
  int v7; // esi
  __int64 (*result)(void); // rax
  int v9; // r8d

  v7 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5088LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionImmActivateAndUnloadThreadsLayout(v7, a2, v9, a4, a5);
  }
  return result;
}
