/*
 * XREFs of AcpiParseProcessorContainer @ 0x14002B3B0
 * Callers:
 *     AcpiGetCoordinatedLpiStates @ 0x14002A0CC (AcpiGetCoordinatedLpiStates.c)
 * Callees:
 *     GetDevExtByAcpiId @ 0x140005454 (GetDevExtByAcpiId.c)
 *     RtlUnicodeStringCopyString @ 0x140007544 (RtlUnicodeStringCopyString.c)
 *     AcpiParseLpiObject @ 0x14002AA00 (AcpiParseLpiObject.c)
 */

signed int __fastcall AcpiParseProcessorContainer(_DWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  const wchar_t *v7; // rbp
  _WORD *v8; // rax
  unsigned __int64 v9; // rcx
  int i; // edx
  signed int result; // eax
  int v12; // edx
  __int16 v13; // r14
  __int64 Pool2; // rax
  int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // r9d
  char *v18; // r10
  __int64 *DevExtByAcpiId; // rax
  int v20; // r9d
  __int64 v21; // r11
  __int64 v22; // rax

  v5 = 3LL * a2;
  *(_DWORD *)(a3 + 24) = a1[6 * a2 + 3];
  v6 = (unsigned int)a1[6 * a2 + 4];
  v7 = (const wchar_t *)((char *)a1 + v6);
  if ( !(_DWORD *)((char *)a1 + v6) )
    return -1073741811;
  v8 = (_WORD *)((char *)a1 + v6);
  v9 = (unsigned __int64)(unsigned int)(*a1 - v6) >> 1;
  for ( i = v9; v9; --v9 )
  {
    if ( !*v8 )
      break;
    ++v8;
  }
  result = v9 == 0 ? 0xC000000D : 0;
  if ( v9 )
    v12 = i - v9;
  else
    v12 = 0;
  if ( v9 )
  {
    v13 = 2 * v12 + 2;
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(2 * v12 + 2), 1919119952LL);
    *(_QWORD *)(a3 + 8) = Pool2;
    if ( !Pool2 )
      return -1073741670;
    *(_WORD *)(a3 + 2) = v13;
    result = RtlUnicodeStringCopyString((PUNICODE_STRING)a3, v7);
    if ( result >= 0 )
    {
      v15 = a1[2 * v5 + 6];
      *(_DWORD *)(a3 + 28) = v15;
      if ( v15 )
      {
        v16 = ExAllocatePool2(64LL, 4LL * (unsigned int)a1[2 * v5 + 6], 1919119952LL);
        *(_QWORD *)(a3 + 32) = v16;
        if ( !v16 )
          return -1073741670;
        v17 = 0;
        v18 = (char *)a1 + (unsigned int)a1[2 * v5 + 7];
        while ( v17 < a1[2 * v5 + 6] )
        {
          DevExtByAcpiId = GetDevExtByAcpiId(*(_DWORD *)&v18[4 * v17]);
          if ( DevExtByAcpiId )
          {
            *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4 * v21) = *((_DWORD *)DevExtByAcpiId + 14);
          }
          else
          {
            if ( dword_140015EFC <= (unsigned int)dword_1400155D4 )
              return -1073741275;
            *(_DWORD *)(*(_QWORD *)(a3 + 32) + 4 * v21) = -1;
          }
          v17 = v20 + 1;
        }
      }
      v22 = (unsigned int)a1[2 * v5 + 5];
      if ( !(_DWORD)v22 )
        return 0;
      result = AcpiParseLpiObject((__int64)a1 + v22, *(const wchar_t **)(a3 + 8), 1, (_QWORD *)(a3 + 16));
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
