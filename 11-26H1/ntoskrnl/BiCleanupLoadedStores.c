/*
 * XREFs of BiCleanupLoadedStores @ 0x1409D3368
 * Callers:
 *     BiOpenSystemStore @ 0x1409D43D4 (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x1405366B0 (_wcsnicmp.c)
 *     wcstoul @ 0x1405389D0 (wcstoul.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     BiIsSystemStore @ 0x1409D0134 (BiIsSystemStore.c)
 *     BiUnloadHiveByHandle @ 0x1409D02C4 (BiUnloadHiveByHandle.c)
 *     BiEnumerateSubKeys @ 0x1409D1680 (BiEnumerateSubKeys.c)
 *     BiIsWinPEBoot @ 0x1409D2888 (BiIsWinPEBoot.c)
 *     BiOpenKeyNonBcd @ 0x1409D349C (BiOpenKeyNonBcd.c)
 *     BiOpenKey @ 0x1409D5F14 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409D6368 (BiCloseKey.c)
 *     BcdForciblyUnloadStore @ 0x140B6A7AC (BcdForciblyUnloadStore.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall BiCleanupLoadedStores(char a1)
{
  bool IsWinPEBoot; // r13
  const wchar_t **v3; // rdi
  __int64 v4; // r15
  bool IsSystemStore; // al
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF
  ULONG v7; // [rsp+68h] [rbp+38h] BYREF
  HANDLE v8; // [rsp+70h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+48h] BYREF

  v8 = 0LL;
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
          && (int)BiOpenKey(Handle, *v3, 131097LL, &v8) >= 0 )
        {
          IsSystemStore = BiIsSystemStore((__int64)v8);
          if ( (a1 & 0x10) != 0 && IsSystemStore )
          {
            BcdForciblyUnloadStore(v8);
          }
          else if ( (a1 & 8) != 0 || IsWinPEBoot || !IsSystemStore )
          {
            BiUnloadHiveByHandle(v8, 0);
          }
          else
          {
            BiCloseKey(v8);
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
