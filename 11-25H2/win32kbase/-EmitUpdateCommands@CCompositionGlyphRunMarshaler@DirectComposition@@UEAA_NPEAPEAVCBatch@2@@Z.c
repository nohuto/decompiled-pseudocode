/*
 * XREFs of ?EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022AC10
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022CBB8 (-EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCompositionGlyphRunMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionGlyphRunMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  int v5; // eax
  char *v6; // rcx
  char *v7; // rcx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CTextObjectMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x100) != 0 )
    {
      v9 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
        return v4;
      v6 = (char *)v9;
      *(_DWORD *)v9 = 20;
      *(_OWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 1) = 495;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 10);
      *((_DWORD *)this + 4) &= ~0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x200) == 0 )
      return 1;
    v9 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
    {
      v7 = (char *)v9;
      *(_DWORD *)v9 = 20;
      *(_OWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 1) = 496;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v7 + 12) = *((_QWORD *)this + 11);
      *((_DWORD *)this + 4) &= ~0x200u;
      return 1;
    }
  }
  return v4;
}
