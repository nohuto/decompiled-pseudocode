/*
 * XREFs of ??1CSid@ATL@@UEAA@XZ @ 0x18001DEF0
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18001C708 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001D3E0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x18004A5B0 (--_GCSid@ATL@@UEAAPEAXI@Z.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$3 @ 0x18004D27F (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$3.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$0 @ 0x18004D2F0 (_ATL--CDacl--Copy_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CSid::~CSid(ATL::CSid *this)
{
  __int64 v1; // rdx
  volatile signed __int32 *v3; // rdx
  volatile signed __int32 *v4; // rdx
  volatile signed __int32 *v5; // rdx
  volatile signed __int32 *v6; // rdx

  v1 = *((_QWORD *)this + 14);
  *(_QWORD *)this = &ATL::CSid::`vftable';
  v3 = (volatile signed __int32 *)(v1 - 24);
  if ( _InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
  v4 = (volatile signed __int32 *)(*((_QWORD *)this + 13) - 24LL);
  if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
  v5 = (volatile signed __int32 *)(*((_QWORD *)this + 12) - 24LL);
  if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
  v6 = (volatile signed __int32 *)(*((_QWORD *)this + 11) - 24LL);
  if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6);
}
