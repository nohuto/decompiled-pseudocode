/*
 * XREFs of ?_Growmap@?$deque@PEAVCInteractionTrackerBase@@V?$allocator@PEAVCInteractionTrackerBase@@@std@@@std@@AEAAX_K@Z @ 0x180138AE8
 * Callers:
 *     ??$_Emplace_back_internal@AEBQEAVCInteractionTrackerBase@@@?$deque@PEAVCInteractionTrackerBase@@V?$allocator@PEAVCInteractionTrackerBase@@@std@@@std@@AEAAXAEBQEAVCInteractionTrackerBase@@@Z @ 0x180138660 (--$_Emplace_back_internal@AEBQEAVCInteractionTrackerBase@@@-$deque@PEAVCInteractionTrackerBase@@.c)
 *     ??$_Emplace_back_internal@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x1801BB854 (--$_Emplace_back_internal@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@-$deque@V-$ComPtr@.c)
 * Callees:
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

void __fastcall std::deque<CInteractionTrackerBase *>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r14
  SIZE_T size_of; // rax
  __int64 v6; // rdx
  __int64 v7; // r15
  char *v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  void *v12; // rax
  void *v13; // rcx
  void *v14; // rax
  size_t v15; // r8
  void *v16; // rcx
  void *v17; // rcx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( v2 == v3 || v2 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      std::_Xlength_error("deque<T> too long");
    v2 *= 2LL;
  }
  v4 = a1[3] >> 1;
  size_of = std::_Get_size_of_n<8>(v2);
  v7 = 8 * v4;
  v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v6);
  v9 = v2 >> 1;
  while ( v2 <= v9 )
    v2 *= 2LL;
  v10 = a1[2];
  v11 = v2 - v10;
  v12 = (void *)std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
                  (void *)(a1[1] + v7),
                  a1[1] + 8 * v10,
                  &v8[8 * v4]);
  v13 = (void *)a1[1];
  if ( v4 > v11 )
  {
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
      v13,
      (__int64)v13 + 8 * v11,
      v12);
    v16 = (void *)std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
                    (void *)(8 * v11 + a1[1]),
                    a1[1] + v7,
                    v8);
    v15 = 8 * v11;
  }
  else
  {
    v14 = (void *)std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
                    v13,
                    (__int64)v13 + v7,
                    v12);
    memset_0(v14, 0, 8 * (v11 - v4));
    v15 = 8 * v4;
    v16 = v8;
  }
  memset_0(v16, 0, v15);
  v17 = (void *)a1[1];
  if ( v17 )
    std::_Deallocate<16>(v17, 8LL * a1[2]);
  a1[1] = v8;
  a1[2] += v11;
}
