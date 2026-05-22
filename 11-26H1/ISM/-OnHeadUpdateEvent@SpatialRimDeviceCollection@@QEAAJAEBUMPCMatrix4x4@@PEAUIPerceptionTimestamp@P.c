/*
 * XREFs of ?OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800D72D0
 * Callers:
 *     ?OnHeadUpdateEvent@SpatialRimDeviceCollectionHeadEventHandler@@AEAAJXZ @ 0x18004B1B0 (-OnHeadUpdateEvent@SpatialRimDeviceCollectionHeadEventHandler@@AEAAJXZ.c)
 * Callees:
 *     ??0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z @ 0x1800473A8 (--0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x180098274 (--1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::OnHeadUpdateEvent(
        SpatialRimDeviceCollection *this,
        const struct MPCMatrix4x4 *a2,
        struct Windows::Perception::IPerceptionTimestamp *a3,
        struct Windows::Perception::IPerceptionTimestamp *a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  int v17[10]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_QWORD *)this + 354) )
  {
    SpatialRimDeviceCollectionCallbacks::SpatialRimDeviceCollectionCallbacks(
      (SpatialRimDeviceCollectionCallbacks *)v17,
      this);
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct MPCMatrix4x4 *, struct Windows::Perception::IPerceptionTimestamp *, struct Windows::Perception::IPerceptionTimestamp *, int *))(**((_QWORD **)this + 354) + 72LL))(
           *((_QWORD *)this + 354),
           a2,
           a3,
           a4,
           v17);
    v12 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x169,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v8);
      SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
        (SpatialRimDeviceCollectionCallbacks *)v17,
        v13,
        v14,
        v15);
      return v12;
    }
    SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
      (SpatialRimDeviceCollectionCallbacks *)v17,
      v9,
      v10,
      v11);
  }
  return 0LL;
}
