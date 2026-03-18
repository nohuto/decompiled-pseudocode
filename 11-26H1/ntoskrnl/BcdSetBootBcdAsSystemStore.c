/*
 * XREFs of BcdSetBootBcdAsSystemStore @ 0x140D01EC4
 * Callers:
 *     CmpSetSystemValues @ 0x140CEBA30 (CmpSetSystemValues.c)
 * Callees:
 *     BcdSetSystemStore @ 0x1408910B8 (BcdSetSystemStore.c)
 *     BiOpenKeyNonBcd @ 0x1409D349C (BiOpenKeyNonBcd.c)
 *     BiSetRegistryValue @ 0x1409D47E0 (BiSetRegistryValue.c)
 *     BiOpenKey @ 0x1409D5F14 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409D6368 (BiCloseKey.c)
 */

__int64 BcdSetBootBcdAsSystemStore()
{
  int v0; // ebx
  HANDLE v2; // [rsp+40h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  Handle = 0LL;
  v0 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine\\BCD00000000", 0xF003Fu, &v2);
  if ( v0 >= 0 )
  {
    v0 = BiOpenKey((unsigned __int64)v2, L"Description", 0x2001Fu, &Handle);
    if ( v0 >= 0 )
    {
      v0 = BiSetRegistryValue((unsigned __int64)Handle, L"KeyName", 0LL, 1u, L"BCD00000000", 0x18u);
      if ( v0 >= 0 )
        v0 = BcdSetSystemStore((__int64)v2);
    }
    if ( Handle )
      BiCloseKey(Handle);
  }
  if ( v2 )
    BiCloseKey(v2);
  return (unsigned int)v0;
}
