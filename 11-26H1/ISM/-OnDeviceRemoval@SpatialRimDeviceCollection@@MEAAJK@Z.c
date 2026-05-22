/*
 * XREFs of ?OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z @ 0x1800D70F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z @ 0x1800473A8 (--0SpatialRimDeviceCollectionCallbacks@@QEAA@PEAVSpatialRimDeviceCollection@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ @ 0x180098274 (--1SpatialRimDeviceCollectionCallbacks@@UEAA@XZ.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800DFC70 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::OnDeviceRemoval(SpatialRimDeviceCollection *this, unsigned int a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  int v8; // eax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)this + 354) )
  {
    SpatialRimDeviceCollectionCallbacks::SpatialRimDeviceCollectionCallbacks(
      (SpatialRimDeviceCollectionCallbacks *)v10,
      this);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 354) + 56LL))(
           *((_QWORD *)this + 354),
           a2,
           v10);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x263,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v4);
    SpatialRimDeviceCollectionCallbacks::~SpatialRimDeviceCollectionCallbacks(
      (SpatialRimDeviceCollectionCallbacks *)v10,
      v5,
      v6,
      v7);
  }
  v8 = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x267,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v8);
  return 0LL;
}
