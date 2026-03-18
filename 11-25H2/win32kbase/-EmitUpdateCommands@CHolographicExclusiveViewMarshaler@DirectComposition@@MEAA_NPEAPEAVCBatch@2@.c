/*
 * XREFs of ?EmitUpdateCommands@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140237F30
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140237E34 (-EmitCreate@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140237FD4 (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  char *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CHolographicExclusiveViewMarshaler::EmitCreate(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
    {
      v9 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v9) )
        return v4;
      v5 = (char *)v9;
      *(_DWORD *)v9 = 16;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 3) = 0;
      *((_DWORD *)v5 + 1) = 153;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      v6 = *((_QWORD *)this + 12);
      if ( v6 )
        v7 = *(_DWORD *)(v6 + 32);
      else
        v7 = 0;
      *((_DWORD *)v5 + 3) = v7;
      *((_DWORD *)this + 4) &= ~0x40u;
    }
    if ( DirectComposition::CHolographicExclusiveViewMarshaler::EmitViewData(
           this,
           (struct DirectComposition::CBatch **)a2) )
    {
      return 1;
    }
  }
  return v4;
}
