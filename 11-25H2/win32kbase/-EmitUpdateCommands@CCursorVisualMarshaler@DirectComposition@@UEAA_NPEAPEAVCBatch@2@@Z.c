/*
 * XREFs of ?EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022ADB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140025730 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCursorVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // eax
  char v5; // si
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx
  char *v9; // rcx
  void *v11; // [rsp+50h] [rbp+30h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 92);
  v5 = 1;
  if ( (v4 & 1) != 0 )
  {
    v11 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v11) )
      return 0;
    v6 = (char *)v11;
    *(_DWORD *)v11 = 20;
    *(_OWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 500;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 47);
    *((_DWORD *)this + 92) &= ~1u;
    v4 = *((_DWORD *)this + 92);
  }
  if ( (v4 & 2) != 0 )
  {
    v11 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v11) )
      return 0;
    v7 = (char *)v11;
    *(_DWORD *)v11 = 20;
    *(_OWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = 501;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v7 + 12) = *((_QWORD *)this + 48);
    *((_DWORD *)this + 92) &= ~2u;
    v4 = *((_DWORD *)this + 92);
  }
  if ( (v4 & 4) != 0 )
  {
    v11 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
      return 0;
    v8 = (char *)v11;
    *(_DWORD *)v11 = 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 502;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    v8[12] = *((_BYTE *)this + 392);
    *((_DWORD *)this + 92) &= ~4u;
    v4 = *((_DWORD *)this + 92);
  }
  if ( (v4 & 8) != 0 )
  {
    v11 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
    {
      v9 = (char *)v11;
      *(_DWORD *)v11 = 16;
      *(_QWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 3) = 0;
      *((_DWORD *)v9 + 1) = 503;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      v9[12] = *((_BYTE *)this + 393);
      *((_DWORD *)this + 92) &= ~8u;
      return v5;
    }
    return 0;
  }
  return v5;
}
