/*
 * XREFs of ?WriteWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@KAEAVRawUsageIndex@12@@Z @ 0x1800995C0
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180071FD8 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     wil_details_NtUpdateWnfStateData @ 0x1800A0214 (wil_details_NtUpdateWnfStateData.c)
 */

char __fastcall wil::details_abi::WriteWnfUsageBuffer(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        struct wil::details_abi::RawUsageIndex *a4)
{
  int v5; // edi
  int updated; // eax
  int v7; // r9d

  v5 = (int)this;
  if ( *(_BYTE *)(a3 + 56) )
  {
    updated = wil_details_NtUpdateWnfStateData(
                (_DWORD)this,
                *(_QWORD *)(a3 + 24),
                *(_DWORD *)(a3 + 32) - *(_DWORD *)(a3 + 24),
                (_DWORD)a4);
    if ( updated == -1073741823 )
      return 0;
    if ( updated )
      wil_details_NtUpdateWnfStateData(v5, *(_QWORD *)(a3 + 24), *(_DWORD *)(a3 + 32) - *(_DWORD *)(a3 + 24), v7);
  }
  return 1;
}
