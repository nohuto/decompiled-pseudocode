/*
 * XREFs of BiSetRegistryValue @ 0x1409A57C0
 * Callers:
 *     BiSaveFirmwareVariable @ 0x14077DAE0 (BiSaveFirmwareVariable.c)
 *     BcdMarkAsSystemStore @ 0x140897440 (BcdMarkAsSystemStore.c)
 *     BiMarkTreatAsSystemStore @ 0x1409A0F8C (BiMarkTreatAsSystemStore.c)
 *     BcdSetElementDataWithFlags @ 0x1409A40A4 (BcdSetElementDataWithFlags.c)
 *     BiAddStoreFromFile @ 0x1409A458C (BiAddStoreFromFile.c)
 *     BiSetFirmwareModified @ 0x1409A5900 (BiSetFirmwareModified.c)
 *     BiSetObjectDescription @ 0x140B56BF0 (BiSetObjectDescription.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140D08264 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 */

__int64 __fastcall BiSetRegistryValue(
        unsigned __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        ULONG a4,
        PVOID Data,
        ULONG DataSize)
{
  unsigned int i; // esi
  NTSTATUS v11; // edi
  HANDLE KeyHandle; // [rsp+38h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF

  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    a1 &= ~2uLL;
    KeyHandle = 0LL;
    if ( a3 )
    {
      v11 = BiOpenKey(a1, a3, 131103LL, &KeyHandle);
      if ( v11 < 0 )
        goto LABEL_5;
    }
    else
    {
      KeyHandle = (HANDLE)a1;
    }
    v11 = ZwSetValueKey(KeyHandle, &DestinationString, 0, a4, Data, DataSize);
LABEL_5:
    if ( KeyHandle != (HANDLE)a1 && KeyHandle )
      BiCloseKey(KeyHandle);
    if ( v11 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v11;
}
