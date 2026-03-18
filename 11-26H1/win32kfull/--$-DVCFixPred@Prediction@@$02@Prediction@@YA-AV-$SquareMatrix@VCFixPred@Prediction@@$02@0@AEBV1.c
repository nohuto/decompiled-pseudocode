/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1401968A4
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140195BE8 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x140196784 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

Prediction::CFixPred *__fastcall Prediction::operator*<Prediction::CFixPred,3>(
        Prediction::CFixPred *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // r15
  Prediction::CFixPred *v8; // r14
  Prediction::CFixPred *v9; // rdi
  unsigned __int64 *v10; // r14
  __int64 v11; // r15
  __int64 *v12; // r13
  unsigned __int64 *v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // r11d
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  bool v24; // zf
  Prediction::CFixPred *v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  char v28; // [rsp+38h] [rbp-40h] BYREF
  __int64 v30; // [rsp+88h] [rbp+10h]
  __int64 v31; // [rsp+98h] [rbp+20h]

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(a1);
  v6 = a3 - (_QWORD)a1;
  v26 = a1;
  v7 = a2 - (_QWORD)a1;
  v27 = 3LL;
  v30 = v7;
  v8 = a1;
  do
  {
    v9 = v8;
    v31 = 3LL;
    v10 = (unsigned __int64 *)((char *)v8 + v7);
    do
    {
      v11 = *(_QWORD *)v9;
      v12 = (__int64 *)((char *)v9 + v6);
      v13 = v10;
      v14 = 3LL;
      do
      {
        v15 = *v12;
        v16 = (__int64)(*v13 ^ *v12) >> 63;
        v17 = -(__int64)*v13;
        if ( (__int64)*v13 > 0 )
          v17 = *v13;
        v18 = -v15;
        if ( v15 > 0 )
          v18 = *v12;
        v19 = v17 * v18;
        v20 = HIDWORD(v17) * (unsigned int)v18 + (((unsigned int)v17 * (unsigned __int64)(unsigned int)v18) >> 32);
        v21 = v16 ^ ((unsigned int)(HIDWORD(v18) * v17 + v20) | (((HIDWORD(v17) * HIDWORD(v18)) << 32)
                                                               + (HIDWORD(v20) << 32)
                                                               + ((HIDWORD(v18) * (unsigned int)v17 + (unsigned int)v20) >> 32 << 32)));
        v22 = v21 - v16;
        if ( v19 )
          v22 = v21;
        v23 = v11 + v22;
        if ( v9 != (Prediction::CFixPred *)&v28 )
        {
          *(_QWORD *)v9 = v23;
          v11 = v23;
        }
        ++v13;
        v12 += 3;
        --v14;
      }
      while ( v14 );
      v9 = (Prediction::CFixPred *)((char *)v9 + 8);
      --v31;
    }
    while ( v31 );
    v6 -= 24LL;
    v7 = v30;
    v8 = (Prediction::CFixPred *)((char *)v26 + 24);
    v24 = v27-- == 1;
    v26 = (Prediction::CFixPred *)((char *)v26 + 24);
  }
  while ( !v24 );
  return a1;
}
