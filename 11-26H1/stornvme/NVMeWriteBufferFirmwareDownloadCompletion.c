/*
 * XREFs of NVMeWriteBufferFirmwareDownloadCompletion @ 0x1400208A0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeIceConfigureSrbExclusionAddress @ 0x1400317D4 (NVMeIceConfigureSrbExclusionAddress.c)
 */

__int64 __fastcall NVMeWriteBufferFirmwareDownloadCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rsi
  __int64 v5; // r9
  _QWORD *v6; // rbx
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  v6 = (_QWORD *)(SrbExtension + 4176);
  if ( (*(_DWORD *)(a1 + 56) & 8) != 0 || !*v6 )
  {
    *(_DWORD *)v6 = 0;
  }
  else
  {
    StorPortExtendedFunction(1LL, a1, *v6, v5);
    *v6 = 0LL;
  }
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  result = *(unsigned int *)(a1 + 4344);
  if ( (result & 4) != 0 )
    return NVMeIceConfigureSrbExclusionAddress(a1, a2, 0LL);
  return result;
}
