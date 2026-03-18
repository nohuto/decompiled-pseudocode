/*
 * XREFs of ?EmitBrush@CProjectedShadowCasterMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140245F30
 * Callers:
 *     ?EmitUpdateCommands@CProjectedShadowCasterMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401A1540 (-EmitUpdateCommands@CProjectedShadowCasterMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CProjectedShadowCasterMarshaler::EmitBrush(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v3; // ebx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
  {
LABEL_6:
    LOBYTE(v3) = 1;
    return v3;
  }
  v3 = 0;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
  {
    v4 = v7;
    *(_DWORD *)v7 = 16;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 1) = 214;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    v5 = *((_QWORD *)this + 11);
    if ( v5 )
      v3 = *(_DWORD *)(v5 + 32);
    *((_DWORD *)v4 + 3) = v3;
    *((_DWORD *)this + 4) &= ~0x200u;
    goto LABEL_6;
  }
  return v3;
}
