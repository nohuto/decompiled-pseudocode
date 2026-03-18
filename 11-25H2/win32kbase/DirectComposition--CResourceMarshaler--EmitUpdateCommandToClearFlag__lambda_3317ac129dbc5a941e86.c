/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_3317ac129dbc5a941e863092f5dff627___ @ 0x14023CDDC
 * Callers:
 *     ?EmitUpdateCommands@CSceneSurfaceMaterialInputMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14023CE80 (-EmitUpdateCommands@CSceneSurfaceMaterialInputMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_3317ac129dbc5a941e863092f5dff627___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // edi
  _DWORD *v7; // rcx
  __int64 v8; // rax
  _DWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 16) & 0x40) == 0 )
    return 1;
  v6 = 0;
  v10 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, (void **)&v10) )
  {
    v7 = v10;
    *v10 = 32;
    *(_OWORD *)(v7 + 1) = 0LL;
    *(_QWORD *)(v7 + 5) = 0LL;
    v7[7] = 0;
    v7[1] = 338;
    v7[2] = *(_DWORD *)(a1 + 32);
    v8 = *(_QWORD *)(a4 + 56);
    if ( v8 )
      v6 = *(_DWORD *)(v8 + 32);
    v7[3] = v6;
    *((_OWORD *)v7 + 1) = *(_OWORD *)(a4 + 64);
    *(_DWORD *)(a1 + 16) &= ~0x40u;
    return 1;
  }
  return 0;
}
