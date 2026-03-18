/*
 * XREFs of ?EmitUpdateCommands@CSharedSectionWrapperMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1402478E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CSharedSectionWrapperMarshaler::EmitUpdateCommands(
        DirectComposition::CSharedSectionWrapperMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v3; // ebx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
LABEL_6:
    LOBYTE(v3) = 1;
    return v3;
  }
  v3 = 0;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v7) )
  {
    v4 = v7;
    *(_DWORD *)v7 = 24;
    v4[1] = 0LL;
    v4[2] = 0LL;
    *((_DWORD *)v4 + 1) = 273;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
    v5 = *((_QWORD *)this + 7);
    if ( v5 )
      v3 = *(_DWORD *)(v5 + 32);
    *((_DWORD *)v4 + 3) = v3;
    *((_DWORD *)v4 + 4) = *((_DWORD *)this + 16);
    *((_DWORD *)v4 + 5) = *((_DWORD *)this + 17);
    *((_DWORD *)this + 4) |= 0x40u;
    goto LABEL_6;
  }
  return v3;
}
