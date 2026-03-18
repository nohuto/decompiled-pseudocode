/*
 * XREFs of MinCrypK_ParseRevocationList @ 0x14071CA68
 * Callers:
 *     PopValidateWinresume @ 0x1407D0A04 (PopValidateWinresume.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     MinCryptParseRevocationList @ 0x1408A1C0C (MinCryptParseRevocationList.c)
 *     MinCrypK_VerifySignedDataKMode @ 0x1408A2A70 (MinCrypK_VerifySignedDataKMode.c)
 *     MinAsn1ParseCTL @ 0x1408A3378 (MinAsn1ParseCTL.c)
 *     MinAsn1DecodeTime @ 0x1408A4510 (MinAsn1DecodeTime.c)
 */

__int64 __fastcall MinCrypK_ParseRevocationList(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // [rsp+40h] [rbp-118h] BYREF
  void *Source2; // [rsp+48h] [rbp-110h]
  _BYTE v13[64]; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v14[48]; // [rsp+90h] [rbp-C8h] BYREF
  int v15; // [rsp+C0h] [rbp-98h]
  __int64 v16; // [rsp+C8h] [rbp-90h]
  _BYTE v17[64]; // [rsp+F0h] [rbp-68h] BYREF
  _BYTE v18[16]; // [rsp+130h] [rbp-28h] BYREF

  result = MinCrypK_VerifySignedDataKMode(a1, a2, (unsigned int)&v11, a4, 0LL, a5, (__int64)&v11);
  if ( (int)result >= 0 )
  {
    if ( v11 != 9
      || RtlCompareMemory(qword_140BD94B8, Source2, 9uLL) != 9
      || (int)MinAsn1ParseCTL(v13, v14) < 0
      || v15 != 14 )
    {
      return 3221226536LL;
    }
    v8 = 0x401062B0A060C30LL - *(_QWORD *)v16;
    if ( *(_QWORD *)v16 == 0x401062B0A060C30LL )
    {
      v9 = *(unsigned int *)(v16 + 8);
      v8 = 1027047937 - v9;
      if ( v9 == 1027047937 )
        v8 = 259LL - *(unsigned __int16 *)(v16 + 12);
    }
    if ( !v8 && (unsigned __int8)MinAsn1DecodeTime(v17, a6) )
      return MinCryptParseRevocationList(v18, v10, a4);
    else
      return 3221226536LL;
  }
  return result;
}
