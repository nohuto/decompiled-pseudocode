/*
 * XREFs of ?SetContent@CContainerVisual@@UEAAJPEAVCResourceProxy@@@Z @ 0x180007A60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetContent@CContainerVisualProxy@@QEAAJPEBVCResourceProxy@@@Z @ 0x180007AF4 (-SetContent@CContainerVisualProxy@@QEAAJPEBVCResourceProxy@@@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CContainerVisual::SetContent(CContainerVisual *this, struct CResourceProxy *a2)
{
  struct CResourceProxy *v4; // rcx
  __int64 result; // rax
  unsigned int v6; // ebx

  v4 = (struct CResourceProxy *)*((_QWORD *)this + 24);
  if ( v4 == a2 )
    return 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  *((_QWORD *)this + 24) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
  result = CContainerVisualProxy::SetContent(
             *((CContainerVisualProxy **)this + 2),
             *((const struct CResourceProxy **)this + 24));
  v6 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x44u, 0LL);
    return v6;
  }
  return result;
}
