/*
 * XREFs of _dynamic_initializer_for__g_DDisplayManager__ @ 0x180007410
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 */

int dynamic_initializer_for__g_DDisplayManager__()
{
  _QWORD *v0; // rax

  v0 = operator new(0x30uLL);
  *v0 = v0;
  v0[1] = v0;
  v0[2] = v0;
  *((_WORD *)v0 + 12) = 257;
  qword_1803DE740 = (__int64)v0;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_DDisplayManager__);
}
