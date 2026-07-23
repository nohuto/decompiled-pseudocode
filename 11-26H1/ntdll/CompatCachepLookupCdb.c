/*
 * XREFs of CompatCachepLookupCdb @ 0x1800D8F50
 * Callers:
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D8C3C (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800D8DE8 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpSendPostSnapNotifications @ 0x18011AFD0 (LdrpSendPostSnapNotifications.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 * Callees:
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     wcsrchr @ 0x18012DCE0 (wcsrchr.c)
 *     NtApphelpCacheControl @ 0x18015F7C0 (NtApphelpCacheControl.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall CompatCachepLookupCdb(wchar_t *Str, int a2)
{
  unsigned int v4; // ebx
  wchar_t *v5; // rax
  const wchar_t *v6; // rax
  size_t v7; // rax
  _BYTE v9[248]; // [rsp+20h] [rbp-198h] BYREF
  __int64 v10; // [rsp+118h] [rbp-A0h]
  const wchar_t *v11; // [rsp+120h] [rbp-98h]
  int *v12; // [rsp+198h] [rbp-20h]
  int v13; // [rsp+1A0h] [rbp-18h]
  int v14; // [rsp+1D0h] [rbp+18h] BYREF

  memset_thunk_772440563353939046(v9, 0, 0x188uLL);
  v4 = 0;
  v14 = 0;
  v5 = wcsrchr(Str, 0x5Cu);
  if ( v5 )
    v6 = v5 + 1;
  else
    v6 = Str;
  v10 = 0LL;
  v11 = v6;
  if ( v6 )
  {
    v7 = wcslen(v6);
    if ( v7 > 0x7FFE )
      return 0LL;
    LOWORD(v10) = 2 * v7;
    WORD1(v10) = 2 * v7 + 2;
  }
  v13 = 4;
  v12 = &v14;
  if ( (int)NtApphelpCacheControl(6LL, v9) >= 0 && (a2 & v14) != 0 )
    return 1;
  return v4;
}
