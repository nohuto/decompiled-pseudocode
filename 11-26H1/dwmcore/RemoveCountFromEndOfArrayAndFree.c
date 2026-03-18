/*
 * XREFs of RemoveCountFromEndOfArrayAndFree @ 0x1800AAFA0
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1800AA808 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x1800A932C (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 */

void __fastcall RemoveCountFromEndOfArrayAndFree(int a1, __int64 a2)
{
  int v3; // ebx
  int v4; // ecx
  InteractionConfigurationGroup *v5; // rsi

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = *(_DWORD *)(a2 + 24);
      v5 = *(InteractionConfigurationGroup **)(*(_QWORD *)a2 + 8LL * (unsigned int)(v4 - 1));
      if ( v4 )
        *(_DWORD *)(a2 + 24) = v4 - 1;
      else
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x19Au, 0LL);
      --v3;
      if ( v5 )
        InteractionConfigurationGroup::`scalar deleting destructor'(v5);
    }
    while ( v3 );
  }
}
