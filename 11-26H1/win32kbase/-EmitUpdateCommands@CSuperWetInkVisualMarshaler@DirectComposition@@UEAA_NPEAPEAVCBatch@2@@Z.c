/*
 * XREFs of ?EmitUpdateCommands@CSuperWetInkVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140232C20
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF990 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSuperWetInkVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CSuperWetInkVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // ebx
  char v5; // si
  _QWORD *v6; // rcx
  __int64 v7; // rax
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v5 = 1;
  if ( (*((_DWORD *)this + 84) & 1) == 0 )
    return v5;
  v9 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v9) )
    return 0;
  v6 = v9;
  *(_DWORD *)v9 = 16;
  v6[1] = 0LL;
  *((_DWORD *)v6 + 1) = 676;
  *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
  v7 = *((_QWORD *)this + 43);
  if ( v7 )
    v4 = *(_DWORD *)(v7 + 32);
  *((_DWORD *)v6 + 3) = v4;
  *((_DWORD *)this + 84) &= ~1u;
  return v5;
}
