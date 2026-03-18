/*
 * XREFs of KiDumpParameterImages @ 0x1405E838C
 * Callers:
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x1405E7FF4 (KiDisplayBlueScreen.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14034DFD0 (MmIsAddressValidEx.c)
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 *     RtlStringCbPrintfA @ 0x140576648 (RtlStringCbPrintfA.c)
 *     KiBugCheckUnicodeToAnsi @ 0x1405E78CC (KiBugCheckUnicodeToAnsi.c)
 *     KiPcToFileHeader @ 0x1405E8854 (KiPcToFileHeader.c)
 *     MmLocateUnloadedDriver @ 0x1406E701C (MmLocateUnloadedDriver.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall KiDumpParameterImages(NTSTRSAFE_PSTR pszDest, const void **a2, unsigned int a3, char a4)
{
  __int64 v7; // rbp
  const void *v8; // rbx
  int v9; // r12d
  const void *v10; // rsi
  __int64 UnloadedDriver; // rax
  unsigned __int16 *v12; // rdi
  ULONG v13; // ebx
  unsigned __int16 *v14; // rcx
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  const char *v17; // r9
  char v18; // [rsp+40h] [rbp-E8h]
  _BYTE v19[7]; // [rsp+41h] [rbp-E7h] BYREF
  __int64 v20; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-D8h] BYREF
  char v22[128]; // [rsp+60h] [rbp-C8h] BYREF

  v20 = 0LL;
  v18 = 1;
  v19[0] = 0;
  if ( pszDest )
    *pszDest = 0;
  if ( a3 )
  {
    v7 = a3;
    while ( 1 )
    {
      v8 = *a2;
      v9 = 0;
      v10 = (const void *)KiPcToFileHeader(*a2, &v20, 1LL, v19);
      if ( v10 )
        break;
      UnloadedDriver = MmLocateUnloadedDriver(v8);
      v12 = (unsigned __int16 *)UnloadedDriver;
      if ( UnloadedDriver )
      {
        v10 = *(const void **)(UnloadedDriver + 16);
        v13 = (_DWORD)v8 - (_DWORD)v10;
        if ( a4 )
        {
          v14 = (unsigned __int16 *)UnloadedDriver;
          goto LABEL_14;
        }
        goto LABEL_15;
      }
LABEL_20:
      ++a2;
      if ( !--v7 )
        return;
    }
    v15 = v20;
    if ( MmIsAddressValidEx(*(_QWORD *)(v20 + 48)) == 1 )
    {
      v16 = *(_QWORD *)(v15 + 48);
      v21 = 0LL;
      RtlImageNtHeaderEx(1, v16, 0LL, &v21);
      if ( v21 )
        v9 = *(_DWORD *)(v21 + 8);
    }
    v12 = (unsigned __int16 *)(v15 + 88);
    v13 = (_DWORD)v8 - (_DWORD)v10;
    if ( a4 )
    {
      v14 = v12;
LABEL_14:
      KiBugCheckUnicodeToAnsi(v14, v22);
    }
LABEL_15:
    if ( pszDest )
    {
      v17 = "\r\n*";
      if ( !v18 )
        v17 = "*";
      RtlStringCbPrintfA(
        pszDest,
        0x80uLL,
        "%s**  %12s - Address %p base at %p, DateStamp %08lx\r\n",
        v17,
        v22,
        *a2,
        v10,
        v9);
    }
    *(_QWORD *)&KiBugCheckDriver = v12;
    KiBugCheckDriverOffset = v13;
    v18 = 0;
    goto LABEL_20;
  }
}
