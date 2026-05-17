/*
 * XREFs of LdrVerifyMappedImageMatchesChecksum @ 0x180146040
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18010CE10 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     ChkSum @ 0x180102D30 (ChkSum.c)
 */

bool __fastcall LdrVerifyMappedImageMatchesChecksum(unsigned __int16 *a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // rbp
  unsigned __int16 v8; // ax
  __int64 v9; // r10
  unsigned __int16 v10; // ax
  int v11; // r11d
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  if ( (int)RtlImageNtHeaderEx(0, (unsigned __int64)a1, a2, &v12) < 0 )
  {
    v10 = 0;
    v11 = a3;
  }
  else
  {
    v6 = v12;
    if ( !*(_DWORD *)(v12 + 88) )
      return 1;
    v8 = ChkSum(0, a1, (unsigned __int64)(v12 - (_QWORD)a1 + 88) >> 1);
    v10 = ChkSum(v8, (unsigned __int16 *)(v6 + 92), (a2 - v9 - 4) >> 1);
    if ( (a2 & 1) != 0 )
      v10 += *((unsigned __int8 *)a1 + a2 - 1) + ((v10 + (unsigned int)*((unsigned __int8 *)a1 + a2 - 1)) >> 16);
  }
  return a3 + v10 == v11;
}
