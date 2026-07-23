/*
 * XREFs of I_MinCryptGetPlatformManifestBinaryIDAttribute @ 0x1408A8720
 * Callers:
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     I_Base64Decode @ 0x1408A853C (I_Base64Decode.c)
 *     I_MinAsn1ParseSingleAttribute @ 0x1408A949C (I_MinAsn1ParseSingleAttribute.c)
 *     MinAsn1ExtractContent @ 0x1408AAADC (MinAsn1ExtractContent.c)
 */

__int64 __fastcall I_MinCryptGetPlatformManifestBinaryIDAttribute(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _BYTE *v5; // r8
  __int128 v7; // [rsp+30h] [rbp-10h] BYREF
  int v8; // [rsp+58h] [rbp+18h] BYREF
  int v9; // [rsp+60h] [rbp+20h] BYREF
  _BYTE *v10; // [rsp+68h] [rbp+28h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  v10 = 0LL;
  v8 = 0;
  *(_OWORD *)(v3 + 72) = 0LL;
  *(_OWORD *)(v3 + 88) = 0LL;
  v7 = 0LL;
  if ( (unsigned __int8)I_MinAsn1ParseSingleAttribute(&qword_140BE0908, a1, a3, &v7)
    && (int)MinAsn1ExtractContent(*((_QWORD *)&v7 + 1), (unsigned int)v7, &v8, &v10) >= 0 )
  {
    v5 = (_BYTE *)(*(_QWORD *)(a2 + 16) + 72LL);
    v9 = 32;
    I_Base64Decode(v10, v8, v5, &v9);
  }
  return 0LL;
}
