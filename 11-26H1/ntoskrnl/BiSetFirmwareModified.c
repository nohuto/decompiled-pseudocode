/*
 * XREFs of BiSetFirmwareModified @ 0x1409A5900
 * Callers:
 *     BcdCreateObject @ 0x140777E00 (BcdCreateObject.c)
 *     BiCloseStore @ 0x1409A120C (BiCloseStore.c)
 *     BiBindEfiBootManager @ 0x1409A3C40 (BiBindEfiBootManager.c)
 *     BiOpenSystemStore @ 0x1409A53B4 (BiOpenSystemStore.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1409A594C (BiSetFirmwareModifiedFromObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x140778A88 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x1409A57C0 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(unsigned __int64 a1, char a2, void *a3)
{
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 1;
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", (__int64)L"Description", 4u, &v4, 4u);
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", a3);
}
