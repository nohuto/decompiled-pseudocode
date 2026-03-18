/*
 * XREFs of ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x140196714
 * Callers:
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1401963B4 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBV.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1401965E8 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV-$Squar.c)
 *     ??$?HVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x140196B74 (--$-HVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z.c)
 * Callees:
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400FE9F8 (--0CFixPred@Prediction@@QEAA@XZ.c)
 */

Prediction::CFixPred *__fastcall Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>(
        Prediction::CFixPred *this)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  Prediction::CFixPred *v4; // rdi
  Prediction::CFixPred *v5; // rax
  char v7; // [rsp+20h] [rbp-18h] BYREF

  v1 = 3LL;
  v3 = 3LL;
  v4 = this;
  do
  {
    Prediction::CFixPred::CFixPred(v4);
    v4 = (Prediction::CFixPred *)((char *)v4 + 8);
    --v3;
  }
  while ( v3 );
  v5 = this;
  do
  {
    if ( v5 != (Prediction::CFixPred *)&v7 )
      *(_QWORD *)v5 = 0LL;
    v5 = (Prediction::CFixPred *)((char *)v5 + 8);
    --v1;
  }
  while ( v1 );
  return this;
}
