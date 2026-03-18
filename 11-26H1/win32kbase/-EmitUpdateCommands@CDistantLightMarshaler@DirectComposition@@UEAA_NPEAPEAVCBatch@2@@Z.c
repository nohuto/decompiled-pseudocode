/*
 * XREFs of ?EmitUpdateCommands@CDistantLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230A00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetDirectionCommand@CDistantLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C4FC (-EmitSetDirectionCommand@CDistantLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CPositionedLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140231A04 (-EmitUpdateCommands@CPositionedLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CDistantLightMarshaler::EmitUpdateCommands(
        DirectComposition::CDistantLightMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  char *v5; // rcx
  _QWORD *v6; // rcx
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPositionedLightMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
    {
      v8 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v8) )
        return v4;
      v5 = (char *)v8;
      *(_DWORD *)v8 = 28;
      *(_OWORD *)(v5 + 4) = 0LL;
      *(_QWORD *)(v5 + 20) = 0LL;
      *((_DWORD *)v5 + 1) = 431;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *(_OWORD *)(v5 + 12) = *(_OWORD *)((char *)this + 120);
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    if ( DirectComposition::CDistantLightMarshaler::EmitSetDirectionCommand(this, a2) )
    {
      if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
        return 1;
      v8 = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
      {
        v6 = v8;
        *(_DWORD *)v8 = 16;
        v6[1] = 0LL;
        *((_DWORD *)v6 + 1) = 433;
        *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v6 + 3) = *((_DWORD *)this + 37);
        *((_DWORD *)this + 4) &= ~0x400u;
        return 1;
      }
    }
  }
  return v4;
}
