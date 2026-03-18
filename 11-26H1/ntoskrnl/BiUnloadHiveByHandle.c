/*
 * XREFs of BiUnloadHiveByHandle @ 0x1409D02C4
 * Callers:
 *     BiCloseStore @ 0x1409D022C (BiCloseStore.c)
 *     BiCleanupLoadedStores @ 0x1409D3368 (BiCleanupLoadedStores.c)
 *     BcdForciblyUnloadStore @ 0x140B6A7AC (BcdForciblyUnloadStore.c)
 * Callees:
 *     BiUnloadHiveByName @ 0x1409D0360 (BiUnloadHiveByName.c)
 *     BiGetRegistryValue @ 0x1409D5CD4 (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x1409D6368 (BiCloseKey.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUnloadHiveByHandle(HANDLE Handle, char a2)
{
  int RegistryValue; // edi
  __int64 v5; // r8
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  P = 0LL;
  RegistryValue = BiGetRegistryValue(Handle, L"KeyName", L"Description", 1LL, &P, &v8);
  BiCloseKey(Handle);
  if ( RegistryValue < 0 )
    return (unsigned int)RegistryValue;
  LOBYTE(v5) = a2;
  v6 = BiUnloadHiveByName(P, v8, v5);
  ExFreePoolWithTag(P, 0x4B444342u);
  return v6;
}
