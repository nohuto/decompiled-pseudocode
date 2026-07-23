/*
 * XREFs of MinAsn1ExtractContent @ 0x1408AAADC
 * Callers:
 *     I_MinCryptGetPlatformManifestBinaryIDAttribute @ 0x1408A8720 (I_MinCryptGetPlatformManifestBinaryIDAttribute.c)
 *     I_MinCryptVerifyHashSignerAuthenticatedAttributes @ 0x1408A8B38 (I_MinCryptVerifyHashSignerAuthenticatedAttributes.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 *     I_MinAsn1ParseSingleAttribute @ 0x1408A949C (I_MinAsn1ParseSingleAttribute.c)
 *     MinAsn1ParseAndDecodeRDNComponent @ 0x1408A9664 (MinAsn1ParseAndDecodeRDNComponent.c)
 *     MinAsn1ParseOIDSequence @ 0x1408A9848 (MinAsn1ParseOIDSequence.c)
 *     MinAsn1ParseSignedDataCertificatesEx @ 0x1408A9A00 (MinAsn1ParseSignedDataCertificatesEx.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x1408A9AF0 (MinAsn1ParseSingleExtensionValue.c)
 *     MinAsn1DecodeTime @ 0x1408AA920 (MinAsn1DecodeTime.c)
 *     MinAsn1ExtractValues @ 0x1408AAC48 (MinAsn1ExtractValues.c)
 *     MinAsn1SignedDataGetContent @ 0x1408AAEC4 (MinAsn1SignedDataGetContent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MinAsn1ExtractContent(_BYTE *a1, int a2, unsigned int *a3, _QWORD *a4)
{
  unsigned int v7; // edx
  char *v8; // r10
  char v9; // al
  unsigned int v10; // ecx
  int i; // r11d
  char v13; // al
  char v14; // al
  unsigned __int8 v16; // al
  int v17; // r9d
  unsigned int v18; // r8d
  unsigned __int8 *v19; // rdi
  int v20; // ebx
  int v21; // eax

  v7 = a2 - 1;
  if ( a2 )
  {
    v8 = a1 + 1;
    v9 = *a1 & 0x1F;
    v10 = 1;
    if ( v9 == 31 )
    {
      for ( i = 2; v7--; ++i )
      {
        v13 = *v8++;
        if ( v13 >= 0 )
          goto LABEL_8;
      }
    }
    else
    {
      i = 1;
LABEL_8:
      if ( v7 )
      {
        v14 = *v8;
        if ( *v8 == (char)0x80 )
          return 4294967293LL;
        if ( v14 >= 0 )
        {
          v18 = (unsigned __int8)*v8;
        }
        else
        {
          v16 = v14 & 0x7F;
          if ( v16 > 4u )
            return 0xFFFFFFFFLL;
          v17 = v16;
          if ( v16 >= v7 )
            return 4294967294LL;
          v18 = 0;
          v19 = (unsigned __int8 *)(v8 + 1);
          v20 = v16;
          if ( v16 )
          {
            do
            {
              v21 = *v19;
              --v20;
              ++v19;
              v18 = v21 + (v18 << 8);
            }
            while ( v20 > 0 );
          }
          v10 = v17 + 1;
        }
        if ( v18 <= v7 - v10 )
        {
          *a3 = v18;
          *a4 = &v8[v10];
          return v10 + i;
        }
      }
    }
  }
  return 4294967294LL;
}
