/*
 * XREFs of ?EmitUpdateCommands@CGlobalDCompVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022B060
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CGlobalDCompVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CGlobalDCompVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  char v3; // di
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx
  char *v9; // rcx
  void *v11; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x20) != 0 )
  {
    v11 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v11) )
      return v3;
    v6 = (char *)v11;
    *(_DWORD *)v11 = 20;
    *(_OWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 519;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 7);
    *((_DWORD *)this + 4) &= ~0x20u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x40) != 0 )
  {
    v11 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v11) )
      return v3;
    v7 = (char *)v11;
    *(_DWORD *)v11 = 28;
    *(_OWORD *)(v7 + 4) = 0LL;
    *(_QWORD *)(v7 + 20) = 0LL;
    *((_DWORD *)v7 + 1) = 520;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v7 + 12) = *((_OWORD *)this + 4);
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v11 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
      return v3;
    v8 = (char *)v11;
    *(_DWORD *)v11 = 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 521;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    v8[12] = *((_BYTE *)this + 80);
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x100) == 0 )
    return 1;
  v11 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
  {
    v9 = (char *)v11;
    *(_DWORD *)v11 = 16;
    *(_QWORD *)(v9 + 4) = 0LL;
    *((_DWORD *)v9 + 3) = 0;
    *((_DWORD *)v9 + 1) = 522;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v9 + 3) = *((_DWORD *)this + 21);
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return v3;
}
