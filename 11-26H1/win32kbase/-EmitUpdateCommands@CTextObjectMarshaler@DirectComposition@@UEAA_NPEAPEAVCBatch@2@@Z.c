/*
 * XREFs of ?EmitUpdateCommands@CTextObjectMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402332D0
 * Callers:
 *     ?EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402305D0 (-EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCompositionTextLineMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402306C0 (-EmitUpdateCommands@CCompositionTextLineMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CTextObjectMarshaler::EmitUpdateCommands(
        DirectComposition::CTextObjectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // bl
  _QWORD *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  char *v9; // rcx
  char *v10; // rcx
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x40) != 0 )
  {
    v12 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
      return v3;
    v6 = v12;
    *(_DWORD *)v12 = 16;
    v6[1] = 0LL;
    *((_DWORD *)v6 + 1) = 713;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    v7 = *((_QWORD *)this + 7);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 32);
    else
      v8 = 0;
    *((_DWORD *)v6 + 3) = v8;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v12 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v12) )
      return v3;
    v9 = (char *)v12;
    *(_DWORD *)v12 = 20;
    *(_OWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 1) = 714;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v9 + 12) = *((_QWORD *)this + 8);
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x100) == 0 )
    return 1;
  v12 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v12) )
  {
    v10 = (char *)v12;
    *(_DWORD *)v12 = 20;
    *(_OWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 1) = 715;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v10 + 12) = *((_QWORD *)this + 9);
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return v3;
}
