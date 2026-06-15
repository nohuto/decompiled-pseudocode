/*
 * XREFs of ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002E3D0
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001C708 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x18001DCE0 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x18001DFB0 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     ?IsValid@CSid@ATL@@QEBA_NXZ @ 0x18001E2E0 (-IsValid@CSid@ATL@@QEBA_NXZ.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180020180 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetEmpty@CAcl@ATL@@QEAAXXZ @ 0x18004AA84 (-SetEmpty@CAcl@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall ATL::CDacl::AddAllowedAce(ATL::CDacl *this, const struct ATL::CSid *a2)
{
  ATL::CDacl *v3; // rbx
  bool result; // al
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rax
  __int64 (__fastcall ***v6[3])(_QWORD, __int64); // [rsp+30h] [rbp-18h] BYREF

  v3 = this;
  result = ATL::CSid::IsValid(a2);
  if ( result )
  {
    if ( *((_BYTE *)v3 + 16) )
      ATL::CAcl::SetEmpty(v3);
    v6[0] = 0LL;
    v5 = (__int64 (__fastcall ***)(_QWORD, __int64))operator new(0x98uLL);
    try
    {
      v6[1] = v5;
      if ( v5 )
        v5 = (__int64 (__fastcall ***)(_QWORD, __int64))ATL::CDacl::CAccessAce::CAccessAce(
                                                          (ATL::CDacl::CAccessAce *)v5,
                                                          a2,
                                                          0x10000000,
                                                          0,
                                                          1);
      v6[0] = v5;
    }
    catch ( ... )
    {
      v3 = this;
      v5 = v6[0];
    }
    if ( !v5 )
      ATL::AtlThrowImpl(-2147024882);
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
      (__int64)v3 + 24,
      (__int64 *)v6);
    free(*((void **)v3 + 1));
    *((_QWORD *)v3 + 1) = 0LL;
    ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(v6);
    return 1;
  }
  return result;
}
