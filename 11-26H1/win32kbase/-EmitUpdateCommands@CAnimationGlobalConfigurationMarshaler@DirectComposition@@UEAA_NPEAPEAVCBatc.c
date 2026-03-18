/*
 * XREFs of ?EmitUpdateCommands@CAnimationGlobalConfigurationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022FF10
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CAnimationGlobalConfigurationMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationGlobalConfigurationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // bl
  _QWORD *v4; // rcx
  void *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  v3 = 0;
  v6 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v6) )
  {
    v4 = v6;
    *(_DWORD *)v6 = 16;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 1) = 361;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v4 + 3) = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return v3;
}
