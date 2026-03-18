/*
 * XREFs of ?EmitSetRequestedPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140103DB4
 * Callers:
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401033AC (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedPosition(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  char *v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v6) )
    {
      v5 = (char *)v6;
      *(_DWORD *)v6 = 36;
      *(_OWORD *)(v5 + 4) = 0LL;
      *(_OWORD *)(v5 + 20) = 0LL;
      *((_DWORD *)v5 + 1) = 197;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 30);
      *((_DWORD *)v5 + 4) = *((_DWORD *)this + 31);
      *((_DWORD *)v5 + 5) = *((_DWORD *)this + 51);
      *((_DWORD *)v5 + 6) = *((_DWORD *)this + 53);
      *((_DWORD *)v5 + 8) = *((_DWORD *)this + 32);
      *((_DWORD *)this + 4) |= 0x200u;
      *((_DWORD *)this + 30) = 0;
      *((_DWORD *)this + 31) = 0;
      *((_DWORD *)this + 32) = 0;
      *((_DWORD *)this + 51) = 0;
      *((_DWORD *)this + 53) = 0;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
