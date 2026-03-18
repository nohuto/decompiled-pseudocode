/*
 * XREFs of ?EmitUpdateCommands@CSynchronousSuperWetInkMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::EmitUpdateCommands(
        DirectComposition::CSynchronousSuperWetInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  char *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  char *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  char *v12; // rcx
  char *v13; // rcx
  char *v14; // rcx
  char *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  char *v18; // rcx
  char *v19; // rcx
  char *v20; // rcx
  char *v21; // rcx
  char *v22; // rcx
  char *v23; // rcx
  void *v25; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x20) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v6 = (char *)v25;
    *(_DWORD *)v25 = 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 619;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    v7 = *((_QWORD *)this + 7);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 32);
    else
      v8 = 0;
    *((_DWORD *)v6 + 3) = v8;
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x40) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v9 = (char *)v25;
    *(_DWORD *)v25 = 16;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 1) = 620;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    v10 = *((_QWORD *)this + 8);
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 32);
    else
      v11 = 0;
    *((_DWORD *)v9 + 3) = v11;
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v12 = (char *)v25;
    *(_DWORD *)v25 = 16;
    *(_QWORD *)(v12 + 4) = 0LL;
    *((_DWORD *)v12 + 3) = 0;
    *((_DWORD *)v12 + 1) = 621;
    *((_DWORD *)v12 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v12 + 3) = *((_DWORD *)this + 18);
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x100) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v13 = (char *)v25;
    *(_DWORD *)v25 = 16;
    *(_QWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 3) = 0;
    *((_DWORD *)v13 + 1) = 622;
    *((_DWORD *)v13 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v13 + 3) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x200) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v14 = (char *)v25;
    *(_DWORD *)v25 = 16;
    *(_QWORD *)(v14 + 4) = 0LL;
    *((_DWORD *)v14 + 3) = 0;
    *((_DWORD *)v14 + 1) = 623;
    *((_DWORD *)v14 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v14 + 3) = *((_DWORD *)this + 20);
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x400) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v15 = (char *)v25;
    *(_DWORD *)v25 = 16;
    *(_QWORD *)(v15 + 4) = 0LL;
    *((_DWORD *)v15 + 3) = 0;
    *((_DWORD *)v15 + 1) = 624;
    *((_DWORD *)v15 + 2) = *((_DWORD *)this + 8);
    v16 = *((_QWORD *)this + 11);
    if ( v16 )
      v17 = *(_DWORD *)(v16 + 32);
    else
      v17 = 0;
    *((_DWORD *)v15 + 3) = v17;
    *((_DWORD *)this + 4) &= ~0x400u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x800) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v18 = (char *)v25;
    *(_DWORD *)v25 = 16;
    *(_QWORD *)(v18 + 4) = 0LL;
    *((_DWORD *)v18 + 3) = 0;
    *((_DWORD *)v18 + 1) = 625;
    *((_DWORD *)v18 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v18 + 3) = *((_DWORD *)this + 24);
    *((_DWORD *)this + 4) &= ~0x800u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x1000) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v19 = (char *)v25;
    *(_DWORD *)v25 = 16;
    *(_QWORD *)(v19 + 4) = 0LL;
    *((_DWORD *)v19 + 3) = 0;
    *((_DWORD *)v19 + 1) = 626;
    *((_DWORD *)v19 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v19 + 3) = *((_DWORD *)this + 25);
    *((_DWORD *)this + 4) &= ~0x1000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x2000) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v20 = (char *)v25;
    *(_DWORD *)v25 = 16;
    *(_QWORD *)(v20 + 4) = 0LL;
    *((_DWORD *)v20 + 3) = 0;
    *((_DWORD *)v20 + 1) = 627;
    *((_DWORD *)v20 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v20 + 3) = *((_DWORD *)this + 26);
    *((_DWORD *)this + 4) &= ~0x2000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x4000) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v21 = (char *)v25;
    *(_DWORD *)v25 = 16;
    *(_QWORD *)(v21 + 4) = 0LL;
    *((_DWORD *)v21 + 3) = 0;
    *((_DWORD *)v21 + 1) = 628;
    *((_DWORD *)v21 + 2) = *((_DWORD *)this + 8);
    v21[12] = *((_BYTE *)this + 108);
    *((_DWORD *)this + 4) &= ~0x4000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x8000) != 0 )
  {
    v25 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
      return v3;
    v22 = (char *)v25;
    *(_DWORD *)v25 = 16;
    *(_QWORD *)(v22 + 4) = 0LL;
    *((_DWORD *)v22 + 3) = 0;
    *((_DWORD *)v22 + 1) = 629;
    *((_DWORD *)v22 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v22 + 3) = *((_DWORD *)this + 28);
    *((_DWORD *)this + 4) &= ~0x8000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x10000) == 0 )
    return 1;
  v25 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v25) )
  {
    v23 = (char *)v25;
    *(_DWORD *)v25 = 16;
    *(_QWORD *)(v23 + 4) = 0LL;
    *((_DWORD *)v23 + 3) = 0;
    *((_DWORD *)v23 + 1) = 630;
    *((_DWORD *)v23 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v23 + 3) = *((_DWORD *)this + 29);
    *((_DWORD *)this + 4) &= ~0x10000u;
    return 1;
  }
  return v3;
}
