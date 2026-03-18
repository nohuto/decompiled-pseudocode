/*
 * XREFs of ?EmitUpdateCommands@CRemoteTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140231BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CRemoteTextureMarshaler::EmitUpdateCommands(
        DirectComposition::CRemoteTextureMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  int v3; // ebx
  char *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  if ( (v2 & 0x40) != 0 )
  {
    v11 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v11) )
      return v3;
    v6 = (char *)v11;
    *(_DWORD *)v11 = 20;
    *(_OWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 1) = 593;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)this + 4) &= ~0x40u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x80u) != 0 )
  {
    v11 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v11) )
      return v3;
    v7 = v11;
    *(_DWORD *)v11 = 24;
    v7[1] = 0LL;
    v7[2] = 0LL;
    *((_DWORD *)v7 + 1) = 594;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)((char *)v7 + 12) = *((_QWORD *)this + 8);
    *((_DWORD *)v7 + 5) = *((_DWORD *)this + 18);
    *((_DWORD *)this + 4) &= ~0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( (v2 & 0x100) == 0 )
  {
LABEL_12:
    LOBYTE(v3) = 1;
    return v3;
  }
  v11 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
  {
    v8 = v11;
    *(_DWORD *)v11 = 16;
    v8[1] = 0LL;
    *((_DWORD *)v8 + 1) = 595;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    v9 = *((_QWORD *)this + 10);
    if ( v9 )
      v3 = *(_DWORD *)(v9 + 32);
    *((_DWORD *)v8 + 3) = v3;
    *((_DWORD *)this + 4) &= ~0x100u;
    goto LABEL_12;
  }
  return v3;
}
