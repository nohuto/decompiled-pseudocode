/*
 * XREFs of ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800A6484
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18002445C (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180097F20 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?LogMorph@CAnimationComponent@@QEAAXXZ @ 0x1800A6474 (-LogMorph@CAnimationComponent@@QEAAXXZ.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800A64F0 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 */

void __fastcall CAnimationComponent::Morph(CAnimationComponent *this)
{
  __int64 v2; // rcx

  if ( !*((_BYTE *)this + 66) )
  {
    CAnimationComponent::SetGhost(this);
    CAnimationComponent::LogMorph(this);
    *((_BYTE *)this + 66) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0p_EtwEventWriteTransfer(v2, (__int64)&UdwmSystemAnimation_Morph, *((_QWORD *)this + 2));
  }
}
