/*
 * XREFs of ?EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1402338F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14023362C (-EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentCountUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1402336C0 (-EmitSegmentCountUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140233734 (-EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CInkMarshaler::EmitUpdateCommands(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  char *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CInkMarshaler::EmitBasicStateUpdate(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    {
      v7 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v7) )
        return v4;
      v5 = (char *)v7;
      *(_DWORD *)v7 = 24;
      *(_OWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 5) = 0;
      *((_DWORD *)v5 + 1) = 169;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 25);
      *((_DWORD *)v5 + 4) = *((_DWORD *)this + 26);
      *((_DWORD *)v5 + 5) = *((_DWORD *)this + 27);
      *((_DWORD *)this + 4) |= 0x40u;
    }
    if ( DirectComposition::CInkMarshaler::EmitSegmentCountUpdate(this, a2)
      && DirectComposition::CInkMarshaler::EmitSegmentUpdate(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
