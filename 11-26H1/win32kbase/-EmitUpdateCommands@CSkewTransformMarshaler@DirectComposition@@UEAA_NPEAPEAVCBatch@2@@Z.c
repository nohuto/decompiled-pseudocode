/*
 * XREFs of ?EmitUpdateCommands@CSkewTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140232A10
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AEA20 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetAngleYCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140167DC4 (-EmitSetAngleYCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterXCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022BF04 (-EmitSetCenterXCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterYCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C0D4 (-EmitSetCenterYCommand@CSkewTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSkewTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CSkewTransformMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  _QWORD *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
    {
      v7 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
        return v4;
      v5 = v7;
      *(_DWORD *)v7 = 16;
      v5[1] = 0LL;
      *((_DWORD *)v5 + 1) = 659;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 18);
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    if ( DirectComposition::CSkewTransformMarshaler::EmitSetAngleYCommand(this, a2)
      && DirectComposition::CSkewTransformMarshaler::EmitSetCenterXCommand(this, a2)
      && DirectComposition::CSkewTransformMarshaler::EmitSetCenterYCommand(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
