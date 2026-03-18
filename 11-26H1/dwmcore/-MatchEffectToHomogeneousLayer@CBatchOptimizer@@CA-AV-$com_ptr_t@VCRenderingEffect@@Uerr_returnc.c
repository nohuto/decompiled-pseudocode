/*
 * XREFs of ?MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@AEBUSharedStateLayer@@PEAVCRenderingEffect@@@Z @ 0x1800CEE90
 * Callers:
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800CEC20 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CBatchOptimizer::MatchEffectToHomogeneousLayer(
        _QWORD *a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD))
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  char v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = *(__int64 **)(a2 + 32);
  if ( v4 )
    goto LABEL_6;
  if ( *(_DWORD *)(a2 + 20) == 1 )
  {
    v5 = *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) - 1) + 40);
    v6 = 80LL;
    v7 = *(_BYTE *)(v5 + 92) == 0;
    v8 = *(_QWORD *)(v5 + 8);
    if ( v7 )
      v6 = 24LL;
    v4 = *(__int64 **)(v6 + v8);
    if ( v4 )
    {
LABEL_6:
      v9 = *v4;
      v12 = 0;
      (*(void (__fastcall **)(__int64 *, __int64 *, void (__fastcall ***)(_QWORD), char *))(v9 + 72))(
        v4,
        &v13,
        a3,
        &v12);
      if ( !v12 )
      {
        v10 = v13;
        v13 = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      }
      *a1 = v13;
      return a1;
    }
  }
  *a1 = a3;
  if ( !a3 )
    return a1;
  (**a3)(a3);
  return a1;
}
