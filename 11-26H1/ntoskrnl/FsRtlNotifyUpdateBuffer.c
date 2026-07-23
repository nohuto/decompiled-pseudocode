/*
 * XREFs of FsRtlNotifyUpdateBuffer @ 0x140B105EC
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x140AF8AC0 (FsRtlNotifyFilterReportChange.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlOemToUnicodeN @ 0x14097E070 (RtlOemToUnicodeN.c)
 */

char __fastcall FsRtlNotifyUpdateBuffer(WCHAR *a1, int a2, const void **a3, const void **a4, PCCH *a5, char a6, int a7)
{
  unsigned int v10; // edi
  ULONG v11; // edx
  ULONG BytesInOemString; // eax
  __int64 v13; // rdx
  const void **v14; // rdx
  WCHAR *v15; // rcx
  __int64 v17; // rcx
  ULONG v18; // eax
  __int64 v19; // rdx
  ULONG BytesInUnicodeString[5]; // [rsp+34h] [rbp-14h] BYREF

  v10 = 0;
  *(_DWORD *)a1 = 0;
  *((_DWORD *)a1 + 1) = a2;
  v11 = a7 - 12;
  if ( a7 == 12 )
    return 0;
  *((_DWORD *)a1 + 2) = v11;
  BytesInOemString = *(unsigned __int16 *)a3;
  if ( a6 )
  {
    if ( (_WORD)BytesInOemString )
    {
      memmove(a1 + 6, a3[1], *(unsigned __int16 *)a3);
      v13 = *(unsigned __int16 *)a3;
      if ( *((unsigned int *)a1 + 2) < (unsigned __int64)(v13 + 2) )
        return 0;
      *(WCHAR *)((char *)a1 + v13 + 12) = 92;
      v10 = *(unsigned __int16 *)a3 + 2;
    }
    memmove((char *)a1 + v10 + 12, a4[1], *(unsigned __int16 *)a4);
    v14 = (const void **)a5;
    if ( !a5 )
      return 1;
    v17 = v10 + *(unsigned __int16 *)a4;
    *(WCHAR *)((char *)a1 + v17 + 12) = 58;
    v15 = (WCHAR *)((char *)a1 + v17 + 14);
  }
  else
  {
    BytesInUnicodeString[0] = 0;
    if ( (_WORD)BytesInOemString )
    {
      RtlOemToUnicodeN(a1 + 6, v11, BytesInUnicodeString, (PCCH)a3[1], BytesInOemString);
      v18 = BytesInUnicodeString[0];
      *(WCHAR *)((char *)a1 + BytesInUnicodeString[0] + 12) = 92;
      v10 = v18 + 2;
    }
    v15 = (WCHAR *)((char *)a1 + v10 + 12);
    if ( *(_WORD *)a3 )
    {
      RtlOemToUnicodeN(v15, *((_DWORD *)a1 + 2), BytesInUnicodeString, (PCCH)a4[1], *(unsigned __int16 *)a4);
      if ( a5 )
      {
        v19 = v10 + BytesInUnicodeString[0];
        *(WCHAR *)((char *)a1 + v19 + 12) = 58;
        RtlOemToUnicodeN(
          (WCHAR *)((char *)a1 + v19 + 14),
          *((_DWORD *)a1 + 2),
          BytesInUnicodeString,
          a5[1],
          *(unsigned __int16 *)a5);
      }
      return 1;
    }
    v14 = (const void **)a5;
  }
  memmove(v15, v14[1], *(unsigned __int16 *)v14);
  return 1;
}
