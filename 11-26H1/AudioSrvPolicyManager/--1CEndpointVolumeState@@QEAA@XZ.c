/*
 * XREFs of ??1CEndpointVolumeState@@QEAA@XZ @ 0x180048668
 * Callers:
 *     ??1?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA@XZ @ 0x180048638 (--1-$unique_ptr@VCEndpointVolumeState@@U-$default_delete@VCEndpointVolumeState@@@std@@@std@@QEAA.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CEndpointVolumeState::~CEndpointVolumeState(CEndpointVolumeState *this)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)((char *)this + 24);
  if ( *((_BYTE *)this + 32) )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)*v1 + 240LL))(*v1, (char *)this + 40);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v1);
}
