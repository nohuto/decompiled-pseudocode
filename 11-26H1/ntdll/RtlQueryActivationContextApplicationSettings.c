/*
 * XREFs of RtlQueryActivationContextApplicationSettings @ 0x1800D5700
 * Callers:
 *     RtlpHpOptIntoSegmentHeap @ 0x1800D424C (RtlpHpOptIntoSegmentHeap.c)
 *     LdrpFusionManifestCodePages @ 0x1800D55E8 (LdrpFusionManifestCodePages.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x180041090 (RtlpLocateActivationContextSection.c)
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     RtlpFindUnicodeStringInSection @ 0x180042150 (RtlpFindUnicodeStringInSection.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryActivationContextApplicationSettings(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        const void *a4,
        void *a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  const wchar_t *v7; // rsi
  __int64 v9; // rcx
  char *v10; // rax
  char *v11; // rcx
  int UnicodeStringInSection; // ebx
  unsigned __int64 v13; // rdi
  const void *v14; // rbx
  size_t v15; // rax
  unsigned int *v16; // rdi
  char *v17; // rax
  signed __int64 v18; // rsi
  int v19; // edx
  int v20; // ecx
  int v22; // [rsp+40h] [rbp-61h] BYREF
  int v23; // [rsp+44h] [rbp-5Dh] BYREF
  const void *v24[3]; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-41h] BYREF
  int v26; // [rsp+64h] [rbp-3Dh] BYREF
  unsigned int *v27; // [rsp+68h] [rbp-39h]
  unsigned int v28; // [rsp+100h] [rbp+5Fh] BYREF

  v28 = 0;
  v7 = L"http://schemas.microsoft.com/SMI/2005/WindowsSettings";
  v24[0] = 0LL;
  if ( a3 )
    v7 = a3;
  v23 = -1;
  v22 = 0;
  if ( !a5 && a6 )
    return 3221225485LL;
  switch ( a2 )
  {
    case 0LL:
      v9 = 760LL;
LABEL_6:
      v10 = *(char **)(&NtCurrentPeb()->InheritedAddressSpace + v9);
      goto LABEL_7;
    case -3LL:
      v11 = "Actx ";
      goto LABEL_9;
    case -4LL:
      v9 = 776LL;
      goto LABEL_6;
  }
  v10 = *(char **)(a2 + 24);
LABEL_7:
  v11 = "Actx ";
  if ( v10 )
    v11 = v10;
LABEL_9:
  UnicodeStringInSection = RtlpLocateActivationContextSection(v11, 0LL, 0xAu, v24, &v28);
  if ( UnicodeStringInSection >= 0 )
  {
    v13 = v28;
    v14 = v24[0];
    if ( v28 < 0x2C || *(_DWORD *)v24[0] != 1682469715 )
    {
      DbgPrintEx(
        51,
        0,
        "RtlpLocateActivationContextSection() found section at %p (length %lu) which is not a string section\n",
        v24[0],
        v28);
      return 3222601731LL;
    }
    v24[0] = 0LL;
    v24[1] = a4;
    if ( a4 )
    {
      v15 = 2 * wcslen((const wchar_t *)a4);
      if ( v15 >= 0xFFFE )
        LOWORD(v15) = -4;
      LOWORD(v24[0]) = v15;
      WORD1(v24[0]) = v15 + 2;
    }
    memset_thunk_772440563353939046(&v26, 0, 0x6CuLL);
    v25 = 112;
    UnicodeStringInSection = RtlpFindUnicodeStringInSection(
                               (__int64)v14,
                               v13,
                               (unsigned __int16 *)v24,
                               &v25,
                               &v23,
                               &v22);
    if ( UnicodeStringInSection >= 0 )
    {
      if ( v26 == 1 )
      {
        v16 = v27;
        v17 = (char *)v27 + v27[3];
        v18 = (char *)v7 - v17;
        do
        {
          v19 = *(unsigned __int16 *)&v17[v18];
          v20 = *(unsigned __int16 *)v17 - v19;
          if ( v20 )
            break;
          v17 += 2;
        }
        while ( v19 );
        if ( v20 )
          return 3222601736LL;
        if ( a6 < (unsigned __int64)v27[6] >> 1 )
          UnicodeStringInSection = -1073741789;
        else
          memmove(a5, (char *)v27 + v27[7], v27[6] + 2LL);
        if ( a7 )
          *a7 = ((unsigned __int64)v16[6] >> 1) + 1;
        goto LABEL_27;
      }
      return 3222601731LL;
    }
  }
LABEL_27:
  if ( UnicodeStringInSection == -1072365567 )
    return (unsigned int)-1072365560;
  return (unsigned int)UnicodeStringInSection;
}
