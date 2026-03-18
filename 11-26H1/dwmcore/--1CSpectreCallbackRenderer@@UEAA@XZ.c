/*
 * XREFs of ??1CSpectreCallbackRenderer@@UEAA@XZ @ 0x18025A6E4
 * Callers:
 *     ??_GCSpectreCallbackRenderer@@UEAAPEAXI@Z @ 0x18025A720 (--_GCSpectreCallbackRenderer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ @ 0x180024CE4 (-_Tidy@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CSpectreCallbackRenderer::~CSpectreCallbackRenderer(CSpectreCallbackRenderer *this)
{
  std::vector<CLight *>::_Tidy((__int64)this + 120);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
}
