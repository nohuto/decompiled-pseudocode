/*
 * XREFs of ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x180282CD0
 * Callers:
 *     ?SetReferenceProperty@CSpriteVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCResource@@@Z @ 0x180282D60 (-SetReferenceProperty@CSpriteVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180112540 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVisual::SetContent(struct CResource **this, struct CContent *a2)
{
  unsigned int v4; // ebx
  int v5; // eax

  if ( !a2 || (*(unsigned __int8 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 16LL) )
  {
    v5 = CVisual::SetContent(this, a2);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x80u, 0LL);
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x7Du, 0LL);
  }
  return v4;
}
