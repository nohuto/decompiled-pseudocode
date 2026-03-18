/*
 * XREFs of ??1?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x180216E38
 * Callers:
 *     ??1CAnimationTrigger@@UEAA@XZ @ 0x180216E10 (--1CAnimationTrigger@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?_Tidy@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ @ 0x180024CE4 (-_Tidy@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ.c)
 *     ??$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18019F918 (--$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocato.c)
 */

void __fastcall CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::~CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>(
        CResource *this)
{
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  CResource::UnRegisterNotifiers<CTransform,1>(this, (struct CResource ***)this + 13);
  std::vector<CLight *>::_Tidy((__int64)this + 104);
  CResource::~CResource(this);
}
