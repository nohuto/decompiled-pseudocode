/*
 * XREFs of FindShadowWindow @ 0x1400E0E8C
 * Callers:
 *     UpdateWindowMonitor @ 0x140033EB0 (UpdateWindowMonitor.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14025C124 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1400E12C0 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall FindShadowWindow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax

  result = FindShadow(a1);
  if ( result )
    return (struct tagSHADOW *)*((_QWORD *)result + 1);
  return result;
}
