/*
 * XREFs of ??1CDacl@ATL@@UEAA@XZ @ 0x18002DCA0
 * Callers:
 *     ??_ECDacl@ATL@@UEAAPEAXI@Z @ 0x18004A520 (--_ECDacl@ATL@@UEAAPEAXI@Z.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$1 @ 0x18004D25B (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$1.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$2 @ 0x18004D26D (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$2.c)
 * Callees:
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x18001D360 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ??1?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA@XZ @ 0x18002DCF4 (--1-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@CDa.c)
 */

void __fastcall ATL::CDacl::~CDacl(ATL::CDacl *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &ATL::CDacl::`vftable';
  ATL::CDacl::RemoveAllAces(this);
  ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::~CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>((char *)this + 24);
  v2 = (void *)*((_QWORD *)this + 1);
  *(_QWORD *)this = &ATL::CAcl::`vftable';
  free(v2);
}
