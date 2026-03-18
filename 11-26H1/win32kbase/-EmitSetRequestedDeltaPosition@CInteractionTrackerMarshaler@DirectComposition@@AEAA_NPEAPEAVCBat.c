/*
 * XREFs of ?EmitSetRequestedDeltaPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401463F0
 * Callers:
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401460C8 (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedDeltaPosition(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // di
  _QWORD *v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v6) )
    {
      v5 = v6;
      *(_DWORD *)v6 = 32;
      v5[1] = 0LL;
      v5[2] = 0LL;
      v5[3] = 0LL;
      *((_DWORD *)v5 + 1) = 132;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 36);
      *((_DWORD *)v5 + 4) = *((_DWORD *)this + 37);
      *((_DWORD *)v5 + 5) = *((_DWORD *)this + 55);
      *((_DWORD *)v5 + 7) = *((_DWORD *)this + 38);
      *((_DWORD *)this + 4) |= 0x200u;
      *((_QWORD *)this + 18) = 0LL;
      *((_DWORD *)this + 38) = 0;
      *((_DWORD *)this + 55) = 0;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
