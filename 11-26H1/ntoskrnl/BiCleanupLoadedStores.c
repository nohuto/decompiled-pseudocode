/*
 * XREFs of BiCleanupLoadedStores @ 0x1409A4348
 * Callers:
 *     BiOpenSystemStore @ 0x1409A53B4 (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     wcstoul @ 0x14053AE50 (wcstoul.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     BiIsSystemStore @ 0x1409A1114 (BiIsSystemStore.c)
 *     BiUnloadHiveByHandle @ 0x1409A12A4 (BiUnloadHiveByHandle.c)
 *     BiEnumerateSubKeys @ 0x1409A2660 (BiEnumerateSubKeys.c)
 *     BiIsWinPEBoot @ 0x1409A3868 (BiIsWinPEBoot.c)
 *     BiOpenKeyNonBcd @ 0x1409A447C (BiOpenKeyNonBcd.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 *     BcdForciblyUnloadStore @ 0x140B6D9BC (BcdForciblyUnloadStore.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall BiCleanupLoadedStores(char a1)
{
  bool IsWinPEBoot; // r13
  const wchar_t **v3; // rdi
  __int64 v4; // r15
  bool IsSystemStore; // al
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF
  ULONG v7; // [rsp+68h] [rbp+38h] BYREF
  HANDLE BcdStoreHandle; // [rsp+70h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  BcdStoreHandle = 0LL;
  v7 = 0;
  P[0] = 0LL;
  Handle = 0LL;
  IsWinPEBoot = BiIsWinPEBoot();
  if ( (int)BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle) >= 0 )
  {
    if ( (int)BiEnumerateSubKeys((unsigned __int64)Handle, P, &v7) >= 0 && v7 )
    {
      v3 = (const wchar_t **)P[0];
      v4 = v7;
      do
      {
        if ( !wcsnicmp(*v3, L"BCD", 3uLL)
          && wcstoul(*v3 + 3, 0LL, 10) != -1
          && (int)BiOpenKey(Handle, *v3, 131097LL, &BcdStoreHandle) >= 0 )
        {
          IsSystemStore = BiIsSystemStore((__int64)BcdStoreHandle);
          if ( (a1 & 0x10) != 0 && IsSystemStore )
          {
            BcdForciblyUnloadStore(BcdStoreHandle);
          }
          else if ( (a1 & 8) != 0 || IsWinPEBoot || !IsSystemStore )
          {
            BiUnloadHiveByHandle(BcdStoreHandle, 0);
          }
          else
          {
            BiCloseKey(BcdStoreHandle);
          }
        }
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    if ( P[0] )
      ExFreePoolWithTag(P[0], 0x4B444342u);
  }
  if ( Handle )
    ZwClose(Handle);
}
