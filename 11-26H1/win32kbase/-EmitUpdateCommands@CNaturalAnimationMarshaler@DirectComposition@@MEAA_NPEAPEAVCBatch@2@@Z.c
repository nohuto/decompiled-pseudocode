/*
 * XREFs of ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140244E50
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdatesCompletedForResource@CResourceMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x140120744 (-EmitUpdatesCompletedForResource@CResourceMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401A1634 (-EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401C0BA0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommonParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140244FF0 (-EmitUpdateCommonParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  __int64 v4; // r8
  char v5; // bl
  int v6; // eax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2) )
  {
    v6 = *((_DWORD *)this + 4);
    if ( (v6 & 0x8000) != 0 )
    {
      v11 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v11) )
        return v5;
      v7 = v11;
      *(_DWORD *)v11 = 24;
      v7[1] = 0LL;
      v7[2] = 0LL;
      *((_DWORD *)v7 + 1) = 175;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)((char *)v7 + 12) = *(_QWORD *)((char *)this + 148);
      *((_DWORD *)v7 + 5) = *((_DWORD *)this + 39);
      *((_DWORD *)this + 4) &= ~0x8000u;
      v6 = *((_DWORD *)this + 4);
    }
    if ( (v6 & 0x2000) != 0 )
    {
      v11 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v11) )
        return v5;
      v8 = v11;
      *(_DWORD *)v11 = 24;
      v8[1] = 0LL;
      v8[2] = 0LL;
      *((_DWORD *)v8 + 1) = 176;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)((char *)v8 + 12) = *((_QWORD *)this + 17);
      *((_DWORD *)v8 + 5) = *((_DWORD *)this + 36);
      *((_DWORD *)this + 4) &= ~0x2000u;
      v6 = *((_DWORD *)this + 4);
    }
    if ( (v6 & 0x10000) != 0 )
    {
      v11 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v11) )
        return v5;
      v9 = v11;
      *(_DWORD *)v11 = 24;
      v9[1] = 0LL;
      v9[2] = 0LL;
      *((_DWORD *)v9 + 1) = 177;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)((char *)v9 + 12) = *((_QWORD *)this + 20);
      *((_DWORD *)v9 + 5) = *((_DWORD *)this + 42);
      *((_DWORD *)this + 4) &= ~0x10000u;
    }
    if ( DirectComposition::CNaturalAnimationMarshaler::EmitUpdateMotionParameters(this, a2, v4)
      && DirectComposition::CNaturalAnimationMarshaler::EmitUpdateCommonParameters(
           this,
           (struct DirectComposition::CBatch **)a2)
      && DirectComposition::CResourceMarshaler::EmitUpdatesCompletedForResource(this, a2) )
    {
      return 1;
    }
  }
  return v5;
}
