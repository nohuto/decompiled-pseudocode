/*
 * XREFs of ?EmitSetLegacyTrigger@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014ADC0
 * Callers:
 *     ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14014ABE0 (-EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitSetLegacyTrigger(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _QWORD *v4; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 18) || (*((_DWORD *)this + 8) & 0x400) != 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v4 = v5;
    *(_DWORD *)v5 = 16;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 1) = 7;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 12);
    *((_DWORD *)v4 + 3) = *(_DWORD *)(*((_QWORD *)this + 18) + 32LL);
    *((_DWORD *)this + 8) |= 0x400u;
    return 1;
  }
  return 0;
}
