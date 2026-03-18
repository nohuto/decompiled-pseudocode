/*
 * XREFs of BiIsWinPEBoot @ 0x1409D2888
 * Callers:
 *     BcdCloseStore @ 0x1409D0088 (BcdCloseStore.c)
 *     BiCleanupLoadedStores @ 0x1409D3368 (BiCleanupLoadedStores.c)
 * Callees:
 *     wcsstr @ 0x140538480 (wcsstr.c)
 *     BiGetRegistryValue @ 0x1409D5CD4 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

bool BiIsWinPEBoot()
{
  char v0; // di
  wchar_t *v2; // rbx
  int v3; // [rsp+40h] [rbp+8h] BYREF
  wchar_t *Str; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  Str = 0LL;
  v3 = 0;
  if ( (int)BiGetRegistryValue(
              0LL,
              L"SystemStartOptions",
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
              1LL,
              &Str,
              &v3) >= 0 )
  {
    v2 = wcsstr(Str, L"MININT");
    ExFreePoolWithTag(Str, 0x4B444342u);
    return v2 != 0LL;
  }
  return v0;
}
