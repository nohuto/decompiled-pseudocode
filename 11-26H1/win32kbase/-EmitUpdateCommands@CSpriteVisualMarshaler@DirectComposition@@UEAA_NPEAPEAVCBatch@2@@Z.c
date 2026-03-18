/*
 * XREFs of ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF990 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bb1bee000cc755cbd48ecf2c45cd0691___ @ 0x140100684 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_bb1bee000cc755cbd48ecf2c45cd069.c)
 */

char __fastcall DirectComposition::CSpriteVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CSpriteVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  char v5; // di
  _QWORD *v6; // rcx
  __int64 v7; // rax
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 88);
  v5 = 1;
  if ( (v4 & 1) != 0 )
  {
    v9 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v9) )
      return 0;
    v6 = v9;
    *(_DWORD *)v9 = 16;
    v6[1] = 0LL;
    *((_DWORD *)v6 + 1) = 285;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    v7 = *((_QWORD *)this + 42);
    if ( v7 )
      LODWORD(v7) = *(_DWORD *)(v7 + 32);
    *((_DWORD *)v6 + 3) = v7;
    *((_DWORD *)this + 88) &= ~1u;
    v4 = *((_DWORD *)this + 88);
  }
  v9 = this;
  if ( (v4 & 2) != 0 )
  {
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_bb1bee000cc755cbd48ecf2c45cd0691___(
                            this,
                            a2,
                            &v9) )
    {
      *((_DWORD *)this + 88) &= ~2u;
      return v5;
    }
    return 0;
  }
  return v5;
}
