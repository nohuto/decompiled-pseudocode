/*
 * XREFs of KiValidateComponentName @ 0x1405EB48C
 * Callers:
 *     IopLiveDumpAddTriageDumpData @ 0x1405CEF80 (IopLiveDumpAddTriageDumpData.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405EAF24 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     RtlStringCbLengthA @ 0x14059A6E8 (RtlStringCbLengthA.c)
 */

char __fastcall KiValidateComponentName(__int64 psz, _DWORD *a2)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  size_t pcbLength; // [rsp+40h] [rbp+18h] BYREF

  pcbLength = 0LL;
  if ( !MmIsAddressValidEx(psz) )
    return 0;
  v4 = psz & 0xFFFFFFFFFFFFF000uLL;
  v5 = 257;
  if ( psz - (psz & 0xFFFFFFFFFFFFF000uLL) > 0xEFF
    && (v4 + 4096 < v4 || v4 == -4096LL || !MmIsAddressValidEx(v4 + 4096)) )
  {
    v5 = v4 - psz + 4096;
  }
  if ( RtlStringCbLengthA((STRSAFE_PCNZCH)psz, v5, &pcbLength) < 0 )
    return 0;
  *a2 = pcbLength;
  return 1;
}
