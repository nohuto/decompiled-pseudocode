/*
 * XREFs of ?EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230770
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF990 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCursorVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  char v5; // si
  char *v6; // rcx
  char *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  void *v11; // [rsp+50h] [rbp+30h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 84);
  v5 = 1;
  if ( (v4 & 1) != 0 )
  {
    v11 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x14uLL, &v11) )
      return 0;
    v6 = (char *)v11;
    *(_DWORD *)v11 = 20;
    *(_OWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 423;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 43);
    *((_DWORD *)this + 84) &= ~1u;
    v4 = *((_DWORD *)this + 84);
  }
  if ( (v4 & 2) != 0 )
  {
    v11 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x14uLL, &v11) )
      return 0;
    v7 = (char *)v11;
    *(_DWORD *)v11 = 20;
    *(_OWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = 424;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v7 + 12) = *((_QWORD *)this + 44);
    *((_DWORD *)this + 84) &= ~2u;
    v4 = *((_DWORD *)this + 84);
  }
  if ( (v4 & 4) != 0 )
  {
    v11 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v11) )
      return 0;
    v8 = v11;
    *(_DWORD *)v11 = 16;
    v8[1] = 0LL;
    *((_DWORD *)v8 + 1) = 425;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    *((_BYTE *)v8 + 12) = *((_BYTE *)this + 360);
    *((_DWORD *)this + 84) &= ~4u;
    v4 = *((_DWORD *)this + 84);
  }
  if ( (v4 & 8) != 0 )
  {
    v11 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v11) )
    {
      v9 = v11;
      *(_DWORD *)v11 = 16;
      v9[1] = 0LL;
      *((_DWORD *)v9 + 1) = 426;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *((_BYTE *)v9 + 12) = *((_BYTE *)this + 361);
      *((_DWORD *)this + 84) &= ~8u;
      return v5;
    }
    return 0;
  }
  return v5;
}
