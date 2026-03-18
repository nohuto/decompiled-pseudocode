/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1401964D4
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140195BE8 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ?FastMul64by64@@YA_J_J0@Z @ 0x140196550 (-FastMul64by64@@YA_J_J0@Z.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 *v4; // rdi
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rax
  char v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  v4 = a2;
  *(_QWORD *)a1 = 0LL;
  v6 = a3 - (_QWORD)a2;
  v7 = 3LL;
  do
  {
    v8 = v3 + FastMul64by64(*v4, *(__int64 *)((char *)v4 + v6));
    if ( a1 != &v10 )
    {
      *(_QWORD *)a1 = v8;
      v3 = v8;
    }
    ++v4;
    --v7;
  }
  while ( v7 );
  return a1;
}
