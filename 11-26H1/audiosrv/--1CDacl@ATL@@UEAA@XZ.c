/*
 * XREFs of ??1CDacl@ATL@@UEAA@XZ @ 0x1800ABC5C
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180072AF0 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ??_ECDacl@ATL@@UEAAPEAXI@Z @ 0x1800B8BE0 (--_ECDacl@ATL@@UEAAPEAXI@Z.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$1 @ 0x1801663EF (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$1.c)
 * Callees:
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180072E70 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 *     ??1?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA@XZ @ 0x1800ABCA4 (--1-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@CDa.c)
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
