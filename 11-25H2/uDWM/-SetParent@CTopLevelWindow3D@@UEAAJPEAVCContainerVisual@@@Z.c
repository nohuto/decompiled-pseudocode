/*
 * XREFs of ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCContainerVisual@@@Z @ 0x18007BB50
 * Callers:
 *     <none>
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180006850 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetParent@CVisual@@UEAAJPEAVCContainerVisual@@@Z @ 0x18001E300 (-SetParent@CVisual@@UEAAJPEAVCContainerVisual@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::SetParent(CTopLevelWindow3D *this, struct CContainerVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // eax

  v4 = CVisual::SetParent(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x87Cu, 0LL);
  }
  else if ( !a2 )
  {
    v7 = CTopLevelWindow3D::StopAnimation(this);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x881u, 0LL);
  }
  return v5;
}
