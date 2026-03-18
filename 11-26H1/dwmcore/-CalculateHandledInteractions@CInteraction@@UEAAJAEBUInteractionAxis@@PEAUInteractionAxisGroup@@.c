/*
 * XREFs of ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18017A760
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18017A7F8 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteraction::CalculateHandledInteractions(
        __int64 a1,
        int a2,
        int a3,
        struct InteractionAxisGroup *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8)
{
  int v9; // edi
  __int64 v11; // rcx

  v9 = CInteractionProcessor::CalculateHandledInteractions((int)a1 + 288, a2, a3, a4, a5, a6, (__int64)a7, a8);
  if ( v9 >= 0 && *a7 == 1 )
  {
    v11 = *(_QWORD *)(a1 + 208);
    if ( v11 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 80) + 48LL))(v11 + 80) )
        *a7 = 2;
    }
  }
  return (unsigned int)v9;
}
