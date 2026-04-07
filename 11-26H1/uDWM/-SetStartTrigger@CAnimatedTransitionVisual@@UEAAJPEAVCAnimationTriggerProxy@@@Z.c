/*
 * XREFs of ?SetStartTrigger@CAnimatedTransitionVisual@@UEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x180078C10
 * Callers:
 *     ?SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z @ 0x18008DFD0 (-SetStartTrigger@CStoryboard@@QEAAXPEAVCAnimationTriggerProxy@@@Z.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x18007ACA4 (-SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::SetStartTrigger(
        CAnimatedTransitionVisual *this,
        struct CAnimationTriggerProxy *a2)
{
  int v2; // r8d
  CAnimatedTransitionVisual *v3; // r9
  unsigned int v4; // r11d
  CAnimationResource **v5; // r10
  unsigned int v6; // r8d

  v2 = 0;
  v3 = this;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 82) )
    {
      return (unsigned int)-2147024891;
    }
    else
    {
      v4 = 0;
      v5 = (CAnimationResource **)((char *)this + 552);
      do
      {
        if ( v2 < 0 )
          break;
        if ( *v5 )
          v2 = CAnimationResource::SetTrigger(*v5, a2);
        ++v4;
        ++v5;
      }
      while ( v4 < 7 );
      *((_QWORD *)v3 + 82) = a2;
      CBaseObject::AddRef(a2);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v6;
}
