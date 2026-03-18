/*
 * XREFs of ?EmitSetRequestedScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140103444
 * Callers:
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401033AC (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedScale(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  char *v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x20000) == 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v6) )
    {
      v5 = (char *)v6;
      *(_DWORD *)v6 = 32;
      *(_OWORD *)(v5 + 4) = 0LL;
      *(_QWORD *)(v5 + 20) = 0LL;
      *((_DWORD *)v5 + 7) = 0;
      *((_DWORD *)v5 + 1) = 199;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 42);
      *((_DWORD *)v5 + 4) = *((_DWORD *)this + 45);
      *((_DWORD *)v5 + 5) = *((_DWORD *)this + 46);
      *((_DWORD *)v5 + 7) = *((_DWORD *)this + 43);
      *((_DWORD *)this + 4) |= 0x20000u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
