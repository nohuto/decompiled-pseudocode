/*
 * XREFs of ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140025730
 * Callers:
 *     ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140025650 (-EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140100370 (-EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140118670 (-EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CRedirectVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140137970 (-EmitUpdateCommands@CRedirectVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140198430 (-EmitUpdateCommands@CWindowNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022ADB0 (-EmitUpdateCommands@CCursorVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSceneVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C520 (-EmitUpdateCommands@CSceneVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSuperWetInkVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C720 (-EmitUpdateCommands@CSuperWetInkVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022CCF0 (-EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140021C54 (-EmitPendingRemoves@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400246B8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14002543C (-EmitInsertChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$00$0BJE@$0BHJ@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140230424 (-Marshal@-$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$00$0BJE@.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$01$0BII@$0BHI@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140230454 (-Marshal@-$CResourceMarshalerArray@VCCompositionLightMarshaler@DirectComposition@@$0CE@$01$0BII@.c)
 */

char __fastcall DirectComposition::CVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // eax
  char *v5; // rcx
  char *v6; // rcx
  int *v7; // r12
  int v8; // eax
  unsigned int v9; // eax
  char v10; // r15
  unsigned int *v11; // rsi
  unsigned int *v12; // r14
  unsigned int *v13; // rsi
  unsigned int *v14; // r14
  char *v16; // rcx
  _DWORD *v17; // rdx
  char *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  char *v21; // rcx
  char *v22; // rcx
  __int64 v23; // rax
  char *v24; // rcx
  char *v25; // rcx
  char *v26; // rcx
  char *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  char *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  char *v33; // rcx
  char *v34; // rcx
  char *v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  char *v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  char *v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  char *v44; // rcx
  char *v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  char *v48; // rcx
  char *v49; // rcx
  char *v50; // rcx
  char *v51; // rcx
  char *v52; // rcx
  char *v53; // rcx
  void *v54; // [rsp+60h] [rbp+40h] BYREF

  if ( !DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    || !DirectComposition::CVisualMarshaler::EmitPendingRemoves(this, (struct DirectComposition::CBatch **)a2) )
  {
    return 0;
  }
  if ( (*((_DWORD *)this + 4) & 0x2000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v54) )
      return 0;
    v24 = (char *)v54;
    *(_DWORD *)v54 = 12;
    *(_QWORD *)(v24 + 4) = 0LL;
    *((_DWORD *)v24 + 1) = 382;
    *((_DWORD *)v24 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 4) &= ~0x2000u;
  }
  if ( !DirectComposition::CVisualMarshaler::EmitInsertChildren(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 4);
  if ( (v4 & 0x80u) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v54) )
      return 0;
    v5 = (char *)v54;
    *(_DWORD *)v54 = 24;
    *(_OWORD *)(v5 + 4) = 0LL;
    *((_DWORD *)v5 + 5) = 0;
    *((_DWORD *)v5 + 1) = 396;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v5 + 3) = *((_DWORD *)this + 18);
    *((_DWORD *)v5 + 4) = *((_DWORD *)this + 19);
    *((_DWORD *)v5 + 5) = *((_DWORD *)this + 20);
    *((_DWORD *)this + 4) &= ~0x80u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x200000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v54) )
      return 0;
    v6 = (char *)v54;
    *(_DWORD *)v54 = 20;
    *(_OWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 405;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v6 + 3) = *((_DWORD *)this + 21);
    *((_DWORD *)v6 + 4) = *((_DWORD *)this + 22);
    *((_DWORD *)this + 4) &= ~0x200000u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x1000000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v54) )
      return 0;
    v34 = (char *)v54;
    *(_DWORD *)v54 = 24;
    *(_OWORD *)(v34 + 4) = 0LL;
    *((_DWORD *)v34 + 5) = 0;
    *((_DWORD *)v34 + 1) = 401;
    *((_DWORD *)v34 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v34 + 3) = *((_DWORD *)this + 23);
    *((_DWORD *)v34 + 4) = *((_DWORD *)this + 24);
    *((_DWORD *)v34 + 5) = *((_DWORD *)this + 25);
    *((_DWORD *)this + 4) &= ~0x1000000u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x2000000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v54) )
      return 0;
    v26 = (char *)v54;
    *(_DWORD *)v54 = 20;
    *(_OWORD *)(v26 + 4) = 0LL;
    *((_DWORD *)v26 + 1) = 402;
    *((_DWORD *)v26 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v26 + 3) = *((_DWORD *)this + 26);
    *((_DWORD *)v26 + 4) = *((_DWORD *)this + 27);
    *((_DWORD *)this + 4) &= ~0x2000000u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x100) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v22 = (char *)v54;
    *(_DWORD *)v54 = 16;
    *(_QWORD *)(v22 + 4) = 0LL;
    *((_DWORD *)v22 + 3) = 0;
    *((_DWORD *)v22 + 1) = 407;
    *((_DWORD *)v22 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v22 + 3) = 0;
    v23 = *((_QWORD *)this + 17);
    if ( v23 )
      *((_DWORD *)v22 + 3) = *(_DWORD *)(v23 + 32);
    *((_DWORD *)this + 4) &= ~0x100u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x200) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v54) )
      return 0;
    v38 = (char *)v54;
    *(_DWORD *)v54 = 20;
    *(_OWORD *)(v38 + 4) = 0LL;
    *((_DWORD *)v38 + 1) = 408;
    *((_DWORD *)v38 + 2) = *((_DWORD *)this + 8);
    v39 = *((_QWORD *)this + 18);
    if ( v39 )
      v40 = *(_DWORD *)(v39 + 32);
    else
      v40 = 0;
    *((_DWORD *)v38 + 3) = v40;
    v38[16] = *((_BYTE *)this + 308) >> 7;
    *((_DWORD *)this + 4) &= ~0x200u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x400) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v27 = (char *)v54;
    *(_DWORD *)v54 = 16;
    *(_QWORD *)(v27 + 4) = 0LL;
    *((_DWORD *)v27 + 3) = 0;
    *((_DWORD *)v27 + 1) = 391;
    *((_DWORD *)v27 + 2) = *((_DWORD *)this + 8);
    v28 = *((_QWORD *)this + 19);
    if ( v28 )
      v29 = *(_DWORD *)(v28 + 32);
    else
      v29 = 0;
    *((_DWORD *)v27 + 3) = v29;
    *((_DWORD *)this + 4) &= ~0x400u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 0x4000000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v41 = (char *)v54;
    *(_DWORD *)v54 = 16;
    *(_QWORD *)(v41 + 4) = 0LL;
    *((_DWORD *)v41 + 3) = 0;
    *((_DWORD *)v41 + 1) = 410;
    *((_DWORD *)v41 + 2) = *((_DWORD *)this + 8);
    v42 = *((_QWORD *)this + 28);
    if ( v42 )
      v43 = *(_DWORD *)(v42 + 32);
    else
      v43 = 0;
    *((_DWORD *)v41 + 3) = v43;
    *((_DWORD *)this + 4) &= ~0x4000000u;
  }
  v7 = (int *)((char *)this + 360);
  v8 = *((_DWORD *)this + 90);
  if ( (v8 & 4) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v45 = (char *)v54;
    *(_DWORD *)v54 = 16;
    *(_QWORD *)(v45 + 4) = 0LL;
    *((_DWORD *)v45 + 3) = 0;
    *((_DWORD *)v45 + 1) = 385;
    *((_DWORD *)v45 + 2) = *((_DWORD *)this + 8);
    v46 = *((_QWORD *)this + 29);
    if ( v46 )
      v47 = *(_DWORD *)(v46 + 32);
    else
      v47 = 0;
    *((_DWORD *)v45 + 3) = v47;
    *v7 &= ~4u;
    v8 = *v7;
  }
  if ( (v8 & 8) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v54) )
      return 0;
    v48 = (char *)v54;
    *(_DWORD *)v54 = 28;
    *(_OWORD *)(v48 + 4) = 0LL;
    *(_QWORD *)(v48 + 20) = 0LL;
    *((_DWORD *)v48 + 1) = 386;
    *((_DWORD *)v48 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v48 + 12) = *((_OWORD *)this + 15);
    *v7 &= ~8u;
  }
  v9 = *((_DWORD *)this + 4);
  if ( (v9 & 0x1000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v18 = (char *)v54;
    *(_DWORD *)v54 = 16;
    *(_QWORD *)(v18 + 4) = 0LL;
    *((_DWORD *)v18 + 3) = 0;
    *((_DWORD *)v18 + 1) = 387;
    *((_DWORD *)v18 + 2) = *((_DWORD *)this + 8);
    v19 = *((_QWORD *)this + 20);
    if ( v19 )
      v20 = *(_DWORD *)(v19 + 32);
    else
      v20 = 0;
    *((_DWORD *)v18 + 3) = v20;
    *((_DWORD *)this + 4) &= ~0x1000u;
    v9 = *((_DWORD *)this + 4);
  }
  if ( (v9 & 0x800) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v30 = (char *)v54;
    *(_DWORD *)v54 = 16;
    *(_QWORD *)(v30 + 4) = 0LL;
    *((_DWORD *)v30 + 3) = 0;
    *((_DWORD *)v30 + 1) = 389;
    *((_DWORD *)v30 + 2) = *((_DWORD *)this + 8);
    v31 = *((_QWORD *)this + 21);
    if ( v31 )
      v32 = *(_DWORD *)(v31 + 32);
    else
      v32 = 0;
    *((_DWORD *)v30 + 3) = v32;
    *((_DWORD *)this + 4) &= ~0x800u;
    v9 = *((_DWORD *)this + 4);
  }
  if ( (v9 & 0x8000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x34uLL, &v54) )
      return 0;
    v16 = (char *)v54;
    *(_DWORD *)v54 = 52;
    v17 = v16 + 12;
    *(_OWORD *)(v16 + 4) = 0LL;
    *(_OWORD *)(v16 + 20) = 0LL;
    *(_OWORD *)(v16 + 36) = 0LL;
    *((_DWORD *)v16 + 1) = 403;
    *((_DWORD *)v16 + 2) = *((_DWORD *)this + 8);
    if ( *((_DWORD *)this + 65) != -1 )
    {
      *v17 |= 2u;
      *((_DWORD *)v16 + 4) = *((_DWORD *)this + 65);
    }
    if ( *((_DWORD *)this + 64) != -1 )
    {
      *v17 |= 4u;
      *((_DWORD *)v16 + 5) = *((_DWORD *)this + 64);
    }
    if ( *((_DWORD *)this + 66) != -1 )
    {
      *v17 |= 8u;
      *((_DWORD *)v16 + 8) = *((_DWORD *)this + 66);
    }
    if ( *((_DWORD *)this + 67) != -1 )
    {
      *v17 |= 0x10u;
      *((_DWORD *)v16 + 9) = *((_DWORD *)this + 67);
    }
    if ( *((_DWORD *)this + 68) != -1 )
    {
      *((_DWORD *)v16 + 3) |= 0x20u;
      *((_DWORD *)v16 + 10) = *((_DWORD *)this + 68);
    }
    if ( *((_DWORD *)this + 69) != -1 )
    {
      *((_DWORD *)v16 + 3) |= 0x40u;
      *((_DWORD *)v16 + 11) = *((_DWORD *)this + 69);
    }
    v9 = *((_DWORD *)this + 4) & 0xFFFF7FFF;
    *((_DWORD *)this + 4) = v9;
  }
  v10 = 1;
  if ( (v9 & 0x10000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v25 = (char *)v54;
    v11 = (unsigned int *)((char *)this + 32);
    *(_DWORD *)v54 = 16;
    *(_QWORD *)(v25 + 4) = 0LL;
    *((_DWORD *)v25 + 3) = 0;
    *((_DWORD *)v25 + 1) = 398;
    *((_DWORD *)v25 + 2) = *((_DWORD *)this + 8);
    v25[12] = (*((_BYTE *)this + 308) & 0x10) != 0;
    v25[13] = (*((_BYTE *)this + 308) & 8) != 0;
    v25[14] = *((_BYTE *)this + 309) & 1;
    v25[15] = (*((_BYTE *)this + 309) & 2) != 0;
    v9 = *((_DWORD *)this + 4) & 0xFFFEFFFF;
    *((_DWORD *)this + 4) = v9;
  }
  else
  {
    v11 = (unsigned int *)((char *)this + 32);
  }
  if ( (v9 & 0x20000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v49 = (char *)v54;
    *(_DWORD *)v54 = 16;
    v12 = (unsigned int *)((char *)this + 32);
    *(_QWORD *)(v49 + 4) = 0LL;
    *((_DWORD *)v49 + 3) = 0;
    *((_DWORD *)v49 + 1) = 381;
    *((_DWORD *)v49 + 2) = *v11;
    v49[12] = (*((_BYTE *)this + 308) & 0x20) != 0;
    v9 = *((_DWORD *)this + 4) & 0xFFFDFFFF;
    *((_DWORD *)this + 4) = v9;
  }
  else
  {
    v12 = v11;
  }
  if ( (v9 & 0x80000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v50 = (char *)v54;
    *(_DWORD *)v54 = 16;
    v12 = (unsigned int *)((char *)this + 32);
    *(_QWORD *)(v50 + 4) = 0LL;
    *((_DWORD *)v50 + 3) = 0;
    *((_DWORD *)v50 + 1) = 400;
    *((_DWORD *)v50 + 2) = *v11;
    v50[12] = (*((_BYTE *)this + 308) & 2) != 0;
    v50[13] = (*((_BYTE *)this + 308) & 4) != 0;
    v9 = *((_DWORD *)this + 4) & 0xFFF7FFFF;
    *((_DWORD *)this + 4) = v9;
  }
  if ( (v9 & 0x40000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v54) )
      return 0;
    v51 = (char *)v54;
    v12 = (unsigned int *)((char *)this + 32);
    *(_DWORD *)v54 = 36;
    *(_OWORD *)(v51 + 4) = 0LL;
    *(_OWORD *)(v51 + 20) = 0LL;
    *((_DWORD *)v51 + 1) = 394;
    *((_DWORD *)v51 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v51 + 7) = *((_DWORD *)this + 75);
    *(_OWORD *)(v51 + 12) = *(_OWORD *)((char *)this + 284);
    *((_DWORD *)v51 + 8) = *((_DWORD *)this + 76);
    v9 = *((_DWORD *)this + 4) & 0xFFFBFFFF;
    *((_DWORD *)this + 4) = v9;
  }
  if ( (v9 & 0x100000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v35 = (char *)v54;
    *(_DWORD *)v54 = 16;
    *(_QWORD *)(v35 + 4) = 0LL;
    *((_DWORD *)v35 + 3) = 0;
    *((_DWORD *)v35 + 1) = 395;
    *((_DWORD *)v35 + 2) = *v12;
    v36 = *((_QWORD *)this + 27);
    if ( v36 )
      v37 = *(_DWORD *)(v36 + 32);
    else
      v37 = 0;
    *((_DWORD *)v35 + 3) = v37;
    v12 = (unsigned int *)((char *)this + 32);
    v9 = *((_DWORD *)this + 4) & 0xFFEFFFFF;
    *((_DWORD *)this + 4) = v9;
  }
  if ( (v9 & 0x400000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v33 = (char *)v54;
    v13 = (unsigned int *)((char *)this + 32);
    *(_DWORD *)v54 = 16;
    *(_QWORD *)(v33 + 4) = 0LL;
    *((_DWORD *)v33 + 3) = 0;
    *((_DWORD *)v33 + 1) = 397;
    *((_DWORD *)v33 + 2) = *v12;
    *((_DWORD *)v33 + 3) = *((_DWORD *)this + 28);
    v9 = *((_DWORD *)this + 4) & 0xFFBFFFFF;
    *((_DWORD *)this + 4) = v9;
  }
  else
  {
    v13 = v12;
  }
  if ( (v9 & 0x800000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v21 = (char *)v54;
    v13 = (unsigned int *)((char *)this + 32);
    *(_DWORD *)v54 = 16;
    *(_QWORD *)(v21 + 4) = 0LL;
    *((_DWORD *)v21 + 3) = 0;
    *((_DWORD *)v21 + 1) = 409;
    *((_DWORD *)v21 + 2) = *v12;
    v21[12] = (*((_BYTE *)this + 308) & 0x40) != 0;
    v9 = *((_DWORD *)this + 4) & 0xFF7FFFFF;
    *((_DWORD *)this + 4) = v9;
  }
  if ( (v9 & 0x8000000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v52 = (char *)v54;
    v13 = (unsigned int *)((char *)this + 32);
    *(_DWORD *)v54 = 16;
    *(_QWORD *)(v52 + 4) = 0LL;
    *((_DWORD *)v52 + 3) = 0;
    *((_DWORD *)v52 + 1) = 379;
    *((_DWORD *)v52 + 2) = *((_DWORD *)this + 8);
    v52[12] = *((_BYTE *)this + 308) & 1;
    v9 = *((_DWORD *)this + 4) & 0xF7FFFFFF;
    *((_DWORD *)this + 4) = v9;
  }
  if ( (v9 & 0x10000000) != 0 )
  {
    v54 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v54) )
      return 0;
    v53 = (char *)v54;
    v14 = (unsigned int *)((char *)this + 32);
    *(_DWORD *)v54 = 16;
    *(_QWORD *)(v53 + 4) = 0LL;
    *((_DWORD *)v53 + 3) = 0;
    *((_DWORD *)v53 + 1) = 384;
    *((_DWORD *)v53 + 2) = *v13;
    *((_DWORD *)v53 + 3) = *((_DWORD *)this + 70);
    v9 = *((_DWORD *)this + 4) & 0xEFFFFFFF;
    *((_DWORD *)this + 4) = v9;
  }
  else
  {
    v14 = v13;
  }
  if ( (v9 & 0x20000000) != 0 )
  {
    v54 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v54) )
    {
      v44 = (char *)v54;
      *(_DWORD *)v54 = 28;
      *(_OWORD *)(v44 + 4) = 0LL;
      *(_QWORD *)(v44 + 20) = 0LL;
      *((_DWORD *)v44 + 1) = 390;
      *((_DWORD *)v44 + 2) = *v13;
      *((_DWORD *)v44 + 3) = *((_DWORD *)this + 29);
      *((_DWORD *)v44 + 4) = *((_DWORD *)this + 30);
      *((_DWORD *)v44 + 5) = *((_DWORD *)this + 31);
      *((_DWORD *)v44 + 6) = *((_DWORD *)this + 32);
      *((_DWORD *)this + 4) &= ~0x20000000u;
      goto LABEL_36;
    }
    return 0;
  }
LABEL_36:
  if ( !(unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,1,404,377>::Marshal(
                           (char *)this + 312,
                           a2,
                           *v13,
                           (char *)this + 360)
    || !(unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CCompositionLightMarshaler,36,2,392,376>::Marshal(
                           (char *)this + 336,
                           a2,
                           *v14,
                           (char *)this + 360) )
  {
    return 0;
  }
  return v10;
}
