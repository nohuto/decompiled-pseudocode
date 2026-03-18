/*
 * XREFs of ?EmitUpdateCommands@CPositionedLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140231A04
 * Callers:
 *     ?EmitUpdateCommands@CDistantLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230A00 (-EmitUpdateCommands@CDistantLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CPointLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402318C0 (-EmitUpdateCommands@CPointLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSpotLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140232AD0 (-EmitUpdateCommands@CSpotLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402316D0 (-EmitUpdateCommands@CLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CPositionedLightMarshaler::EmitUpdateCommands(
        DirectComposition::CPositionedLightMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // ebx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    {
LABEL_7:
      LOBYTE(v4) = 1;
      return v4;
    }
    v8 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
    {
      v5 = v8;
      *(_DWORD *)v8 = 16;
      v5[1] = 0LL;
      *((_DWORD *)v5 + 1) = 587;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      v6 = *((_QWORD *)this + 14);
      if ( v6 )
        v4 = *(_DWORD *)(v6 + 32);
      *((_DWORD *)v5 + 3) = v4;
      *((_DWORD *)this + 4) &= ~0x80u;
      goto LABEL_7;
    }
  }
  return v4;
}
