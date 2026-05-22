/*
 * XREFs of ?AddRef@LampArrayRawInputProvider@@UEAAKXZ @ 0x18005F3B0
 * Callers:
 *     ?AddRef@ContextualProcessorBuffer@@W7EAAKXZ @ 0x1800CCC70 (-AddRef@ContextualProcessorBuffer@@W7EAAKXZ.c)
 *     ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x1800CCC80 (-AddRef@InputStateManager@@WBA@EAAKXZ.c)
 *     ?AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ @ 0x1800CCC90 (-AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LampArrayRawInputProvider::AddRef(LampArrayRawInputProvider *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
