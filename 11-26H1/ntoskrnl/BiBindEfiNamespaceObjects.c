/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x1409A4844
 * Callers:
 *     BiOpenSystemStore @ 0x1409A53B4 (BiOpenSystemStore.c)
 * Callees:
 *     BiBindEfiEntries @ 0x1409A0C88 (BiBindEfiEntries.c)
 *     BiFreeIdentifierList @ 0x1409A38EC (BiFreeIdentifierList.c)
 *     BiBindEfiBootManager @ 0x1409A3C40 (BiBindEfiBootManager.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiBuildIdentifierList @ 0x1409A5E6C (BiBuildIdentifierList.c)
 */

__int64 __fastcall BiBindEfiNamespaceObjects(HANDLE BcdStoreHandle)
{
  int v2; // ebx
  GUID *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Binding EFI namespace objects");
  v4[1] = (GUID *)v4;
  v4[0] = (GUID *)v4;
  v2 = BiBuildIdentifierList(BcdStoreHandle);
  if ( v2 < 0
    || (v2 = BiBindEfiEntries(BcdStoreHandle, v4), v2 < 0)
    || (v2 = BiBindEfiBootManager(BcdStoreHandle, (__int64)v4), v2 < 0) )
  {
    BiLogMessage(4LL, L"BiBindEfiNamespaceObjects failed %x", (unsigned int)v2);
  }
  BiFreeIdentifierList(v4);
  return (unsigned int)v2;
}
