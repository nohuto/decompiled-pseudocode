/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1401965E8
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140195BE8 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x140196714 (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

Prediction::CFixPred *__fastcall Prediction::operator*<Prediction::CFixPred,3>(
        Prediction::CFixPred *a1,
        __int64 a2,
        __int64 *a3)
{
  Prediction::CFixPred *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 *v9; // r14
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // r11d
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  char v21; // [rsp+20h] [rbp-38h] BYREF

  v5 = a1;
  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>(a1);
  v6 = a2 - (_QWORD)a3;
  v7 = 3LL;
  do
  {
    v8 = *(_QWORD *)v5;
    v9 = a3;
    v10 = 3LL;
    do
    {
      v11 = *v9;
      v12 = (*v9 ^ *(__int64 *)((char *)v9 + v6)) >> 63;
      v13 = -*(__int64 *)((char *)v9 + v6);
      if ( *(__int64 *)((char *)v9 + v6) > 0 )
        v13 = *(__int64 *)((char *)v9 + v6);
      v14 = -v11;
      if ( v11 > 0 )
        v14 = *v9;
      v15 = v13 * v14;
      v16 = HIDWORD(v13) * (unsigned int)v14 + (((unsigned int)v13 * (unsigned __int64)(unsigned int)v14) >> 32);
      v17 = v12 ^ ((unsigned int)(HIDWORD(v14) * v13 + v16) | (((HIDWORD(v13) * HIDWORD(v14)) << 32)
                                                             + (HIDWORD(v16) << 32)
                                                             + ((HIDWORD(v14) * (unsigned int)v13 + (unsigned int)v16) >> 32 << 32)));
      v18 = v17 - v12;
      if ( v15 )
        v18 = v17;
      v19 = v8 + v18;
      if ( v5 != (Prediction::CFixPred *)&v21 )
      {
        *(_QWORD *)v5 = v19;
        v8 = v19;
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    v5 = (Prediction::CFixPred *)((char *)v5 + 8);
    v6 += 24LL;
    --v7;
  }
  while ( v7 );
  return a1;
}
