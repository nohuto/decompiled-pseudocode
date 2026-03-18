/*
 * XREFs of ?_Growmap@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AEAAX_K@Z @ 0x1800E93A0
 * Callers:
 *     ??$_Emplace_back_internal@AEAPEAVCMegaRectBatchCommand@@@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AEAAXAEAPEAVCMegaRectBatchCommand@@@Z @ 0x1800E92AC (--$_Emplace_back_internal@AEAPEAVCMegaRectBatchCommand@@@-$deque@PEAVCMegaRectBatchCommand@@V-$a.c)
 * Callees:
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E963C (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

void __fastcall std::deque<CMegaRectBatchCommand *>::_Growmap(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbp
  HANDLE ProcessHeap; // rax
  char *v7; // r14
  unsigned __int64 v8; // rax
  __int64 i; // r15
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  void *v12; // rax
  void *v13; // rcx
  void *v14; // rax
  size_t v15; // r8
  void *v16; // rcx
  void *v17; // rcx
  unsigned __int64 v18; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *v20; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
  v3 = 1LL;
  v4 = a1[2];
  if ( v4 )
    v3 = v4;
  while ( v3 < 8 || v3 == v4 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v3 < v3 )
      std::_Xlength_error("deque<T> too long");
    v3 *= 2LL;
  }
  v5 = a1[3] >> 1;
  if ( v3 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  if ( 8 * v3 )
  {
    if ( 8 * v3 >= 0x1000 )
    {
      v7 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(8 * v3, 0xFFFFFFFFFFFFFFFLL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v7 = (char *)HeapAlloc(ProcessHeap, 0, 8 * v3);
      if ( !v7 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v3 >> 1;
  for ( i = 8 * v5; v3 <= v8; v3 *= 2LL )
    ;
  v10 = a1[2];
  v11 = v3 - v10;
  v12 = (void *)std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
                  (void *)(a1[1] + i),
                  a1[1] + 8 * v10,
                  &v7[8 * v5]);
  v13 = (void *)a1[1];
  if ( v5 > v11 )
  {
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
      v13,
      (__int64)v13 + 8 * v11,
      v12);
    v16 = (void *)std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
                    (void *)(8 * v11 + a1[1]),
                    a1[1] + i,
                    v7);
    v15 = 8 * v11;
  }
  else
  {
    v14 = (void *)std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
                    v13,
                    (__int64)v13 + i,
                    v12);
    memset_0(v14, 0, 8 * (v11 - v5));
    v15 = 8 * v5;
    v16 = v7;
  }
  memset_0(v16, 0, v15);
  v17 = (void *)a1[1];
  if ( v17 )
  {
    v18 = 8LL * a1[2];
    v21 = v18;
    v20 = v17;
    if ( v18 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v20, &v21);
      v18 = v21;
      v17 = v20;
    }
    operator delete(v17, v18);
  }
  a1[1] = v7;
  a1[2] += v11;
}
