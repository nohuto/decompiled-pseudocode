/*
 * XREFs of bSetRegDWORDValue @ 0x140216B54
 * Callers:
 *     SaveDisabledKIRListToReg @ 0x14026E308 (SaveDisabledKIRListToReg.c)
 *     bSetFntCacheReg @ 0x14026ECE0 (bSetFntCacheReg.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bSetRegDWORDValue(HANDLE KeyHandle, const WCHAR *a2, int a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+60h] [rbp+18h] BYREF

  Data = a3;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u) >= 0;
}
