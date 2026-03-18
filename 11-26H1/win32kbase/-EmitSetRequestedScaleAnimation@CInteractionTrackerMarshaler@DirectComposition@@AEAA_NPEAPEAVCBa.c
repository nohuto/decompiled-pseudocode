/*
 * XREFs of ?EmitSetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140146218
 * Callers:
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401460C8 (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedScaleAnimation(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  char *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x80000) != 0 )
    return 1;
  v5 = *((_QWORD *)this + 30);
  if ( !v5
    || (v6 = *(_DWORD **)(v5 + 16)) == 0LL
    || v6[9] != 70
    || (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 56LL))(v6) )
  {
    v10 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v10) )
    {
      v7 = (char *)v10;
      *(_DWORD *)v10 = 36;
      *(_OWORD *)(v7 + 4) = 0LL;
      *(_OWORD *)(v7 + 20) = 0LL;
      *((_DWORD *)v7 + 1) = 136;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      v7[16] = (*((_BYTE *)this + 428) & 2) == 0;
      *((_DWORD *)v7 + 5) = *((_DWORD *)this + 48);
      *((_DWORD *)v7 + 6) = *((_DWORD *)this + 49);
      *((_DWORD *)v7 + 8) = *((_DWORD *)this + 47);
      v8 = *((_QWORD *)this + 30);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 16);
        if ( v9 )
          *((_DWORD *)v7 + 3) = *(_DWORD *)(v9 + 32);
      }
      *((_BYTE *)this + 428) |= 2u;
      *((_DWORD *)this + 4) |= 0x80000u;
      return 1;
    }
  }
  return 0;
}
