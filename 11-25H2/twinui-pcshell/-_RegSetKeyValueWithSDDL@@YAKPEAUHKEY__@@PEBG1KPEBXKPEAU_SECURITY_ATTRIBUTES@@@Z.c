/*
 * XREFs of ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18013EC70
 * Callers:
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x18013EC10 (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x18013EFCC (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 *     ?SHRegSetFILETIME@@YAJPEAUHKEY__@@PEBG1PEBU_FILETIME@@@Z @ 0x1802BBFBC (-SHRegSetFILETIME@@YAJPEAUHKEY__@@PEBG1PEBU_FILETIME@@@Z.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C8390 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x1803B0220 (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 *     SHRegSetBinaryData @ 0x180654DF0 (SHRegSetBinaryData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _RegSetKeyValueWithSDDL(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        DWORD a4,
        BYTE *lpData,
        DWORD cbData)
{
  HKEY v8; // rbx
  unsigned int v9; // edi
  HKEY hKey; // [rsp+78h] [rbp+10h] BYREF

  hKey = 0LL;
  v8 = a1;
  if ( a2 && *a2 )
  {
    v9 = RegCreateKeyExW(a1, a2, 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
    if ( v9 )
      return v9;
    a1 = hKey;
  }
  else
  {
    hKey = a1;
  }
  v9 = RegSetValueExW(a1, a3, 0, a4, lpData, cbData);
  if ( hKey != v8 )
    RegCloseKey(hKey);
  return v9;
}
