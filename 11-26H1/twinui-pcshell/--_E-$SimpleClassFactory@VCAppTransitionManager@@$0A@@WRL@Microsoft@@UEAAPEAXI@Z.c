/*
 * XREFs of ??_E?$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180454C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::SimpleClassFactory<CAppTransitionManager,0>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
