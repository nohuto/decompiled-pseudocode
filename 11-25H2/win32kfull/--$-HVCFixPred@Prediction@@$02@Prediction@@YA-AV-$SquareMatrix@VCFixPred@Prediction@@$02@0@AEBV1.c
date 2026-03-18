/*
 * XREFs of ??$?HVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1401646E8
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140163590 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1401641FC (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

Prediction::CFixPred *__fastcall Prediction::operator+<Prediction::CFixPred,3>(
        Prediction::CFixPred *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // r10
  __int64 v8; // rdi
  Prediction::CFixPred *v9; // r9
  __int64 v10; // rdx
  char v12; // [rsp+20h] [rbp-18h] BYREF

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(a1);
  v6 = a2 - a3;
  v7 = 3LL;
  v8 = a3 - (_QWORD)a1;
  v9 = a1;
  do
  {
    v10 = 3LL;
    do
    {
      if ( v9 != (Prediction::CFixPred *)&v12 )
        *(_QWORD *)v9 = *(_QWORD *)((char *)v9 + v8) + *(_QWORD *)((char *)v9 + v8 + v6);
      v9 = (Prediction::CFixPred *)((char *)v9 + 8);
      --v10;
    }
    while ( v10 );
    --v7;
  }
  while ( v7 );
  return a1;
}
