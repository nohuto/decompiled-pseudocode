/*
 * XREFs of ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B612C
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B6610 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800B602C (-EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ.c)
 *     ?GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800BF560 (-GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::EnsureVisualBrush(CSecondaryWindowRepresentation **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int SharedVisualBrush; // eax

  v2 = CIconicAnimatedVisual::EnsureSecondaryWindowRepresentation((CIconicAnimatedVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x55u, 0LL);
  }
  else if ( !this[29] )
  {
    SharedVisualBrush = CSecondaryWindowRepresentation::GetSharedVisualBrush(
                          this[27],
                          (struct CVisualBrush *)(this + 29));
    v3 = SharedVisualBrush;
    if ( SharedVisualBrush < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SharedVisualBrush, 0x59u, 0LL);
  }
  return v3;
}
