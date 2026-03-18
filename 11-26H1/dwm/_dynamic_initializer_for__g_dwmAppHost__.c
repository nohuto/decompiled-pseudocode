/*
 * XREFs of _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001E80
 * Callers:
 *     <none>
 * Callees:
 *     ??0CDwmAppHost@@QEAA@XZ @ 0x140003DDC (--0CDwmAppHost@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_dwmAppHost__(CDwmAppHost *a1)
{
  CDwmAppHost::CDwmAppHost(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_dwmAppHost__);
}
