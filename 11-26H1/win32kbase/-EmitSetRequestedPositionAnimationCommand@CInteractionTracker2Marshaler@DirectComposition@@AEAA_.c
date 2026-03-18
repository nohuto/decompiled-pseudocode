/*
 * XREFs of ?EmitSetRequestedPositionAnimationCommand@CInteractionTracker2Marshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14022EC30
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTracker2Marshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230FE0 (-EmitUpdateCommands@CInteractionTracker2Marshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTracker2Marshaler::EmitSetRequestedPositionAnimationCommand(
        DirectComposition::CInteractionTracker2Marshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v3; // ebx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 20) & 0x10000000) == 0 )
    return 1;
  v3 = 0;
  v8 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
  {
    v4 = v8;
    *(_DWORD *)v8 = 16;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 1) = 509;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    v5 = *((_QWORD *)this + 29);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 16);
      if ( v6 )
        v3 = *(_DWORD *)(v6 + 32);
    }
    *((_DWORD *)v4 + 3) = v3;
    *((_DWORD *)this + 20) &= ~0x10000000u;
    return 1;
  }
  return 0;
}
