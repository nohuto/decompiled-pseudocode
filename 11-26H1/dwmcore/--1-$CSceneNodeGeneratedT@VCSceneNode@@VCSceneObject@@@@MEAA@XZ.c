/*
 * XREFs of ??1?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@MEAA@XZ @ 0x180281284
 * Callers:
 *     ??1CSceneNode@@MEAA@XZ @ 0x180281340 (--1CSceneNode@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18019F918 (--$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocato.c)
 */

void __fastcall CSceneNodeGeneratedT<CSceneNode,CSceneObject>::~CSceneNodeGeneratedT<CSceneNode,CSceneObject>(
        CResource *this)
{
  void **v2; // rbx

  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
  v2 = (void **)((char *)this + 80);
  *((_QWORD *)this + 9) = 0LL;
  CResource::UnRegisterNotifiers<CTransform,1>(this, (struct CResource ***)this + 10);
  CResource::UnRegisterNotifiers<CTransform,1>(this, (struct CResource ***)this + 13);
  if ( *((_QWORD *)this + 13) )
  {
    std::_Deallocate<16>(
      *((void **)this + 13),
      (*((_QWORD *)this + 15) - *((_QWORD *)this + 13)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( *v2 )
  {
    std::_Deallocate<16>(*v2, (*((_QWORD *)this + 12) - (_QWORD)*v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *v2 = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  CResource::~CResource(this);
}
