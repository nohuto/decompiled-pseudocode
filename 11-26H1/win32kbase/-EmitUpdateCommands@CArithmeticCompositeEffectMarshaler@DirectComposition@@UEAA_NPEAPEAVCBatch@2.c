/*
 * XREFs of ?EmitUpdateCommands@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022FF80
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetClampOutputCommand@CArithmeticCompositeEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C230 (-EmitSetClampOutputCommand@CArithmeticCompositeEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?EmitSetCoefficient2Command@CArithmeticCompositeEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C394 (-EmitSetCoefficient2Command@CArithmeticCompositeEffectMarshaler@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitSetCoefficient3Command@CArithmeticCompositeEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C40C (-EmitSetCoefficient3Command@CArithmeticCompositeEffectMarshaler@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitSetCoefficient4Command@CArithmeticCompositeEffectMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C484 (-EmitSetCoefficient4Command@CArithmeticCompositeEffectMarshaler@DirectComposition@@AEAA_NPEAPEAV.c)
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230B00 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  _QWORD *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CFilterEffectMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x400) != 0 )
    {
      v7 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
        return v4;
      v5 = v7;
      *(_DWORD *)v7 = 16;
      v5[1] = 0LL;
      *((_DWORD *)v5 + 1) = 367;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 64);
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    if ( DirectComposition::CArithmeticCompositeEffectMarshaler::EmitSetCoefficient2Command(this, a2)
      && DirectComposition::CArithmeticCompositeEffectMarshaler::EmitSetCoefficient3Command(this, a2)
      && DirectComposition::CArithmeticCompositeEffectMarshaler::EmitSetCoefficient4Command(this, a2)
      && DirectComposition::CArithmeticCompositeEffectMarshaler::EmitSetClampOutputCommand(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
