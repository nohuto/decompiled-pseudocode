/*
 * XREFs of ?EmitUpdateCommands@CLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402316D0
 * Callers:
 *     ?EmitUpdateCommands@CAmbientLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022FD80 (-EmitUpdateCommands@CAmbientLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CPositionedLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140231A04 (-EmitUpdateCommands@CPositionedLightMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0CCE@$0CCF@$0A@$0JM@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234844 (-Marshal@-$CResourceMarshalerArray@$0CCE@$0CCF@$0A@$0JM@@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0CCG@$0CCH@$0A@$0JM@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140234868 (-Marshal@-$CResourceMarshalerArray@$0CCG@$0CCH@$0A@$0JM@@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 */

char __fastcall DirectComposition::CLightMarshaler::EmitUpdateCommands(
        DirectComposition::CLightMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  _DWORD *v5; // rcx
  _DWORD *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    v7 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v7) )
      return v2;
    v5 = v7;
    *v7 = 16;
    *((_QWORD *)v5 + 1) = 0LL;
    v5[1] = 547;
    v5[2] = *((_DWORD *)this + 8);
    *((_BYTE *)v5 + 12) = *((_BYTE *)this + 56);
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  if ( (unsigned __int8)DirectComposition::CResourceMarshalerArray<548,549,0,156>::Marshal(
                          (char *)this + 64,
                          a2,
                          *((unsigned int *)this + 8))
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<550,551,0,156>::Marshal(
                          (char *)this + 88,
                          a2,
                          *((unsigned int *)this + 8)) )
  {
    return 1;
  }
  return v2;
}
