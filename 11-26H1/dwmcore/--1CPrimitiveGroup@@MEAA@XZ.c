/*
 * XREFs of ??1CPrimitiveGroup@@MEAA@XZ @ 0x180200284
 * Callers:
 *     ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x1801B70F0 (--_ECPrimitiveGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ @ 0x180024CE4 (-_Tidy@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x1800AEB40 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18018E608 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@PEAVCPrimitiveColor@@V?$allocator@PEAVCPrimitiveColor@@@std@@@std@@AEAAXXZ @ 0x180200214 (-_Tidy@-$vector@PEAVCPrimitiveColor@@V-$allocator@PEAVCPrimitiveColor@@@std@@@std@@AEAAXXZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180200344 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1802003AC (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroup::~CPrimitiveGroup(CPrimitiveGroup *this)
{
  __int64 v2; // rcx
  CResource *v3; // rcx

  *(_QWORD *)this = &CPrimitiveGroup::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CPrimitiveGroup::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CPrimitiveGroup::`vftable'{for `IDirtyRectSource'};
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  CPrimitiveGroup::ReleaseSurfaceResources(this);
  CPrimitiveGroup::ReleaseColorResources(this);
  v3 = (CResource *)*((_QWORD *)this + 31);
  if ( v3 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v3);
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 11));
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 12));
  CPrimitiveGroup::ReleaseHeatMap(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 184);
  std::vector<CPrimitiveColor *>::_Tidy((__int64)this + 160);
  std::vector<CLight *>::_Tidy((__int64)this + 136);
  CResource::~CResource(this);
}
