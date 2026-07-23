/*
 * XREFs of DrvDbSplitDeviceIdDriverInfMatch @ 0x140ADFF30
 * Callers:
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140ADFC40 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PiDevCfgFindDeviceDriver @ 0x140AE6D34 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x14041D2F0 (RtlStringCchCopyNExW.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     wcstol @ 0x14053ADDC (wcstol.c)
 */

__int64 __fastcall DrvDbSplitDeviceIdDriverInfMatch(
        STRSAFE_PCNZWCH pszSrc,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        __int64 a4)
{
  NTSTATUS v5; // r15d
  unsigned int v7; // r14d
  char v9; // r12
  wchar_t *v10; // rax
  wchar_t *v11; // rdi
  __int64 v12; // rsi
  wchar_t *v13; // rax
  wchar_t *v14; // r14
  int v15; // eax
  unsigned int v16; // eax
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // [rsp+80h] [rbp+18h]

  v20 = cchDest;
  v5 = 0;
  v7 = cchDest;
  v9 = -1;
  v10 = wcschr(pszSrc, 0x5Cu);
  v11 = v10;
  if ( v10 )
  {
    v12 = v10 - pszSrc;
    if ( !a4 )
      goto LABEL_11;
    v13 = wcschr(v10 + 1, 0x5Cu);
    v14 = v13;
    if ( v13 )
    {
      *v13 = 0;
      v19 = wcstol(v13 + 1, 0LL, 16);
      if ( v19 > 0xFF )
        LOBYTE(v19) = -1;
      v9 = v19;
    }
    if ( v11[1] == 42 )
    {
      *(_BYTE *)a4 = 3;
      if ( v11[2] )
      {
        LOWORD(v16) = wcstol(v11 + 2, 0LL, 16);
        goto LABEL_8;
      }
    }
    else
    {
      v15 = wcstol(v11 + 1, 0LL, 16);
      if ( v15 )
      {
        v16 = v15 - 1;
        *(_BYTE *)a4 = 2;
        if ( v16 > 0xFFFF )
          LOWORD(v16) = -1;
        goto LABEL_8;
      }
      *(_BYTE *)a4 = 1;
    }
    LOWORD(v16) = 0;
LABEL_8:
    *(_WORD *)(a4 + 2) = v16;
    if ( v14 )
      *v14 = 92;
    v7 = v20;
    goto LABEL_11;
  }
  v18 = -1LL;
  do
    ++v18;
  while ( pszSrc[v18] );
  LODWORD(v12) = v18;
  if ( a4 )
  {
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
LABEL_11:
  if ( !pszDest || (v5 = RtlStringCchCopyNExW(pszDest, v7, pszSrc, (unsigned int)v12, 0LL, 0LL, 0x900u), v5 >= 0) )
  {
    if ( a4 )
      *(_BYTE *)(a4 + 1) = v9;
  }
  return (unsigned int)v5;
}
