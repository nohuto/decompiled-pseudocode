/*
 * XREFs of ?EmitUpdateCommands@CSceneSurfaceMaterialInputMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140247600
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CSceneSurfaceMaterialInputMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneSurfaceMaterialInputMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int v2; // eax
  char v3; // bl
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  void *v13; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x40) != 0 )
  {
    v13 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
      return v3;
    v6 = v13;
    *(_DWORD *)v13 = 16;
    v6[1] = 0LL;
    *((_DWORD *)v6 + 1) = 265;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v6 + 3) = *((_DWORD *)this + 20);
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v13 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v13) )
      return v3;
    v7 = v13;
    *(_DWORD *)v13 = 32;
    v7[1] = 0LL;
    v7[2] = 0LL;
    v7[3] = 0LL;
    *((_DWORD *)v7 + 1) = 266;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    v8 = *((_QWORD *)this + 7);
    if ( v8 )
      v9 = *(_DWORD *)(v8 + 32);
    else
      v9 = 0;
    *((_DWORD *)v7 + 3) = v9;
    *((_OWORD *)v7 + 1) = *((_OWORD *)this + 4);
    v2 = *((_DWORD *)this + 4) & 0xFFFFFF7F;
    *((_DWORD *)this + 4) = v2;
  }
  if ( (v2 & 0x100) != 0 )
  {
    v13 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
      return v3;
    v10 = v13;
    *(_DWORD *)v13 = 16;
    v10[1] = 0LL;
    *((_DWORD *)v10 + 1) = 267;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v10 + 3) = *((_DWORD *)this + 21);
    *((_DWORD *)this + 4) &= ~0x100u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x200) == 0 )
    return 1;
  v13 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
  {
    v11 = v13;
    *(_DWORD *)v13 = 16;
    v11[1] = 0LL;
    *((_DWORD *)v11 + 1) = 268;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v11 + 3) = *((_DWORD *)this + 22);
    *((_DWORD *)this + 4) &= ~0x200u;
    return 1;
  }
  return v3;
}
