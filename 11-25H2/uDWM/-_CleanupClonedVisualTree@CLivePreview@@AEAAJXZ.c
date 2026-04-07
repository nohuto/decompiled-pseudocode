/*
 * XREFs of ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x1800375BC
 * Callers:
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180036F70 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800079C0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180014114 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CLivePreview::_CleanupClonedVisualTree(CContainerVisual **this)
{
  int v2; // eax
  unsigned int v3; // ebx

  CContainerVisual::RemoveAllChildren(this[53]);
  CContainerVisual::RemoveAllChildren(this[54]);
  *((_DWORD *)this + 96) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 45), 0x10u);
  CContainerVisual::RemoveAllChildren(this[55]);
  v2 = CRenderDataVisual::ClearInstructions(this[55]);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x67Fu, 0LL);
  return v3;
}
