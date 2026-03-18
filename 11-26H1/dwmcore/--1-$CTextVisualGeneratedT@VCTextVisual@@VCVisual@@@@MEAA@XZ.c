/*
 * XREFs of ??1?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ @ 0x1802857DC
 * Callers:
 *     ??_ECTextVisual@@MEAAPEAXI@Z @ 0x1802858E0 (--_ECTextVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x18019F918 (--$UnRegisterNotifiers@VCTransform@@$00@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocato.c)
 */

void __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::~CTextVisualGeneratedT<CTextVisual,CVisual>(
        struct CResource ***this)
{
  char *v1; // rbx
  void **v3; // rdi

  v1 = (char *)(this + 84);
  CResource::UnRegisterNotifiers<CTransform,1>((CResource *)this, this + 84);
  v3 = (void **)(this + 87);
  CResource::UnRegisterNotifiers<CTransform,1>((CResource *)this, this + 87);
  CResource::UnRegisterNotifiers<CTransform,1>((CResource *)this, this + 90);
  if ( this[90] )
  {
    std::_Deallocate<16>(this[90], ((char *)this[92] - (char *)this[90]) & 0xFFFFFFFFFFFFFFF8uLL);
    this[90] = 0LL;
    this[91] = 0LL;
    this[92] = 0LL;
  }
  if ( *v3 )
  {
    std::_Deallocate<16>(*v3, ((char *)this[89] - (_BYTE *)*v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *v3 = 0LL;
    this[88] = 0LL;
    this[89] = 0LL;
  }
  if ( *(_QWORD *)v1 )
  {
    std::_Deallocate<16>(*(void **)v1, (*((_QWORD *)v1 + 2) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
    *((_QWORD *)v1 + 2) = 0LL;
  }
  CVisual::~CVisual((struct CResource **)this);
}
