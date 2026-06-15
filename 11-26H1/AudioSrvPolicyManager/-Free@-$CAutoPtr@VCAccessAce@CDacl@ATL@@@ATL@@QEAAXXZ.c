/*
 * XREFs of ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180020180
 * Callers:
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x18001FEB0 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002E3D0 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}
