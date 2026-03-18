/*
 * XREFs of ??$?TVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1401961F4
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140195BE8 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x140196784 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

Prediction::CFixPred *__fastcall Prediction::operator^<Prediction::CFixPred,3>(
        Prediction::CFixPred *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  Prediction::CFixPred *v7; // r11
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  char v18; // [rsp+20h] [rbp-28h] BYREF

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(a1);
  v6 = 0LL;
  v7 = a1;
  v8 = a3 - (_QWORD)a1;
  do
  {
    v9 = 3LL;
    do
    {
      v10 = *(_QWORD *)((char *)v7 + v8);
      v11 = (*(_QWORD *)(a2 + 8 * v6) ^ v10) >> 63;
      v12 = -*(_QWORD *)(a2 + 8 * v6);
      if ( *(__int64 *)(a2 + 8 * v6) > 0 )
        v12 = *(_QWORD *)(a2 + 8 * v6);
      v13 = -v10;
      if ( v10 > 0 )
        v13 = *(_QWORD *)((char *)v7 + v8);
      v14 = (unsigned int)v12 * (unsigned __int64)(unsigned int)v13;
      v15 = v11 ^ ((unsigned int)(HIDWORD(v13) * v12 + ((v12 * (unsigned int)v13) >> 32)) | (((HIDWORD(v12)
                                                                                             * HIDWORD(v13)) << 32)
                                                                                           + ((HIDWORD(v12)
                                                                                             * (unsigned int)v13
                                                                                             + HIDWORD(v14)) >> 32 << 32)
                                                                                           + ((HIDWORD(v13)
                                                                                             * (unsigned int)v12
                                                                                             + ((v12 * (unsigned int)v13) >> 32)) >> 32 << 32)));
      if ( v7 != (Prediction::CFixPred *)&v18 )
      {
        v16 = v15 - v11;
        if ( (_DWORD)v14 )
          v16 = v15;
        *(_QWORD *)v7 = v16;
      }
      v7 = (Prediction::CFixPred *)((char *)v7 + 8);
      --v9;
    }
    while ( v9 );
    ++v6;
    v8 -= 24LL;
  }
  while ( v6 < 3 );
  return a1;
}
