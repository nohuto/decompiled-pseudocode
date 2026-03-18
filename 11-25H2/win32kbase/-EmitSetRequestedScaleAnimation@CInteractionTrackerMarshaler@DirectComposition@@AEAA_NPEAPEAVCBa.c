/*
 * XREFs of ?EmitSetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140103E7C
 * Callers:
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401033AC (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedScaleAnimation(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  char *v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40000) != 0 )
    return 1;
  v5 = *((_QWORD *)this + 28);
  if ( !v5
    || (v6 = *(_DWORD **)(v5 + 16)) == 0LL
    || v6[9] != 91
    || (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 64LL))(v6) )
  {
    v11 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v11) )
    {
      v7 = (char *)v11;
      *(_DWORD *)v11 = 36;
      *(_OWORD *)(v7 + 4) = 0LL;
      *(_OWORD *)(v7 + 20) = 0LL;
      *((_DWORD *)v7 + 1) = 200;
      v8 = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 2) = v8;
      v7[16] = (*((_BYTE *)this + 456) & 2) == 0;
      *((_DWORD *)v7 + 5) = *((_DWORD *)this + 45);
      *((_DWORD *)v7 + 6) = *((_DWORD *)this + 46);
      *((_DWORD *)v7 + 8) = *((_DWORD *)this + 44);
      v9 = *((_QWORD *)this + 28);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 16);
        if ( v10 )
          *((_DWORD *)v7 + 3) = *(_DWORD *)(v10 + 32);
      }
      *((_BYTE *)this + 456) |= 2u;
      *((_DWORD *)this + 4) |= 0x40000u;
      return 1;
    }
  }
  return 0;
}
