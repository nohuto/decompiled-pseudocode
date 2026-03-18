/*
 * XREFs of BiBindEfiNamespaceObjects @ 0x1409D3864
 * Callers:
 *     BiOpenSystemStore @ 0x1409D43D4 (BiOpenSystemStore.c)
 * Callees:
 *     BiBindEfiEntries @ 0x1409CFCA8 (BiBindEfiEntries.c)
 *     BiFreeIdentifierList @ 0x1409D290C (BiFreeIdentifierList.c)
 *     BiBindEfiBootManager @ 0x1409D2C60 (BiBindEfiBootManager.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 *     BiBuildIdentifierList @ 0x1409D4E8C (BiBuildIdentifierList.c)
 */

__int64 __fastcall BiBindEfiNamespaceObjects(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  GUID *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  BiLogMessage(2LL, L"Binding EFI namespace objects");
  v5[1] = (GUID *)v5;
  v5[0] = (GUID *)v5;
  v3 = BiBuildIdentifierList(a1, v2, v5);
  if ( v3 < 0 || (v3 = BiBindEfiEntries(a1, v5), v3 < 0) || (v3 = BiBindEfiBootManager(a1, (__int64)v5), v3 < 0) )
    BiLogMessage(4LL, L"BiBindEfiNamespaceObjects failed %x", (unsigned int)v3);
  BiFreeIdentifierList(v5);
  return (unsigned int)v3;
}
