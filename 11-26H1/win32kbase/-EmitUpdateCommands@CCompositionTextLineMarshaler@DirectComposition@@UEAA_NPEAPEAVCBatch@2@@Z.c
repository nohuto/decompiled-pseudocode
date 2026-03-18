/*
 * XREFs of ?EmitUpdateCommands@CCompositionTextLineMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402306C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetThicknessCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022F74C (-EmitSetThicknessCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetWidthCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022FB7C (-EmitSetWidthCommand@CCompositionTextLineMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402332D0 (-EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCompositionTextLineMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionTextLineMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  _QWORD *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CTextObjectMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x200) != 0 )
    {
      v7 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
        return v4;
      v5 = v7;
      *(_DWORD *)v7 = 16;
      v5[1] = 0LL;
      *((_DWORD *)v5 + 1) = 420;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 20);
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    if ( DirectComposition::CCompositionTextLineMarshaler::EmitSetWidthCommand(this, a2)
      && DirectComposition::CCompositionTextLineMarshaler::EmitSetThicknessCommand(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
