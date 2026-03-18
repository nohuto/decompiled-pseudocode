/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchInteractionConfigurationPrimitive@@I@Z @ 0x1800AA494
 * Callers:
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1800A82C4 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchInteractionConfigurationPrimitive_ @ 0x1800AA414 (_anonymous_namespace_--SetArrayConfiguration_DwmTouchInteractionConfigurationPrimitive_.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x1800AA584 (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18017CFEC (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet(
        __int64 a1,
        void *a2,
        unsigned int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  int v9; // eax
  void *Src; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(a1 + 24);
  v6 = v5 + a3;
  if ( (unsigned int)v5 + a3 < (unsigned int)v5 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
  }
  else
  {
    v7 = 0;
    if ( v6 > *(_DWORD *)(a1 + 20) )
    {
      Src = a2;
      v9 = DynArrayImpl<0>::Grow(a1, 0xCu, a3, 0, (unsigned __int64 *)&Src);
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xC2u, 0LL);
      }
      else
      {
        memcpy_0((void *)(*(_QWORD *)a1 + (unsigned int)(12 * *(_DWORD *)(a1 + 24))), Src, 12 * a3);
        *(_DWORD *)(a1 + 24) += a3;
      }
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + 12 * v5), a2, 12LL * a3);
      *(_DWORD *)(a1 + 24) = v6;
    }
  }
  return v7;
}
