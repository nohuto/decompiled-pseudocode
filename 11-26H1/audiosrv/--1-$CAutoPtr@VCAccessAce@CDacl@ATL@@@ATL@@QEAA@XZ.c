/*
 * XREFs of ??1?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x1800B1220
 * Callers:
 *     _ATL::CDacl::AddAllowedAce_::_1_::dtor$0 @ 0x1801664BE (_ATL--CDacl--AddAllowedAce_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAutoPtr<ATL::CDacl::CAccessAce>::~CAutoPtr<ATL::CDacl::CAccessAce>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  return ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(a1);
}
