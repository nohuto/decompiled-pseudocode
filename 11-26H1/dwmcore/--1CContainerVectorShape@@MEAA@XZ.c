/*
 * XREFs of ??1CContainerVectorShape@@MEAA@XZ @ 0x1801B033C
 * Callers:
 *     ??_ECShapeTree@@UEAAPEAXI@Z @ 0x1801B02F0 (--_ECShapeTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x18019DEE0 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ??$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18019F918 (--$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocato.c)
 */

void __fastcall CContainerVectorShape::~CContainerVectorShape(struct CResource ***this)
{
  *this = (struct CResource **)&CContainerVectorShape::`vftable';
  CResource::UnRegisterNotifiers<CTransform,1>((CResource *)this, this + 13);
  std::vector<CDataSourceReader *>::_Tidy((__int64)(this + 13));
  CVectorShape::~CVectorShape((struct CResource **)this);
}
