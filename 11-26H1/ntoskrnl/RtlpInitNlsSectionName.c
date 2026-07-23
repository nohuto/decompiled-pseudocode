/*
 * XREFs of RtlpInitNlsSectionName @ 0x140A9BB70
 * Callers:
 *     NtGetNlsSectionPtr @ 0x140A9B7D0 (NtGetNlsSectionPtr.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 */

NTSTATUS __fastcall RtlpInitNlsSectionName(
        int a1,
        unsigned int a2,
        WCHAR *a3,
        __int64 a4,
        UNICODE_STRING *DestinationString)
{
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rdx
  WCHAR *v9; // r9
  WCHAR v10; // ax
  WCHAR *v11; // rcx
  unsigned int v12; // ebx
  NTSTATUS result; // eax

  v6 = a1 - 11;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return -1073741585;
      v8 = 64LL;
      v9 = a3;
      do
      {
        if ( v8 == -2147483582 )
          break;
        v10 = *(WCHAR *)((char *)v9 + (char *)L"\\NLS\\NlsSectionCASE" - (char *)a3);
        if ( !v10 )
          break;
        *v9++ = v10;
        --v8;
      }
      while ( v8 );
      v11 = v9 - 1;
      v12 = v8 == 0 ? 0x80000005 : 0;
      if ( v8 )
        v11 = v9;
      *v11 = 0;
      if ( !v8 )
        return v12;
LABEL_15:
      RtlInitUnicodeString(DestinationString, a3);
      return v12;
    }
    result = RtlStringCchPrintfW(a3, 0x40uLL, L"\\NLS\\NlsSectionNORM%.8x", a2);
  }
  else
  {
    result = RtlStringCchPrintfW(a3, 0x40uLL, L"\\NLS\\NlsSectionCP%d", a2);
  }
  v12 = result;
  if ( result >= 0 )
    goto LABEL_15;
  return result;
}
