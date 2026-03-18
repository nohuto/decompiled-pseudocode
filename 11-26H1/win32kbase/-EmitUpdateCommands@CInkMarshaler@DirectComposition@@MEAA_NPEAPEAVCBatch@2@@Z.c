/*
 * XREFs of ?EmitUpdateCommands@CInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14023C940
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14023C66C (-EmitBasicStateUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentCountUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14023C704 (-EmitSegmentCountUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14023C77C (-EmitSegmentUpdate@CInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CInkMarshaler::EmitUpdateCommands(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  _QWORD *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CInkMarshaler::EmitBasicStateUpdate(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    {
      v7 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v7) )
        return v4;
      v5 = v7;
      *(_DWORD *)v7 = 24;
      v5[1] = 0LL;
      v5[2] = 0LL;
      *((_DWORD *)v5 + 1) = 106;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 25);
      *((_DWORD *)v5 + 4) = *((_DWORD *)this + 26);
      *((_DWORD *)v5 + 5) = *((_DWORD *)this + 27);
      *((_DWORD *)this + 4) |= 0x80u;
    }
    if ( DirectComposition::CInkMarshaler::EmitSegmentCountUpdate(this, a2)
      && DirectComposition::CInkMarshaler::EmitSegmentUpdate(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
