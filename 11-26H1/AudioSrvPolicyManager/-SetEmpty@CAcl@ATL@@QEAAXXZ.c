/*
 * XREFs of ?SetEmpty@CAcl@ATL@@QEAAXXZ @ 0x18004AA84
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001C708 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002E3D0 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CAcl::SetEmpty(ATL::CAcl *this)
{
  (*(void (__fastcall **)(ATL::CAcl *))(*(_QWORD *)this + 16LL))(this);
  *((_BYTE *)this + 16) = 0;
}
