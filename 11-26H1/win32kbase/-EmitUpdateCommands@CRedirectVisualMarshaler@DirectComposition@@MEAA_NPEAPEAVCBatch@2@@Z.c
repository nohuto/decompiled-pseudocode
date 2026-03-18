/*
 * XREFs of ?EmitUpdateCommands@CRedirectVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF590
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF990 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CRedirectVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CRedirectVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // ebx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    if ( (*((_DWORD *)this + 86) & 1) == 0 )
      return 1;
    v8 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
    {
      v6 = v8;
      *(_DWORD *)v8 = 16;
      v6[1] = 0LL;
      *((_DWORD *)v6 + 1) = 243;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      v7 = *((_QWORD *)this + 42);
      if ( v7 )
        v4 = *(_DWORD *)(v7 + 32);
      *((_DWORD *)v6 + 3) = v4;
      *((_DWORD *)this + 86) &= ~1u;
      return 1;
    }
  }
  return 0;
}
