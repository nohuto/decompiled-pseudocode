/*
 * XREFs of ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x1801D883C
 * Callers:
 *     ??_ECProjectedShadowReceiver@@MEAAPEAXI@Z @ 0x1801D87F0 (--_ECProjectedShadowReceiver@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5338 (-InternalRelease@-$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18021A20C (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CProjectedShadowReceiver::~CProjectedShadowReceiver(CProjectedShadowReceiver *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CProjectedShadowReceiver::`vftable';
  CProjectedShadowReceiver::SetReceivingVisual(this, 0LL);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 14));
  Microsoft::WRL::ComPtr<CShadowMaskProducer>::InternalRelease((volatile signed __int32 **)this + 15);
  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 12) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  CResource::~CResource(this);
}
