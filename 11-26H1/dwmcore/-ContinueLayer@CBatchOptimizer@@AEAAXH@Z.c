/*
 * XREFs of ?ContinueLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180070C04
 * Callers:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800706D0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 * Callees:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800702C0 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBatchOptimizer::ContinueLayer(CBatchOptimizer *this, int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v5; // rsi
  void (__fastcall ***v6)(_QWORD); // r14
  __int64 v7; // r15
  int *v8; // r14
  __int64 v9; // rdx
  void (__fastcall ***v10)(_QWORD); // rcx
  __int64 v11; // r15
  int v12; // edx

  v2 = a2;
  v3 = 0LL;
  v5 = 520LL * *((int *)this + a2 + 12);
  if ( *(_DWORD *)((char *)this + v5 + 100) )
    *(_DWORD *)((char *)this + v5 + 104) = 1;
  if ( a2 )
  {
    CBatchOptimizer::FlushBottomLayer(this);
    v8 = (int *)((char *)this + 48);
    v9 = 520LL * *((int *)this + 12);
    *(_OWORD *)((char *)this + v9 + 80) = *(_OWORD *)((char *)this + v5 + 80);
    v10 = *(void (__fastcall ****)(_QWORD))((char *)this + v5 + 112);
    v11 = *(_QWORD *)((char *)this + v9 + 112);
    *(_QWORD *)((char *)this + v9 + 112) = v10;
    if ( v10 )
      (**v10)(v10);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = *v8;
    do
    {
      ++v3;
      *v8 = v8[1];
      ++v8;
    }
    while ( v3 != v2 );
    *((_DWORD *)this + v2 + 12) = v12;
  }
  else
  {
    v6 = *(void (__fastcall ****)(_QWORD))((char *)this + v5 + 112);
    CBatchOptimizer::FlushBottomLayer(this);
    v7 = *(_QWORD *)((char *)this + v5 + 112);
    *(_QWORD *)((char *)this + v5 + 112) = v6;
    if ( v6 )
      (**v6)(v6);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
}
