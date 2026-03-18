/*
 * XREFs of ??4?$SGATOMTABLEgatomInterceptWindowData@G@@QEAAAEBGAEBG@Z @ 0x1402833A4
 * Callers:
 *     SetupClassAtoms @ 0x1401F1AF0 (SetupClassAtoms.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall SGATOMTABLEgatomInterceptWindowData<unsigned short>::operator=(__int64 a1, __int16 *a2)
{
  __int16 v2; // bx

  v2 = *a2;
  *(_WORD *)(W32GetUserSessionState(a1, a2) + 41368) = v2;
  return a2;
}
