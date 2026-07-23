/*
 * XREFs of MinAsn1SignedDataGetContent @ 0x1408AAEC4
 * Callers:
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     MinAsn1DecodeInteger @ 0x1408AA89C (MinAsn1DecodeInteger.c)
 *     MinAsn1ExtractContent @ 0x1408AAADC (MinAsn1ExtractContent.c)
 */

__int64 __fastcall MinAsn1SignedDataGetContent(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // edx
  int v5; // edx
  _OWORD *v6; // rax
  _BYTE *v7; // rcx
  int Content; // ecx
  char v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  v3 = *(_DWORD *)(a1 + 48);
  v11 = 0LL;
  if ( (int)MinAsn1DecodeInteger(*(char **)(a1 + 56), v3, (__int64 *)&v11, &v10) <= 0 || v10 || v11 < 3 )
  {
    v6 = (_OWORD *)(a1 + 96);
LABEL_10:
    *(_OWORD *)a2 = *v6;
    return *a2;
  }
  v5 = *(_DWORD *)(a1 + 96);
  v6 = (_OWORD *)(a1 + 96);
  if ( !v5 )
    goto LABEL_10;
  v7 = *(_BYTE **)(a1 + 104);
  if ( *v7 != 4 )
    goto LABEL_10;
  Content = MinAsn1ExtractContent(v7, v5, a2, (_QWORD *)a2 + 1);
  v6 = (_OWORD *)(a1 + 96);
  if ( Content <= 0 )
    goto LABEL_10;
  if ( !*a2 )
  {
    *((_QWORD *)a2 + 1) = 0LL;
    return 0;
  }
  return (unsigned int)Content;
}
