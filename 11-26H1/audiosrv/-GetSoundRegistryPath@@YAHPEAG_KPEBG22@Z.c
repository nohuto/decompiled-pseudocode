/*
 * XREFs of ?GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z @ 0x1800ABF1C
 * Callers:
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x1800316C8 (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18007635C (-StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall GetSoundRegistryPath(
        char *a1,
        wchar_t *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r11
  __int64 v7; // r8
  char *v9; // rdx
  __int16 v10; // ax
  char *v11; // rax
  __int64 v12; // rax
  wchar_t *v13; // rcx
  STRSAFE_LPWSTR pszDest; // [rsp+58h] [rbp+28h] BYREF
  size_t cbDest; // [rsp+60h] [rbp+30h] BYREF

  cbDest = (size_t)a3;
  pszDest = a2;
  v5 = 0;
  v6 = 0LL;
  v7 = 302LL;
  v9 = a1;
  do
  {
    if ( v7 == -2147483344 )
      break;
    v10 = *(_WORD *)&v9[(char *)gszSchemesRootKey - a1];
    if ( !v10 )
      break;
    *(_WORD *)v9 = v10;
    ++v6;
    v9 += 2;
    --v7;
  }
  while ( v7 );
  v11 = v9 - 2;
  if ( v7 )
    v11 = v9;
  *(_WORD *)v11 = 0;
  v12 = v6 - 1;
  if ( v7 )
    v12 = v6;
  cbDest = 2 * (302 - v12);
  v13 = (wchar_t *)&a1[2 * v12];
  pszDest = v13;
  if ( !v7
    || (unsigned int)StringCbCopyExW(v13, 2 * (302 - v12), gszSchemeAppsKey, &pszDest, &cbDest, 0)
    || (unsigned int)StringCbCopyExW(pszDest, cbDest, a4, &pszDest, &cbDest, 0)
    || (unsigned int)StringCbCopyExW(pszDest, cbDest, gszSlash, &pszDest, &cbDest, 0)
    || (unsigned int)StringCbCopyExW(pszDest, cbDest, a5, &pszDest, &cbDest, 0)
    || (unsigned int)StringCbCopyExW(pszDest, cbDest, gszSlash, &pszDest, &cbDest, 0) )
  {
    return 0LL;
  }
  LOBYTE(v5) = (unsigned int)StringCbCopyExW(pszDest, cbDest, aszCurrent, &pszDest, &cbDest, 0) == 0;
  return v5;
}
