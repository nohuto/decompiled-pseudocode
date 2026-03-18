/*
 * XREFs of BiGetDefaultBootEntryIdentifier @ 0x1408911E4
 * Callers:
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     BcdGetElementData @ 0x1409D4B60 (BcdGetElementData.c)
 *     BcdCloseObject @ 0x1409D4E38 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 */

__int64 __fastcall BiGetDefaultBootEntryIdentifier(__int64 a1, _OWORD *a2)
{
  int ElementData; // ebx
  int v5; // [rsp+20h] [rbp-38h] BYREF
  HANDLE v6; // [rsp+28h] [rbp-30h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  ElementData = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &v6);
  if ( ElementData >= 0 )
  {
    v5 = 16;
    ElementData = BcdGetElementData(v6, 587202563LL, &v7, &v5);
    if ( ElementData >= 0 )
      *a2 = v7;
  }
  if ( v6 )
    BcdCloseObject(v6);
  return (unsigned int)ElementData;
}
