/*
 * XREFs of ?EmitUpdateCommands@CSceneMeshRendererComponentMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140247320
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9876a52e63b79935749d30bbb5de6d96___lambda_45b02998bed050691e5b6850ccebf4aa___ @ 0x140247200 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9876a52e63b79935749d30bbb5de6d9.c)
 */

char __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int v2; // eax
  char v3; // di
  _QWORD *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // r9d
  __int64 v14; // [rsp+20h] [rbp-18h]
  void *v15; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x40) != 0 )
  {
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v15) )
      return v3;
    v6 = v15;
    *(_DWORD *)v15 = 16;
    v6[1] = 0LL;
    *((_DWORD *)v6 + 1) = 262;
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
    v15 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v15) )
      return v3;
    v9 = v15;
    *(_DWORD *)v15 = 16;
    v9[1] = 0LL;
    *((_DWORD *)v9 + 1) = 263;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    v10 = *((_QWORD *)this + 8);
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 32);
    else
      v11 = 0;
    *((_DWORD *)v9 + 3) = v11;
    v2 = *((_DWORD *)this + 4) & 0xFFFFFF7F;
    *((_DWORD *)this + 4) = v2;
  }
  v12 = *((_DWORD *)this + 20);
  v15 = this;
  if ( (v2 & 0x100) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9876a52e63b79935749d30bbb5de6d96___lambda_45b02998bed050691e5b6850ccebf4aa___(
         (__int64)this,
         a2,
         (unsigned int *)this + 21,
         v12,
         v14,
         (__int64)&v15) )
  {
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return v3;
}
