/*
 * XREFs of MinAsn1ParseOIDSequence @ 0x1408A9848
 * Callers:
 *     I_MinCryptGetCertificateEKUs @ 0x1408A6DDC (I_MinCryptGetCertificateEKUs.c)
 * Callees:
 *     MinAsn1ExtractContent @ 0x1408AAADC (MinAsn1ExtractContent.c)
 *     MinAsn1ExtractValues @ 0x1408AAC48 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall MinAsn1ParseOIDSequence(unsigned int *a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned int v4; // ebx
  __int64 v6; // rdx
  unsigned int v8; // esi
  unsigned int v9; // r12d
  int v10; // edi
  int v11; // r14d
  int Values; // eax
  __int64 result; // rax
  int v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v4 = 0;
  v15 = 0LL;
  v6 = *a1;
  v14 = 0;
  v8 = 0;
  v9 = *a2;
  if ( (_DWORD)v6 )
  {
    if ( (int)MinAsn1ExtractContent(v3, v6, &v14, &v15) > 0 )
    {
      v10 = v15;
      v11 = v14;
      while ( 1 )
      {
        if ( !v11 || v8 >= v9 )
        {
          v4 = v10 - v3;
          goto LABEL_13;
        }
        v14 = 1;
        Values = MinAsn1ExtractValues(v10, v11, (unsigned int)&v14, (unsigned int)&qword_1400102B0, 1, a3 + 16LL * v8);
        if ( Values <= 0 )
          break;
        v11 -= Values;
        v10 += Values;
        ++v8;
      }
      if ( !Values )
        Values = -1;
      v4 = Values + v3 - v10;
    }
    else
    {
      v4 = -1;
    }
  }
LABEL_13:
  result = v4;
  *a2 = v8;
  return result;
}
