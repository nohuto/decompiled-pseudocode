/*
 * XREFs of ?ShouldNotify@CInteractionTracker@@AEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18013C658
 * Callers:
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x18013C4E8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1802058EC (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall CInteractionTracker::ShouldNotify(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  char v3; // r8
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  if ( v2 && *(_DWORD *)(v2 + 116) && *(_DWORD *)(a1 + 72) )
  {
    v4 = *(_DWORD *)(a1 + 284);
    return _bittest(&v4, a2);
  }
  return v3;
}
