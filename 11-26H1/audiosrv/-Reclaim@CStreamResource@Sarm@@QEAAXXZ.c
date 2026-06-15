/*
 * XREFs of ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x18005CE48
 * Callers:
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x18005CDC4 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 *     ??1CStreamResource@Sarm@@QEAA@XZ @ 0x180124848 (--1CStreamResource@Sarm@@QEAA@XZ.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180124C70 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x1801275D4 (-AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x180127C98 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CStreamResource::Reclaim(Sarm::CStreamResource *this)
{
  Sarm::CEndpointResourcePool *v2; // rcx
  _DWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  const char *v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (Sarm::CEndpointResourcePool *)*((_QWORD *)this + 1);
  v3 = (_DWORD *)((char *)this + 84);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 20) + *v3 )
    {
      Sarm::CEndpointResourcePool::AddToDynamicPool(v2, *((_DWORD *)this + 20) + *v3);
      *(_QWORD *)((char *)this + 76) = 0LL;
      *v3 = 0;
    }
    v4 = *((_QWORD *)this + 1);
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x2B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\EndpointResourcePool.h",
      (const char *)(*(_DWORD *)(v4 + 12) == 0),
      (bool)"Detaching from CEndpointResourcePool when nothing attached",
      v6);
    --*(_DWORD *)(v4 + 12);
    *((_QWORD *)this + 1) = 0LL;
  }
  v5 = *(_QWORD *)this;
  *(_QWORD *)this = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 5) = 0LL;
  *((GUID *)this + 1) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *v3 = 0;
  *((_BYTE *)this + 88) = 0;
}
