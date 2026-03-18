/*
 * XREFs of ?_Tidy@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AEAAXXZ @ 0x180151094
 * Callers:
 *     ??1?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@QEAA@XZ @ 0x180151040 (--1-$deque@PEAVCMegaRectBatchCommand@@V-$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@QEAA@X.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<CMegaRectBatchCommand *>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v7 = v2 - 1;
    a1[4] = v7;
    if ( !v7 )
      a1[3] = 0LL;
  }
  if ( a1[1] )
  {
    v3 = a1[2];
    while ( v3 > 0 )
    {
      --v3;
      v4 = *(void **)(a1[1] + 8 * v3);
      if ( v4 )
        operator delete(v4, 0x10uLL);
    }
    v5 = (void *)a1[1];
    v6 = 8LL * a1[2];
    v9 = v6;
    v8 = v5;
    if ( v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v8, &v9);
      v5 = v8;
      v6 = v9;
    }
    operator delete(v5, v6);
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
