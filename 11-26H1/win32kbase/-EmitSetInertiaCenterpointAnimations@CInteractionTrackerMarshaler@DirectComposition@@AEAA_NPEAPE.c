/*
 * XREFs of ?EmitSetInertiaCenterpointAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140146A88
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140145F30 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaCenterpointAnimations(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v5; // di
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v5 = 1;
  if ( (v2 & 0x8000000) == 0 )
  {
    v13 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
      return 0;
    v7 = v13;
    *(_DWORD *)v13 = 16;
    v7[1] = 0LL;
    *((_DWORD *)v7 + 1) = 123;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    v8 = *((_QWORD *)this + 43);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 )
        *((_DWORD *)v7 + 3) = *(_DWORD *)(v9 + 32);
    }
    *((_DWORD *)this + 4) |= 0x8000000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x10000000) != 0 )
    return v5;
  v13 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
    return 0;
  v10 = v13;
  *(_DWORD *)v13 = 16;
  v10[1] = 0LL;
  *((_DWORD *)v10 + 1) = 124;
  *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
  v11 = *((_QWORD *)this + 44);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 16);
    if ( v12 )
      *((_DWORD *)v10 + 3) = *(_DWORD *)(v12 + 32);
  }
  *((_DWORD *)this + 4) |= 0x10000000u;
  return v5;
}
