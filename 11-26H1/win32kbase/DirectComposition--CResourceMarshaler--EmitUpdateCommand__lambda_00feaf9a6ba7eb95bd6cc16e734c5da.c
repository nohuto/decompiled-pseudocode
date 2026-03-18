/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_00feaf9a6ba7eb95bd6cc16e734c5da4___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___ @ 0x14023E514
 * Callers:
 *     ?EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140137760 (-EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1400B0798 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_00feaf9a6ba7eb95bd6cc16e734c5da4___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  void *v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r14
  char *v14; // rcx
  _DWORD *v15; // r9
  unsigned int v16; // r8d
  __int64 v17; // rdx
  void *v19; // [rsp+58h] [rbp+10h] BYREF

  v6 = a6;
  while ( 1 )
  {
    v11 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v19 = v11;
    if ( (unsigned __int64)v11 < 0x14 )
      break;
LABEL_5:
    v19 = 0LL;
    v12 = ((unsigned __int64)v11 - 16) >> 2;
    v13 = a4 - *a3;
    if ( v13 >= v12 )
      LODWORD(v13) = v12;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v13 + 16), &v19);
    v14 = (char *)v19;
    *(_DWORD *)v19 = 4 * v13 + 16;
    v15 = v14 + 16;
    *((_QWORD *)v14 + 1) = 0LL;
    *((_DWORD *)v14 + 1) = 280;
    *((_DWORD *)v14 + 2) = *(_DWORD *)(a1 + 32);
    v16 = 0;
    for ( v14[12] = *a3 != 0; v16 < (unsigned int)v13; ++v15 )
    {
      ++v16;
      v17 = *a3;
      *a3 = v17 + 1;
      *v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 88LL) + 4 * v17);
    }
    if ( *a3 >= a4 )
      return 1;
  }
  if ( DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v19) )
  {
    v11 = v19;
    goto LABEL_5;
  }
  return 0;
}
