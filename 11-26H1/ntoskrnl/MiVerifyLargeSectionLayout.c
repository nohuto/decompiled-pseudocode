/*
 * XREFs of MiVerifyLargeSectionLayout @ 0x140D01580
 * Callers:
 *     MiCheckLargePageOk @ 0x140D011E4 (MiCheckLargePageOk.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR *__fastcall MiVerifyLargeSectionLayout(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR *p_BugCheckParameter3; // r9
  unsigned int v3; // edx
  unsigned int v4; // esi
  int v5; // r10d
  int NumberOfSections; // r11d
  int v7; // r11d
  ULONG_PTR *result; // rax
  int v9; // ecx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  unsigned int v12; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h]
  int v16; // [rsp+48h] [rbp-18h]
  __int128 v17; // [rsp+4Ch] [rbp-14h]
  int v18; // [rsp+5Ch] [rbp-4h]

  v15 = 0LL;
  OutHeaders = 0LL;
  v17 = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)BugCheckParameter2, 0LL, &OutHeaders);
  p_BugCheckParameter3 = &BugCheckParameter3;
  v3 = 0;
  v4 = 0x40000000;
  v5 = 0;
  NumberOfSections = OutHeaders->FileHeader.NumberOfSections;
  v15 = 0LL;
  v7 = NumberOfSections + 1;
  BugCheckParameter3 = 0LL;
  v17 = 0LL;
  v18 = 0x40000000;
  result = (ULONG_PTR *)OutHeaders->OptionalHeader.SizeOfHeaders;
  LODWORD(v15) = (_DWORD)result;
  v16 = (int)result;
  while ( v7 )
  {
    v9 = *((_DWORD *)p_BugCheckParameter3 + 3);
    if ( v3 != v9 )
      KeBugCheckEx(0x1Au, 0x303030AuLL, BugCheckParameter2, *((unsigned int *)p_BugCheckParameter3 + 3), v3);
    v10 = *((_DWORD *)p_BugCheckParameter3 + 2);
    v11 = *((_DWORD *)p_BugCheckParameter3 + 4);
    v12 = v11;
    if ( v11 < v10 )
      v12 = *((_DWORD *)p_BugCheckParameter3 + 2);
    if ( !v12 )
      KeBugCheckEx(0x1Au, 0x303030BuLL, BugCheckParameter2, (ULONG_PTR)p_BugCheckParameter3, 0LL);
    if ( v11 < v10 )
      v11 = *((_DWORD *)p_BugCheckParameter3 + 2);
    v3 = v9 + ((v11 + 4095) & 0xFFFFF000);
    if ( (*((_DWORD *)p_BugCheckParameter3 + 9) & 0xE0000000) == v4 )
    {
      if ( (v9 & 0x1FFFFF) != 0 )
        goto LABEL_14;
    }
    else
    {
      if ( (v9 & 0x1FFFFF) != 0 )
        KeBugCheckEx(
          0x1Au,
          0x303030CuLL,
          BugCheckParameter2,
          (ULONG_PTR)p_BugCheckParameter3,
          *((unsigned int *)p_BugCheckParameter3 + 3));
      v4 = *((_DWORD *)p_BugCheckParameter3 + 9) & 0xE0000000;
    }
    v5 = 0;
LABEL_14:
    if ( (*((_DWORD *)p_BugCheckParameter3 + 9) & 0x2000000) != 0 )
    {
      v5 = 1;
    }
    else if ( v5 )
    {
      KeBugCheckEx(0x1Au, 0x303030DuLL, BugCheckParameter2, (ULONG_PTR)p_BugCheckParameter3, 0LL);
    }
    result = &BugCheckParameter3;
    if ( p_BugCheckParameter3 == &BugCheckParameter3 )
      p_BugCheckParameter3 = (ULONG_PTR *)((char *)&OutHeaders->OptionalHeader.Magic
                                         + OutHeaders->FileHeader.SizeOfOptionalHeader);
    else
      p_BugCheckParameter3 += 5;
    --v7;
  }
  return result;
}
