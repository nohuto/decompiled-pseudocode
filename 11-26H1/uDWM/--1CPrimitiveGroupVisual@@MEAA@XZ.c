/*
 * XREFs of ??1CPrimitiveGroupVisual@@MEAA@XZ @ 0x180065DCC
 * Callers:
 *     ??_ECPrimitiveGroupVisual@@MEAAPEAXI@Z @ 0x180065D80 (--_ECPrimitiveGroupVisual@@MEAAPEAXI@Z.c)
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x180081BA4 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ??_ECThumbnailAnimatedVisual@@UEAAPEAXI@Z @ 0x1800C9530 (--_ECThumbnailAnimatedVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1CGraphicsResourceOwner@@IEAA@XZ @ 0x18001B464 (--1CGraphicsResourceOwner@@IEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005DC2C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 *     ?RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ @ 0x1800881CC (-RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ.c)
 */

void __fastcall CPrimitiveGroupVisual::~CPrimitiveGroupVisual(CPrimitiveGroupVisual *this)
{
  CGraphicsResourceOwner *v2; // rdi
  CBaseObject **v3; // rcx

  *(_QWORD *)this = &CPrimitiveGroupVisual::`vftable'{for `CCanvasVisual'};
  v2 = (CPrimitiveGroupVisual *)((char *)this + 184);
  *((_QWORD *)this + 23) = &CPrimitiveGroupVisual::`vftable'{for `CGraphicsResourceOwner'};
  CPrimitiveGroupVisual::RemoveAllPrimitives(this);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 29);
  v3 = (CBaseObject **)*((_QWORD *)this + 26);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(
      v3,
      *((CBaseObject ***)this + 27));
    std::_Deallocate<16>(
      *((void **)this + 26),
      (*((_QWORD *)this + 28) - *((_QWORD *)this + 26)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
  }
  CGraphicsResourceOwner::~CGraphicsResourceOwner(v2);
  CContainerVisual::~CContainerVisual(this);
}
