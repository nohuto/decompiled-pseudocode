/*
 * XREFs of ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x1800506C0
 * Callers:
 *     ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x1800505FC (-AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateAnimationProxy@CCompositor@@QEAAJPEAPEAVCAnimationProxy@@@Z @ 0x180084104 (-CreateAnimationProxy@CCompositor@@QEAAJPEAPEAVCAnimationProxy@@@Z.c)
 *     ?UpdatePrimitives@CAnimationProxy@@QEAAJPEBUDwmAnimationPrimitive@@I@Z @ 0x1800891C4 (-UpdatePrimitives@CAnimationProxy@@QEAAJPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?SetTrigger@CAnimationProxy@@QEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x180099CF4 (-SetTrigger@CAnimationProxy@@QEAAJPEAVCAnimationTriggerProxy@@@Z.c)
 *     ?UpdateBeginTime@CAnimationProxy@@QEAAJ_K0@Z @ 0x180099D18 (-UpdateBeginTime@CAnimationProxy@@QEAAJ_K0@Z.c)
 */

__int64 __fastcall CAnimationResource::_EnsureResources(CAnimationResource *this)
{
  int AnimationProxy; // ebx
  CAnimationProxy **v2; // rsi
  unsigned __int64 v4; // r8
  unsigned int v5; // eax
  struct CAnimationTriggerProxy *v6; // rdx

  AnimationProxy = 0;
  v2 = (CAnimationProxy **)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    return (unsigned int)AnimationProxy;
  AnimationProxy = CCompositor::CreateAnimationProxy(
                     *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                     (struct CAnimationProxy **)this + 1);
  if ( AnimationProxy < 0 )
  {
    v5 = 303;
  }
  else
  {
    if ( *((_BYTE *)this + 65) )
    {
      AnimationProxy = CAnimationProxy::UpdateBeginTime(*v2, *((_QWORD *)this + 7), v4);
      if ( AnimationProxy < 0 )
      {
        v5 = 307;
        goto LABEL_12;
      }
LABEL_9:
      AnimationProxy = CAnimationProxy::UpdatePrimitives(
                         *v2,
                         *((const struct DwmAnimationPrimitive **)this + 3),
                         *((_DWORD *)this + 12));
      if ( AnimationProxy >= 0 )
        return (unsigned int)AnimationProxy;
      v5 = 315;
      goto LABEL_12;
    }
    v6 = (struct CAnimationTriggerProxy *)*((_QWORD *)this + 11);
    if ( !v6 )
      goto LABEL_9;
    AnimationProxy = CAnimationProxy::SetTrigger(*v2, v6);
    if ( AnimationProxy >= 0 )
      goto LABEL_9;
    v5 = 311;
  }
LABEL_12:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AnimationProxy, v5, 0LL);
  if ( *v2 )
  {
    CBaseObject::Release(*v2);
    *v2 = 0LL;
  }
  return (unsigned int)AnimationProxy;
}
