/*
 * XREFs of ??1ApoData@@QEAA@XZ @ 0x1800B6BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ApoData::~ApoData(ApoData *this)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 1);
}
