/*
 * XREFs of RtlpGetVolumeHandle @ 0x18010DEAC
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x18010DE30 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18015AD7C (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x180056694 (StringCbPrintfW.c)
 *     ZwCreateFile @ 0x18015F9E0 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetVolumeHandle(unsigned __int16 *a1, _QWORD *a2)
{
  __int64 v2; // r9
  wchar_t *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+60h] [rbp-29h] BYREF
  __int128 v8; // [rsp+68h] [rbp-21h] BYREF
  _DWORD v9[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v10; // [rsp+80h] [rbp-9h]
  __int128 *v11; // [rsp+88h] [rbp-1h]
  int v12; // [rsp+90h] [rbp+7h]
  int v13; // [rsp+94h] [rbp+Bh]
  __int128 v14; // [rsp+98h] [rbp+Fh]
  __int128 v15; // [rsp+A8h] [rbp+1Fh] BYREF
  wchar_t pszDest[12]; // [rsp+B8h] [rbp+2Fh] BYREF

  v2 = *a1;
  v9[1] = 0;
  v13 = 0;
  v15 = 0LL;
  v7 = 0LL;
  StringCbPrintfW(pszDest, 0x14uLL, L"\\??\\%C:", v2);
  v4 = pszDest;
  v8 = 0LL;
  v5 = 0x7FFFLL;
  while ( *v4 )
  {
    ++v4;
    if ( !--v5 )
      goto LABEL_6;
  }
  LOWORD(v8) = -2 - 2 * v5;
  WORD1(v8) = -2 * v5;
  *((_QWORD *)&v8 + 1) = pszDest;
LABEL_6:
  v9[0] = 48;
  v10 = 0LL;
  v12 = 64;
  v11 = &v8;
  v14 = 0LL;
  result = ZwCreateFile(&v7, 1048704LL, v9, &v15, 0LL, 0, 7, 1, 32, 0LL, 0);
  if ( (int)result >= 0 )
  {
    *a2 = v7;
    return 0LL;
  }
  return result;
}
