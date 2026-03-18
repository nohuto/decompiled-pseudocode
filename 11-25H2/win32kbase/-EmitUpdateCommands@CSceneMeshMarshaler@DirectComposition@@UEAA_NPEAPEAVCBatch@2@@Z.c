/*
 * XREFs of ?EmitUpdateCommands@CSceneMeshMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022BC60
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CSceneMeshMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneMeshMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  char *v6; // rcx
  char *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  char *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  char *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  char *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  char *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  char *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  char *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  char *v28; // rcx
  char *v29; // rcx
  char *v30; // rcx
  char *v31; // rcx
  char *v32; // rcx
  char *v33; // rcx
  char *v34; // rcx
  void *v36; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x20) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v6 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 577;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v6 + 3) = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x40) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v7 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 578;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    v8 = *((_QWORD *)this + 8);
    if ( v8 )
      v9 = *(_DWORD *)(v8 + 32);
    else
      v9 = 0;
    *((_DWORD *)v7 + 3) = v9;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v10 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 3) = 0;
    *((_DWORD *)v10 + 1) = 579;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
    v11 = *((_QWORD *)this + 9);
    if ( v11 )
      v12 = *(_DWORD *)(v11 + 32);
    else
      v12 = 0;
    *((_DWORD *)v10 + 3) = v12;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x100) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v13 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 3) = 0;
    *((_DWORD *)v13 + 1) = 580;
    *((_DWORD *)v13 + 2) = *((_DWORD *)this + 8);
    v14 = *((_QWORD *)this + 10);
    if ( v14 )
      v15 = *(_DWORD *)(v14 + 32);
    else
      v15 = 0;
    *((_DWORD *)v13 + 3) = v15;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x200) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v16 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v16 + 4) = 0LL;
    *((_DWORD *)v16 + 3) = 0;
    *((_DWORD *)v16 + 1) = 581;
    *((_DWORD *)v16 + 2) = *((_DWORD *)this + 8);
    v17 = *((_QWORD *)this + 11);
    if ( v17 )
      v18 = *(_DWORD *)(v17 + 32);
    else
      v18 = 0;
    *((_DWORD *)v16 + 3) = v18;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x400) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v19 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v19 + 4) = 0LL;
    *((_DWORD *)v19 + 3) = 0;
    *((_DWORD *)v19 + 1) = 582;
    *((_DWORD *)v19 + 2) = *((_DWORD *)this + 8);
    v20 = *((_QWORD *)this + 12);
    if ( v20 )
      v21 = *(_DWORD *)(v20 + 32);
    else
      v21 = 0;
    *((_DWORD *)v19 + 3) = v21;
    *((_DWORD *)this + 4) &= ~0x400u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x800) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v22 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v22 + 4) = 0LL;
    *((_DWORD *)v22 + 3) = 0;
    *((_DWORD *)v22 + 1) = 583;
    *((_DWORD *)v22 + 2) = *((_DWORD *)this + 8);
    v23 = *((_QWORD *)this + 13);
    if ( v23 )
      v24 = *(_DWORD *)(v23 + 32);
    else
      v24 = 0;
    *((_DWORD *)v22 + 3) = v24;
    *((_DWORD *)this + 4) &= ~0x800u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x1000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v25 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v25 + 4) = 0LL;
    *((_DWORD *)v25 + 3) = 0;
    *((_DWORD *)v25 + 1) = 584;
    *((_DWORD *)v25 + 2) = *((_DWORD *)this + 8);
    v26 = *((_QWORD *)this + 14);
    if ( v26 )
      v27 = *(_DWORD *)(v26 + 32);
    else
      v27 = 0;
    *((_DWORD *)v25 + 3) = v27;
    *((_DWORD *)this + 4) &= ~0x1000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x2000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v28 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v28 + 4) = 0LL;
    *((_DWORD *)v28 + 3) = 0;
    *((_DWORD *)v28 + 1) = 585;
    *((_DWORD *)v28 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v28 + 3) = *((_DWORD *)this + 30);
    *((_DWORD *)this + 4) &= ~0x2000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x4000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v29 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v29 + 4) = 0LL;
    *((_DWORD *)v29 + 3) = 0;
    *((_DWORD *)v29 + 1) = 586;
    *((_DWORD *)v29 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v29 + 3) = *((_DWORD *)this + 31);
    *((_DWORD *)this + 4) &= ~0x4000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x8000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v30 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v30 + 4) = 0LL;
    *((_DWORD *)v30 + 3) = 0;
    *((_DWORD *)v30 + 1) = 587;
    *((_DWORD *)v30 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v30 + 3) = *((_DWORD *)this + 32);
    *((_DWORD *)this + 4) &= ~0x8000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x10000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v31 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v31 + 4) = 0LL;
    *((_DWORD *)v31 + 3) = 0;
    *((_DWORD *)v31 + 1) = 588;
    *((_DWORD *)v31 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v31 + 3) = *((_DWORD *)this + 33);
    *((_DWORD *)this + 4) &= ~0x10000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x20000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v32 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v32 + 4) = 0LL;
    *((_DWORD *)v32 + 3) = 0;
    *((_DWORD *)v32 + 1) = 589;
    *((_DWORD *)v32 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v32 + 3) = *((_DWORD *)this + 34);
    *((_DWORD *)this + 4) &= ~0x20000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x40000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v33 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v33 + 4) = 0LL;
    *((_DWORD *)v33 + 3) = 0;
    *((_DWORD *)v33 + 1) = 590;
    *((_DWORD *)v33 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v33 + 3) = *((_DWORD *)this + 35);
    *((_DWORD *)this + 4) &= ~0x40000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80000) == 0 )
    return 1;
  v36 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
  {
    v34 = (char *)v36;
    *(_DWORD *)v36 = 16;
    *(_QWORD *)(v34 + 4) = 0LL;
    *((_DWORD *)v34 + 3) = 0;
    *((_DWORD *)v34 + 1) = 591;
    *((_DWORD *)v34 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v34 + 3) = *((_DWORD *)this + 36);
    *((_DWORD *)this + 4) &= ~0x80000u;
    return 1;
  }
  return v3;
}
