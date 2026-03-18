/*
 * XREFs of ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x140196784
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140195BE8 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ??$?TVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1401961F4 (--$-TVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV-.c)
 *     ??$?GVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x140196310 (--$-GVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1401968A4 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x140196A5C (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction_ea_140196A5C.c)
 *     ??$?HVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x140196E10 (--$-HVCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV1.c)
 *     ??$Tri@VCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x140196E84 (--$Tri@VCFixPred@Prediction@@$02@Prediction@@YA-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@AEB.c)
 * Callees:
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400FE9F8 (--0CFixPred@Prediction@@QEAA@XZ.c)
 */

Prediction::CFixPred *__fastcall Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(
        Prediction::CFixPred *this)
{
  Prediction::CFixPred *v2; // rbx
  __int64 v3; // rdi
  Prediction::CFixPred *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = this;
  v3 = 9LL;
  do
  {
    Prediction::CFixPred::CFixPred(v2);
    v2 = (Prediction::CFixPred *)((char *)v2 + 8);
    --v3;
  }
  while ( v3 );
  v4 = this;
  v5 = 3LL;
  do
  {
    v6 = 3LL;
    do
    {
      if ( v4 != (Prediction::CFixPred *)&v8 )
        *(_QWORD *)v4 = 0LL;
      v4 = (Prediction::CFixPred *)((char *)v4 + 8);
      --v6;
    }
    while ( v6 );
    --v5;
  }
  while ( v5 );
  return this;
}
