/*
 * XREFs of ?_Tidy@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18004FF78
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18015294C (--1CKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Tidy(void **a1)
{
  char *v1; // rbx
  char *v3; // rsi
  char *v4; // rcx
  signed __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v3 = (char *)a1[1];
    while ( v1 != v3 )
    {
      Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease(v1);
      v1 += 8;
    }
    v4 = (char *)*a1;
    v5 = (_BYTE *)a1[2] - (_BYTE *)*a1;
    v8 = *a1;
    v6 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
    v7 = v6;
    if ( v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v8, &v7);
      v6 = v7;
      v4 = (char *)v8;
    }
    operator delete(v4, v6);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
