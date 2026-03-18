/*
 * XREFs of ?EmitCallbackId@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14014ACAC
 * Callers:
 *     ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14014ABE0 (-EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitCallbackId(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  _QWORD *v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 8) & 0x20000) != 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v6) )
    {
      v5 = v6;
      *(_DWORD *)v6 = 16;
      v5[1] = 0LL;
      *((_DWORD *)v5 + 1) = 4;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 12);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 56);
      *((_DWORD *)this + 8) &= ~0x20000u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
