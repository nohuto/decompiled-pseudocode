/*
 * XREFs of ?EmitUpdateCommands@CSynchronousSuperWetInkMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140232CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::EmitUpdateCommands(
        DirectComposition::CSynchronousSuperWetInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  _QWORD *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx
  void *v25; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x40) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v6 = v25;
    *(_DWORD *)v25 = 16;
    v6[1] = 0LL;
    *((_DWORD *)v6 + 1) = 688;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    v7 = *((_QWORD *)this + 7);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 32);
    else
      v8 = 0;
    *((_DWORD *)v6 + 3) = v8;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v9 = v25;
    *(_DWORD *)v25 = 16;
    v9[1] = 0LL;
    *((_DWORD *)v9 + 1) = 689;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    v10 = *((_QWORD *)this + 8);
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 32);
    else
      v11 = 0;
    *((_DWORD *)v9 + 3) = v11;
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x100) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v12 = v25;
    *(_DWORD *)v25 = 16;
    v12[1] = 0LL;
    *((_DWORD *)v12 + 1) = 690;
    *((_DWORD *)v12 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v12 + 3) = *((_DWORD *)this + 18);
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x200) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v13 = v25;
    *(_DWORD *)v25 = 16;
    v13[1] = 0LL;
    *((_DWORD *)v13 + 1) = 691;
    *((_DWORD *)v13 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v13 + 3) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x400) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v14 = v25;
    *(_DWORD *)v25 = 16;
    v14[1] = 0LL;
    *((_DWORD *)v14 + 1) = 692;
    *((_DWORD *)v14 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v14 + 3) = *((_DWORD *)this + 20);
    *((_DWORD *)this + 4) &= ~0x400u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x800) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v15 = v25;
    *(_DWORD *)v25 = 16;
    v15[1] = 0LL;
    *((_DWORD *)v15 + 1) = 693;
    *((_DWORD *)v15 + 2) = *((_DWORD *)this + 8);
    v16 = *((_QWORD *)this + 11);
    if ( v16 )
      v17 = *(_DWORD *)(v16 + 32);
    else
      v17 = 0;
    *((_DWORD *)v15 + 3) = v17;
    *((_DWORD *)this + 4) &= ~0x800u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x1000) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v18 = v25;
    *(_DWORD *)v25 = 16;
    v18[1] = 0LL;
    *((_DWORD *)v18 + 1) = 694;
    *((_DWORD *)v18 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v18 + 3) = *((_DWORD *)this + 24);
    *((_DWORD *)this + 4) &= ~0x1000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x2000) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v19 = v25;
    *(_DWORD *)v25 = 16;
    v19[1] = 0LL;
    *((_DWORD *)v19 + 1) = 695;
    *((_DWORD *)v19 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v19 + 3) = *((_DWORD *)this + 25);
    *((_DWORD *)this + 4) &= ~0x2000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x4000) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v20 = v25;
    *(_DWORD *)v25 = 16;
    v20[1] = 0LL;
    *((_DWORD *)v20 + 1) = 696;
    *((_DWORD *)v20 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v20 + 3) = *((_DWORD *)this + 26);
    *((_DWORD *)this + 4) &= ~0x4000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x8000) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v21 = v25;
    *(_DWORD *)v25 = 16;
    v21[1] = 0LL;
    *((_DWORD *)v21 + 1) = 697;
    *((_DWORD *)v21 + 2) = *((_DWORD *)this + 8);
    *((_BYTE *)v21 + 12) = *((_BYTE *)this + 108);
    *((_DWORD *)this + 4) &= ~0x8000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x10000) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v22 = v25;
    *(_DWORD *)v25 = 16;
    v22[1] = 0LL;
    *((_DWORD *)v22 + 1) = 698;
    *((_DWORD *)v22 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v22 + 3) = *((_DWORD *)this + 28);
    *((_DWORD *)this + 4) &= ~0x10000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x20000) == 0 )
    return 1;
  v25 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
  {
    v23 = v25;
    *(_DWORD *)v25 = 16;
    v23[1] = 0LL;
    *((_DWORD *)v23 + 1) = 699;
    *((_DWORD *)v23 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v23 + 3) = *((_DWORD *)this + 29);
    *((_DWORD *)this + 4) &= ~0x20000u;
    return 1;
  }
  return v3;
}
