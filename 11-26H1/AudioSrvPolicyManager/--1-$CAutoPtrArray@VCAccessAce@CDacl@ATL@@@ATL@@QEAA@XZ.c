/*
 * XREFs of ??1?$CAutoPtrArray@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x18002DCE8
 * Callers:
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$7 @ 0x18004D2A3 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAutoPtrArray<ATL::CDacl::CAccessAce>::~CAutoPtrArray<ATL::CDacl::CAccessAce>(__int64 a1)
{
  return ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::~CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>(a1);
}
