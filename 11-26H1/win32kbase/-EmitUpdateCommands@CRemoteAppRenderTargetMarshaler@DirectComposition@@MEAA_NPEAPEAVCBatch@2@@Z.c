/*
 * XREFs of ?EmitUpdateCommands@CRemoteAppRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140242420
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CRemoteAppRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CRemoteAppRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int v2; // eax
  char v3; // bl
  char *v6; // rcx
  _DWORD *v7; // r14
  _DWORD *v8; // r15
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  char *v13; // rcx
  _DWORD *v14; // r12
  char *v15; // rcx
  _DWORD *v16; // r14
  _QWORD *v17; // rcx
  char *v18; // rcx
  char *v19; // rcx
  void *v21; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x40) != 0 )
  {
    v21 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v21) )
      return v3;
    v6 = (char *)v21;
    v7 = (_DWORD *)((char *)this + 32);
    *(_DWORD *)v21 = 20;
    *(_OWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 244;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 8);
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  else
  {
    v7 = (_DWORD *)((char *)this + 32);
  }
  v8 = v7;
  if ( (v2 & 0x800) != 0 )
  {
    v21 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v21) )
      return v3;
    v9 = v21;
    v8 = (_DWORD *)((char *)this + 32);
    *(_DWORD *)v21 = 16;
    v9[1] = 0LL;
    *((_DWORD *)v9 + 1) = 246;
    *((_DWORD *)v9 + 2) = *v7;
    *((_DWORD *)v9 + 3) = *((_DWORD *)this + 14);
    *((_DWORD *)this + 4) &= ~0x800u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v21 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v21) )
      return v3;
    v10 = v21;
    *(_DWORD *)v21 = 16;
    v10[1] = 0LL;
    *((_DWORD *)v10 + 1) = 254;
    *((_DWORD *)v10 + 2) = *v7;
    v11 = *((_QWORD *)this + 14);
    if ( v11 )
      v12 = *(_DWORD *)(v11 + 32);
    else
      v12 = 0;
    *((_DWORD *)v10 + 3) = v12;
    v8 = (_DWORD *)((char *)this + 32);
    v2 = *((_DWORD *)this + 4) & 0xFFFFFF7F;
    *((_DWORD *)this + 4) = v2;
  }
  if ( (v2 & 0x100) != 0 )
  {
    v21 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v21) )
      return v3;
    v13 = (char *)v21;
    v8 = (_DWORD *)((char *)this + 32);
    *(_DWORD *)v21 = 20;
    *(_OWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 1) = 249;
    *((_DWORD *)v13 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v13 + 12) = *((_QWORD *)this + 9);
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  v14 = v8;
  if ( (v2 & 0x200) != 0 )
  {
    v21 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v21) )
      return v3;
    v15 = (char *)v21;
    v14 = (_DWORD *)((char *)this + 32);
    *(_DWORD *)v21 = 20;
    *(_OWORD *)(v15 + 4) = 0LL;
    *((_DWORD *)v15 + 1) = 248;
    *((_DWORD *)v15 + 2) = *v8;
    *(_QWORD *)(v15 + 12) = *((_QWORD *)this + 10);
    *((_DWORD *)this + 4) &= ~0x200u;
    v2 = *((_DWORD *)this + 4);
  }
  v16 = v14;
  if ( (v2 & 0x2000) != 0 )
  {
    v21 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v21) )
      return v3;
    v17 = v21;
    v16 = (_DWORD *)((char *)this + 32);
    *(_DWORD *)v21 = 16;
    v17[1] = 0LL;
    *((_DWORD *)v17 + 1) = 250;
    *((_DWORD *)v17 + 2) = *v8;
    *((_DWORD *)v17 + 3) = *((_DWORD *)this + 22);
    *((_DWORD *)this + 4) &= ~0x2000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x1000) != 0 )
  {
    v21 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v21) )
      return v3;
    v18 = (char *)v21;
    *(_DWORD *)v21 = 28;
    *(_OWORD *)(v18 + 4) = 0LL;
    *(_QWORD *)(v18 + 20) = 0LL;
    *((_DWORD *)v18 + 1) = 247;
    *((_DWORD *)v18 + 2) = *v14;
    *(_OWORD *)(v18 + 12) = *(_OWORD *)((char *)this + 92);
    *((_DWORD *)this + 4) &= ~0x1000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x400) == 0 )
    return 1;
  v21 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xCuLL, &v21) )
  {
    v19 = (char *)v21;
    *(_DWORD *)v21 = 12;
    *(_QWORD *)(v19 + 4) = 0LL;
    *((_DWORD *)v19 + 1) = 245;
    *((_DWORD *)v19 + 2) = *v16;
    *((_DWORD *)this + 4) &= ~0x400u;
    return 1;
  }
  return v3;
}
