/*
 * XREFs of ?EmitUpdateCommands@CVisualReferenceControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140233810
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CVisualReferenceControllerMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualReferenceControllerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v3; // ebx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
  {
LABEL_7:
    LOBYTE(v3) = 1;
    return v3;
  }
  v3 = 0;
  v8 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
  {
    v4 = v8;
    *(_DWORD *)v8 = 16;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 1) = 741;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    v5 = *((_QWORD *)this + 7);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 16);
      if ( v6 )
        v3 = *(_DWORD *)(v6 + 32);
    }
    *((_DWORD *)v4 + 3) = v3;
    *((_DWORD *)this + 4) &= ~0x40u;
    goto LABEL_7;
  }
  return v3;
}
