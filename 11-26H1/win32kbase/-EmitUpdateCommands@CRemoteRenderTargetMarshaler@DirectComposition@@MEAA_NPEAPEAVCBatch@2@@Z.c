/*
 * XREFs of ?EmitUpdateCommands@CRemoteRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140242E00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CRemoteRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CRemoteRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int v2; // eax
  char v3; // bl
  char *v6; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  char *v10; // rcx
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x40) != 0 )
  {
    v12 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v12) )
      return v3;
    v6 = (char *)v12;
    *(_DWORD *)v12 = 20;
    *(_OWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 251;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 7);
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v12 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
      return v3;
    v7 = v12;
    *(_DWORD *)v12 = 16;
    v7[1] = 0LL;
    *((_DWORD *)v7 + 1) = 252;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    v8 = *((_QWORD *)this + 13);
    if ( v8 )
      v9 = *(_DWORD *)(v8 + 32);
    else
      v9 = 0;
    *((_DWORD *)v7 + 3) = v9;
    v2 = *((_DWORD *)this + 4) & 0xFFFFFF7F;
    *((_DWORD *)this + 4) = v2;
  }
  if ( (v2 & 0x100) == 0 )
    return 1;
  v12 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v12) )
  {
    v10 = (char *)v12;
    *(_DWORD *)v12 = 36;
    *(_OWORD *)(v10 + 4) = 0LL;
    *(_OWORD *)(v10 + 20) = 0LL;
    *((_DWORD *)v10 + 1) = 253;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v10 + 12) = *((_QWORD *)this + 8);
    *(_OWORD *)(v10 + 20) = *(_OWORD *)((char *)this + 72);
    *((_DWORD *)this + 4) &= ~0x100u;
    return 1;
  }
  return v3;
}
