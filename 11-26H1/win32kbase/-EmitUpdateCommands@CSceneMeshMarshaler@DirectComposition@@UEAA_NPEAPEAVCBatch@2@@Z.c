/*
 * XREFs of ?EmitUpdateCommands@CSceneMeshMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140232010
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CSceneMeshMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneMeshMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // bl
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rcx
  void *v36; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x40) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v6 = v36;
    *(_DWORD *)v36 = 16;
    v6[1] = 0LL;
    *((_DWORD *)v6 + 1) = 617;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v6 + 3) = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v7 = v36;
    *(_DWORD *)v36 = 16;
    v7[1] = 0LL;
    *((_DWORD *)v7 + 1) = 618;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    v8 = *((_QWORD *)this + 8);
    if ( v8 )
      v9 = *(_DWORD *)(v8 + 32);
    else
      v9 = 0;
    *((_DWORD *)v7 + 3) = v9;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x100) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v10 = v36;
    *(_DWORD *)v36 = 16;
    v10[1] = 0LL;
    *((_DWORD *)v10 + 1) = 619;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
    v11 = *((_QWORD *)this + 9);
    if ( v11 )
      v12 = *(_DWORD *)(v11 + 32);
    else
      v12 = 0;
    *((_DWORD *)v10 + 3) = v12;
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x200) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v13 = v36;
    *(_DWORD *)v36 = 16;
    v13[1] = 0LL;
    *((_DWORD *)v13 + 1) = 620;
    *((_DWORD *)v13 + 2) = *((_DWORD *)this + 8);
    v14 = *((_QWORD *)this + 10);
    if ( v14 )
      v15 = *(_DWORD *)(v14 + 32);
    else
      v15 = 0;
    *((_DWORD *)v13 + 3) = v15;
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x400) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v16 = v36;
    *(_DWORD *)v36 = 16;
    v16[1] = 0LL;
    *((_DWORD *)v16 + 1) = 621;
    *((_DWORD *)v16 + 2) = *((_DWORD *)this + 8);
    v17 = *((_QWORD *)this + 11);
    if ( v17 )
      v18 = *(_DWORD *)(v17 + 32);
    else
      v18 = 0;
    *((_DWORD *)v16 + 3) = v18;
    *((_DWORD *)this + 4) &= ~0x400u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x800) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v19 = v36;
    *(_DWORD *)v36 = 16;
    v19[1] = 0LL;
    *((_DWORD *)v19 + 1) = 622;
    *((_DWORD *)v19 + 2) = *((_DWORD *)this + 8);
    v20 = *((_QWORD *)this + 12);
    if ( v20 )
      v21 = *(_DWORD *)(v20 + 32);
    else
      v21 = 0;
    *((_DWORD *)v19 + 3) = v21;
    *((_DWORD *)this + 4) &= ~0x800u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x1000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v22 = v36;
    *(_DWORD *)v36 = 16;
    v22[1] = 0LL;
    *((_DWORD *)v22 + 1) = 623;
    *((_DWORD *)v22 + 2) = *((_DWORD *)this + 8);
    v23 = *((_QWORD *)this + 13);
    if ( v23 )
      v24 = *(_DWORD *)(v23 + 32);
    else
      v24 = 0;
    *((_DWORD *)v22 + 3) = v24;
    *((_DWORD *)this + 4) &= ~0x1000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x2000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v25 = v36;
    *(_DWORD *)v36 = 16;
    v25[1] = 0LL;
    *((_DWORD *)v25 + 1) = 624;
    *((_DWORD *)v25 + 2) = *((_DWORD *)this + 8);
    v26 = *((_QWORD *)this + 14);
    if ( v26 )
      v27 = *(_DWORD *)(v26 + 32);
    else
      v27 = 0;
    *((_DWORD *)v25 + 3) = v27;
    *((_DWORD *)this + 4) &= ~0x2000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x4000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v28 = v36;
    *(_DWORD *)v36 = 16;
    v28[1] = 0LL;
    *((_DWORD *)v28 + 1) = 625;
    *((_DWORD *)v28 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v28 + 3) = *((_DWORD *)this + 30);
    *((_DWORD *)this + 4) &= ~0x4000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x8000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v29 = v36;
    *(_DWORD *)v36 = 16;
    v29[1] = 0LL;
    *((_DWORD *)v29 + 1) = 626;
    *((_DWORD *)v29 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v29 + 3) = *((_DWORD *)this + 31);
    *((_DWORD *)this + 4) &= ~0x8000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x10000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v30 = v36;
    *(_DWORD *)v36 = 16;
    v30[1] = 0LL;
    *((_DWORD *)v30 + 1) = 627;
    *((_DWORD *)v30 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v30 + 3) = *((_DWORD *)this + 32);
    *((_DWORD *)this + 4) &= ~0x10000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x20000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v31 = v36;
    *(_DWORD *)v36 = 16;
    v31[1] = 0LL;
    *((_DWORD *)v31 + 1) = 628;
    *((_DWORD *)v31 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v31 + 3) = *((_DWORD *)this + 33);
    *((_DWORD *)this + 4) &= ~0x20000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x40000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v32 = v36;
    *(_DWORD *)v36 = 16;
    v32[1] = 0LL;
    *((_DWORD *)v32 + 1) = 629;
    *((_DWORD *)v32 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v32 + 3) = *((_DWORD *)this + 34);
    *((_DWORD *)this + 4) &= ~0x40000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80000) != 0 )
  {
    v36 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
      return v3;
    v33 = v36;
    *(_DWORD *)v36 = 16;
    v33[1] = 0LL;
    *((_DWORD *)v33 + 1) = 630;
    *((_DWORD *)v33 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v33 + 3) = *((_DWORD *)this + 35);
    *((_DWORD *)this + 4) &= ~0x80000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x100000) == 0 )
    return 1;
  v36 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v36) )
  {
    v34 = v36;
    *(_DWORD *)v36 = 16;
    v34[1] = 0LL;
    *((_DWORD *)v34 + 1) = 631;
    *((_DWORD *)v34 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v34 + 3) = *((_DWORD *)this + 36);
    *((_DWORD *)this + 4) &= ~0x100000u;
    return 1;
  }
  return v3;
}
