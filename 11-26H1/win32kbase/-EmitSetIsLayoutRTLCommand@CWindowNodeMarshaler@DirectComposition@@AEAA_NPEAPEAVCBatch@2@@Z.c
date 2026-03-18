/*
 * XREFs of ?EmitSetIsLayoutRTLCommand@CWindowNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401000E4
 * Callers:
 *     ?EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF730 (-EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CWindowNodeMarshaler::EmitSetIsLayoutRTLCommand(
        DirectComposition::CWindowNodeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _QWORD *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 84) & 0x400) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v4 = v5;
    *(_DWORD *)v5 = 16;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 1) = 752;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *((_BYTE *)v4 + 12) = *((_BYTE *)this + 435);
    *((_DWORD *)this + 84) &= ~0x400u;
    return 1;
  }
  return 0;
}
