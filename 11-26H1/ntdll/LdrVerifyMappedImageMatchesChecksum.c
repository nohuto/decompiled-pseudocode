/*
 * XREFs of LdrVerifyMappedImageMatchesChecksum @ 0x180145EF0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010C960 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     ChkSum @ 0x1801020B0 (ChkSum.c)
 */

BOOLEAN __cdecl LdrVerifyMappedImageMatchesChecksum(PVOID BaseAddress, SIZE_T NumberOfBytes, ULONG FileLength)
{
  char *v6; // rbp
  unsigned __int16 v8; // ax
  __int64 v9; // r10
  unsigned __int16 v10; // ax
  ULONG v11; // r11d
  char *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  if ( RtlImageNtHeaderEx(0, BaseAddress, NumberOfBytes, (PIMAGE_NT_HEADERS *)&v12) < 0 )
  {
    v10 = 0;
    v11 = FileLength;
  }
  else
  {
    v6 = v12;
    if ( !*((_DWORD *)v12 + 22) )
      return 1;
    v8 = ChkSum(0, (unsigned __int16 *)BaseAddress, (unsigned __int64)(v12 - (_BYTE *)BaseAddress + 88) >> 1);
    v10 = ChkSum(v8, (unsigned __int16 *)v6 + 46, (NumberOfBytes - v9 - 4) >> 1);
    if ( (NumberOfBytes & 1) != 0 )
      v10 += (unsigned __int8)*((char *)BaseAddress + NumberOfBytes - 1)
           + ((v10 + (unsigned int)(unsigned __int8)*((char *)BaseAddress + NumberOfBytes - 1)) >> 16);
  }
  return FileLength + v10 == v11;
}
