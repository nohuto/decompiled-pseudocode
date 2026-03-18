/*
 * XREFs of ?EmitUpdateCommands@CImageLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022B320
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetCacheInvalidationThresholdMaximumCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140229564 (-EmitSetCacheInvalidationThresholdMaximumCommand@CImageLegacyMilBrushMarshaler@DirectComposition.c)
 *     ?EmitSetImageSourceCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140229CFC (-EmitSetImageSourceCommand@CImageLegacyMilBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022B768 (-EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CImageLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CImageLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx
  char *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  char *v12; // rcx
  char *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  char *v16; // rcx
  char *v17; // rcx
  char *v18; // rcx
  char *v19; // rcx
  char *v20; // rcx
  char *v21; // rcx
  void *v23; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CLegacyMilBrushMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( (v5 & 0x200) != 0 )
    {
      v23 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v23) )
        return v4;
      v6 = (char *)v23;
      *(_DWORD *)v23 = 16;
      *(_QWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 1) = 528;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v6 + 3) = *((_DWORD *)this + 22);
      *((_DWORD *)this + 4) &= ~0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x400) != 0 )
    {
      v23 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v23) )
        return v4;
      v7 = (char *)v23;
      *(_DWORD *)v23 = 16;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 1) = 529;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 23);
      *((_DWORD *)this + 4) &= ~0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x800) != 0 )
    {
      v23 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v23) )
        return v4;
      v8 = (char *)v23;
      *(_DWORD *)v23 = 28;
      *(_OWORD *)(v8 + 4) = 0LL;
      *(_QWORD *)(v8 + 20) = 0LL;
      *((_DWORD *)v8 + 1) = 530;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *(_OWORD *)(v8 + 12) = *((_OWORD *)this + 6);
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x1000) != 0 )
    {
      v23 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v23) )
        return v4;
      v9 = (char *)v23;
      *(_DWORD *)v23 = 16;
      *(_QWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 3) = 0;
      *((_DWORD *)v9 + 1) = 531;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      v10 = *((_QWORD *)this + 14);
      if ( v10 )
        v11 = *(_DWORD *)(v10 + 32);
      else
        v11 = 0;
      *((_DWORD *)v9 + 3) = v11;
      *((_DWORD *)this + 4) &= ~0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x2000) != 0 )
    {
      v23 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v23) )
        return v4;
      v12 = (char *)v23;
      *(_DWORD *)v23 = 28;
      *(_OWORD *)(v12 + 4) = 0LL;
      *(_QWORD *)(v12 + 20) = 0LL;
      *((_DWORD *)v12 + 1) = 532;
      *((_DWORD *)v12 + 2) = *((_DWORD *)this + 8);
      *(_OWORD *)(v12 + 12) = *(_OWORD *)((char *)this + 120);
      *((_DWORD *)this + 4) &= ~0x2000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x4000) != 0 )
    {
      v23 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v23) )
        return v4;
      v13 = (char *)v23;
      *(_DWORD *)v23 = 16;
      *(_QWORD *)(v13 + 4) = 0LL;
      *((_DWORD *)v13 + 3) = 0;
      *((_DWORD *)v13 + 1) = 533;
      *((_DWORD *)v13 + 2) = *((_DWORD *)this + 8);
      v14 = *((_QWORD *)this + 17);
      if ( v14 )
        v15 = *(_DWORD *)(v14 + 32);
      else
        v15 = 0;
      *((_DWORD *)v13 + 3) = v15;
      *((_DWORD *)this + 4) &= ~0x4000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x8000) != 0 )
    {
      v23 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v23) )
        return v4;
      v16 = (char *)v23;
      *(_DWORD *)v23 = 16;
      *(_QWORD *)(v16 + 4) = 0LL;
      *((_DWORD *)v16 + 3) = 0;
      *((_DWORD *)v16 + 1) = 534;
      *((_DWORD *)v16 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v16 + 3) = *((_DWORD *)this + 36);
      *((_DWORD *)this + 4) &= ~0x8000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x10000) != 0 )
    {
      v23 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v23) )
        return v4;
      v17 = (char *)v23;
      *(_DWORD *)v23 = 16;
      *(_QWORD *)(v17 + 4) = 0LL;
      *((_DWORD *)v17 + 3) = 0;
      *((_DWORD *)v17 + 1) = 535;
      *((_DWORD *)v17 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v17 + 3) = *((_DWORD *)this + 37);
      *((_DWORD *)this + 4) &= ~0x10000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x20000) != 0 )
    {
      v23 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v23) )
        return v4;
      v18 = (char *)v23;
      *(_DWORD *)v23 = 16;
      *(_QWORD *)(v18 + 4) = 0LL;
      *((_DWORD *)v18 + 3) = 0;
      *((_DWORD *)v18 + 1) = 536;
      *((_DWORD *)v18 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v18 + 3) = *((_DWORD *)this + 38);
      *((_DWORD *)this + 4) &= ~0x20000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x40000) != 0 )
    {
      v23 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v23) )
        return v4;
      v19 = (char *)v23;
      *(_DWORD *)v23 = 16;
      *(_QWORD *)(v19 + 4) = 0LL;
      *((_DWORD *)v19 + 3) = 0;
      *((_DWORD *)v19 + 1) = 537;
      *((_DWORD *)v19 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v19 + 3) = *((_DWORD *)this + 39);
      *((_DWORD *)this + 4) &= ~0x40000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x80000) != 0 )
    {
      v23 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v23) )
        return v4;
      v20 = (char *)v23;
      *(_DWORD *)v23 = 16;
      *(_QWORD *)(v20 + 4) = 0LL;
      *((_DWORD *)v20 + 3) = 0;
      *((_DWORD *)v20 + 1) = 538;
      *((_DWORD *)v20 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v20 + 3) = *((_DWORD *)this + 40);
      *((_DWORD *)this + 4) &= ~0x80000u;
      v5 = *((_DWORD *)this + 4);
    }
    if ( (v5 & 0x100000) != 0 )
    {
      v23 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v23) )
        return v4;
      v21 = (char *)v23;
      *(_DWORD *)v23 = 16;
      *(_QWORD *)(v21 + 4) = 0LL;
      *((_DWORD *)v21 + 3) = 0;
      *((_DWORD *)v21 + 1) = 539;
      *((_DWORD *)v21 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v21 + 3) = *((_DWORD *)this + 41);
      *((_DWORD *)this + 4) &= ~0x100000u;
    }
    if ( DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetCacheInvalidationThresholdMaximumCommand(this, a2)
      && DirectComposition::CImageLegacyMilBrushMarshaler::EmitSetImageSourceCommand(this, a2) )
    {
      return 1;
    }
  }
  return v4;
}
