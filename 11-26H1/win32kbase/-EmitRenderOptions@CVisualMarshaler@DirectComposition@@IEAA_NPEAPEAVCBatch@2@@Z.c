/*
 * XREFs of ?EmitRenderOptions@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140100F54
 * Callers:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF990 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitRenderOptions(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v4; // rcx
  _DWORD *v5; // rdx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x10000) == 0 )
    return 1;
  v6 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v6) )
  {
    v4 = (char *)v6;
    *(_DWORD *)v6 = 52;
    v5 = v4 + 12;
    *(_OWORD *)(v4 + 4) = 0LL;
    *(_OWORD *)(v4 + 20) = 0LL;
    *(_OWORD *)(v4 + 36) = 0LL;
    *((_DWORD *)v4 + 1) = 317;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    if ( *((_DWORD *)this + 69) != -1 )
    {
      *v5 |= 2u;
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 69);
    }
    if ( *((_DWORD *)this + 68) != -1 )
    {
      *v5 |= 4u;
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 68);
    }
    if ( *((_DWORD *)this + 70) != -1 )
    {
      *v5 |= 8u;
      *((_DWORD *)v4 + 8) = *((_DWORD *)this + 70);
    }
    if ( *((_DWORD *)this + 71) != -1 )
    {
      *v5 |= 0x10u;
      *((_DWORD *)v4 + 9) = *((_DWORD *)this + 71);
    }
    if ( *((_DWORD *)this + 72) != -1 )
    {
      *((_DWORD *)v4 + 3) |= 0x20u;
      *((_DWORD *)v4 + 10) = *((_DWORD *)this + 72);
    }
    if ( *((_DWORD *)this + 73) != -1 )
    {
      *((_DWORD *)v4 + 3) |= 0x40u;
      *((_DWORD *)v4 + 11) = *((_DWORD *)this + 73);
    }
    *((_DWORD *)this + 4) &= ~0x10000u;
    return 1;
  }
  return 0;
}
