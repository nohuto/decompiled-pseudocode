/*
 * XREFs of BiAddStoreFromFile @ 0x1409A458C
 * Callers:
 *     BiLoadSystemStore @ 0x1409A0DF0 (BiLoadSystemStore.c)
 * Callees:
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     BiDoesHiveKeyExist @ 0x14089915C (BiDoesHiveKeyExist.c)
 *     BiUnloadHiveByName @ 0x1409A1340 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x1409A1544 (BiLoadHive.c)
 *     BiSetRegistryValue @ 0x1409A57C0 (BiSetRegistryValue.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiCreateKey @ 0x1409A6848 (BiCreateKey.c)
 *     BiOpenKey @ 0x1409A6EF4 (BiOpenKey.c)
 *     BiCloseKey @ 0x1409A7258 (BiCloseKey.c)
 */

__int64 __fastcall BiAddStoreFromFile(__int64 a1, char a2, __int64 a3, HANDLE *a4)
{
  unsigned int v7; // r14d
  unsigned int i; // esi
  int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  HANDLE v12; // rsi
  int v13; // eax
  int v15; // eax
  const wchar_t *v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // [rsp+20h] [rbp-50h]
  __int64 v21; // [rsp+20h] [rbp-50h]
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  HANDLE v23; // [rsp+38h] [rbp-38h] BYREF
  HANDLE v24; // [rsp+40h] [rbp-30h] BYREF
  WCHAR Dst[12]; // [rsp+48h] [rbp-28h] BYREF

  v24 = 0LL;
  Handle = 0LL;
  v23 = 0LL;
  v7 = 0;
  if ( (a2 & 0x20) == 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i > 0x5F5E0FF )
        goto LABEL_4;
      swprintf_s(Dst, 0xCuLL, L"BCD%08d", i);
      v18 = BiLoadHive(Dst, a1, &Handle);
      v9 = v18;
      if ( v18 >= 0 )
        break;
      if ( v18 != -1073741790 )
      {
        v19 = 2;
        if ( v9 != -1073741809 )
          v19 = 4;
        BiLogMessage(v19, L"Failed to load hive into key %ws from %s. Status: %x", Dst, a1 + 12, v9);
        goto LABEL_5;
      }
      ++v7;
      if ( BiDoesHiveKeyExist(Dst) )
        v7 = 0;
      if ( v7 >= 0xA )
      {
        BiLogMessage(4LL, L"Too many unexplained failures. File: %s Last status: %x", a1 + 12, 3221225506LL);
        goto LABEL_5;
      }
    }
    BiLogMessage(2LL, L"Loaded hive at BCD%08d", i);
    if ( (a2 & 1) == 0 )
      goto LABEL_8;
    v15 = BiCreateKey(Handle, L"Objects", 131097LL, 0LL, &v23, 0LL);
    v9 = v15;
    if ( v15 >= 0 )
    {
      BiCloseKey(v23);
      v23 = 0LL;
      v15 = BiCreateKey(Handle, L"Description", 131097LL, 0LL, &v23, 0LL);
      v9 = v15;
      if ( v15 >= 0 )
      {
LABEL_8:
        v11 = BiOpenKey(Handle, L"Description", 131103LL, &v24);
        v12 = v24;
        v9 = v11;
        if ( v11 < 0 )
        {
          v17 = 4LL;
          if ( v11 == -1073741772 )
          {
            BiLogMessage(4LL, L"A valid store must have a description key.");
            v9 = -1073741476;
          }
          LODWORD(v20) = v9;
          BiLogMessage(
            v17,
            L"Failed to open description key for store. Store: %s StoreKey: %ws Status: %x",
            a1 + 12,
            Dst,
            v20);
        }
        else
        {
          v13 = BiSetRegistryValue(v24, L"KeyName", 0LL, 1LL, Dst, 24, Handle, v23);
          v9 = v13;
          if ( v13 >= 0 )
          {
            *a4 = Handle;
          }
          else
          {
            LODWORD(v21) = v13;
            BiLogMessage(
              4LL,
              L"Failed to set description key value. Store: %s StoreKey: %ws Status: %x",
              a1 + 12,
              Dst,
              v21);
          }
        }
        if ( v12 )
          BiCloseKey(v12);
LABEL_13:
        if ( v23 )
          BiCloseKey(v23);
        if ( v9 < 0 )
          goto LABEL_5;
        return (unsigned int)v9;
      }
      v16 = L"Failed to initialize description key for store. Store: %s StoreKey: %ws Status: %x";
    }
    else
    {
      v16 = L"Failed to initialize objects key for store. Store: %s StoreKey: %ws Status: %x";
    }
    LODWORD(v20) = v15;
    BiLogMessage(4LL, v16, a1 + 12, Dst, v20);
    goto LABEL_13;
  }
LABEL_4:
  BiLogMessage(4LL, L"Failed to find a key to load store %s. Last attempted key: %ws", a1 + 12, Dst);
  v9 = -1073741823;
LABEL_5:
  if ( Handle )
  {
    BiCloseKey(Handle);
    v10 = -1LL;
    do
      ++v10;
    while ( Dst[v10] );
    BiUnloadHiveByName((__int64)Dst, 2 * v10 + 2, 0);
  }
  return (unsigned int)v9;
}
