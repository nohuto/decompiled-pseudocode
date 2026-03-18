/*
 * XREFs of ??$?HVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x140163CB8
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140163590 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x14016418C (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

Prediction::CFixPred *__fastcall Prediction::operator+<Prediction::CFixPred,3>(
        Prediction::CFixPred *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  Prediction::CFixPred *v7; // r9
  __int64 v8; // rdi
  __int64 v9; // r10
  char v11; // [rsp+20h] [rbp-18h] BYREF

  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>(a1);
  v6 = a2 - a3;
  v7 = a1;
  v8 = a3 - (_QWORD)a1;
  v9 = 3LL;
  do
  {
    if ( v7 != (Prediction::CFixPred *)&v11 )
      *(_QWORD *)v7 = *(_QWORD *)((char *)v7 + v8) + *(_QWORD *)((char *)v7 + v8 + v6);
    v7 = (Prediction::CFixPred *)((char *)v7 + 8);
    --v9;
  }
  while ( v9 );
  return a1;
}
