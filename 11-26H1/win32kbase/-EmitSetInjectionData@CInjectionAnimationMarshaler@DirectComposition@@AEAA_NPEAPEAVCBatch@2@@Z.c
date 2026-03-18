/*
 * XREFs of ?EmitSetInjectionData@CInjectionAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140244860
 * Callers:
 *     ?EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140244920 (-EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInjectionAnimationMarshaler::EmitSetInjectionData(
        DirectComposition::CInjectionAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  _QWORD *v4; // rdx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x1000) == 0 && *((_QWORD *)this + 17) && *((_QWORD *)this + 19) )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v6) )
    {
      v4 = v6;
      *(_DWORD *)v6 = 24;
      v4[1] = 0LL;
      v4[2] = 0LL;
      *((_DWORD *)v4 + 1) = 102;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v4 + 3) = *(_DWORD *)(*((_QWORD *)this + 17) + 32LL);
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 36);
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 38);
      *((_DWORD *)this + 4) |= 0x1000u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
