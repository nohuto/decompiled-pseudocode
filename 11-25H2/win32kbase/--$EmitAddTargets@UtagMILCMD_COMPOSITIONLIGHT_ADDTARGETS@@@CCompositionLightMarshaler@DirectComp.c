/*
 * XREFs of ??$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1400F952C
 * Callers:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400F9390 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x140100A6C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CCompositionLightMarshaler::EmitAddTargets<tagMILCMD_COMPOSITIONLIGHT_ADDTARGETS>(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        __int64 a3,
        unsigned int *a4,
        void *a5)
{
  unsigned int *i; // rdi
  void *v11; // rdx
  unsigned __int64 v12; // rbp
  char *v13; // rcx
  unsigned int v14; // r8d
  _DWORD *v15; // rcx
  unsigned int j; // edx
  __int64 v17; // rax

  for ( i = (unsigned int *)a5; *i < *a4; *i += v12 )
  {
    v11 = (void *)(4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL));
    a5 = v11;
    if ( (unsigned __int64)v11 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&a5) )
        return *i == *a4;
      v11 = a5;
    }
    v12 = *a4 - *i;
    if ( v12 >= ((unsigned __int64)v11 - 16) >> 2 )
      LODWORD(v12) = ((unsigned __int64)v11 - 16) >> 2;
    a5 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch ***)a2,
      (unsigned int)(4 * v12 + 16),
      &a5);
    v13 = (char *)a5;
    v14 = 0;
    *(_DWORD *)a5 = 4 * v12 + 16;
    *(_QWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 3) = 0;
    *((_DWORD *)v13 + 1) = 74;
    *((_DWORD *)v13 + 2) = *(_DWORD *)(a1 + 32);
    *((_DWORD *)v13 + 3) = v12;
    v15 = v13 + 16;
    for ( j = *i; v14 < (unsigned int)v12; ++v15 )
    {
      v17 = j;
      ++v14;
      ++j;
      *v15 = *(_DWORD *)(*(_QWORD *)(a3 + 8 * v17) + 32LL);
    }
  }
  return *i == *a4;
}
