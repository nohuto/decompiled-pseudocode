/*
 * XREFs of ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x1801C8484
 * Callers:
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x1801C83DC (--0CEnergyReporter@@AEAA@XZ.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x180208644 (--0CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180231778 (--0CProcessResourceAttributionReporter@@AEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

struct CProcessAttributionObserver *__fastcall CProcessAttributionManager::CreateObserver(
        CProcessAttributionManager *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  __int64 *v5; // r15
  __int64 *i; // rsi
  __int64 v8; // r14
  void *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  __int64 *v13; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = DefaultHeap::AllocClear(0x28uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v2[1] = this;
  v15 = v2;
  *v2 = &CProcessAttributionManager::Observer::`vftable';
  v2[2] = 0LL;
  v2[3] = 0LL;
  v2[4] = 0LL;
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v4 == *((_QWORD **)this + 5) )
  {
    std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
      (_QWORD *)this + 3,
      (__int64)v4,
      (__int64 *)&v15);
    v3 = v15;
  }
  else
  {
    *v4 = v2;
    *((_QWORD *)this + 4) += 8LL;
  }
  v5 = (__int64 *)*((_QWORD *)this + 1);
  for ( i = *(__int64 **)this; i != v5; ++i )
  {
    v8 = *i;
    ++*(_DWORD *)(*i + 160);
    v9 = operator new(0x70uLL);
    v10 = (__int64)v9;
    if ( v9 )
      memset_0(v9, 0, 0x70uLL);
    else
      v10 = 0LL;
    *(_QWORD *)v10 = *(_QWORD *)v8;
    v11 = *(_QWORD *)(v8 + 112);
    v15 = (_QWORD *)v10;
    if ( v11 )
    {
      *(_OWORD *)(v10 + 8) = *(_OWORD *)(v11 + 24);
      v12 = *(_DWORD *)(v11 + 40);
    }
    else
    {
      *(_OWORD *)(v10 + 8) = *(_OWORD *)(v8 + 8);
      v12 = *(_DWORD *)(v8 + 24);
    }
    *(_DWORD *)(v10 + 24) = v12;
    v13 = (__int64 *)v3[3];
    if ( v13 == (__int64 *)v3[4] )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        v3 + 2,
        (__int64)v13,
        (__int64 *)&v15);
    }
    else
    {
      *v13 = v10;
      v3[3] += 8LL;
    }
  }
  return (struct CProcessAttributionObserver *)v3;
}
