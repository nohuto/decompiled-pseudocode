/*
 * XREFs of ?CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801C55C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18017CFEC (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 */

__int64 __fastcall CInteractionRoot::CalculateDetectedInteractions(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4,
        InteractionConfigurationGroup *a5,
        _DWORD *a6,
        __int64 a7,
        _DWORD *a8)
{
  return CInteractionProcessor::CalculateDetectedInteractions(
           (CInteractionProcessor *)(a1 + 24),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
