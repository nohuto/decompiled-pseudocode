/*
 * XREFs of BiDeleteRegistryValue @ 0x140775BE0
 * Callers:
 *     BiMarkTreatAsSystemStore @ 0x1409CFFAC (BiMarkTreatAsSystemStore.c)
 *     BiSetFirmwareModified @ 0x1409D4920 (BiSetFirmwareModified.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140724FD0 (ZwDeleteValueKey.c)
 *     BiOpenKey @ 0x1409D5F14 (BiOpenKey.c)
 */

__int64 __fastcall BiDeleteRegistryValue(__int64 a1, const WCHAR *a2, void *a3)
{
  HANDLE v4; // rsi
  NTSTATUS v5; // edi
  UNICODE_STRING ValueName; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  KeyHandle = a3;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  v4 = (HANDLE)(a1 & 0xFFFFFFFFFFFFFFFDuLL);
  KeyHandle = 0LL;
  v5 = BiOpenKey(v4, L"Description", 131103LL, &KeyHandle);
  if ( v5 >= 0 )
    v5 = ZwDeleteValueKey(KeyHandle, &ValueName);
  if ( KeyHandle != v4 && KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
