/*
 * XREFs of ?EmitSetDirtyAndBoundsRectCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140136FB8
 * Callers:
 *     ?EmitUpdateCommands@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14023F880 (-EmitUpdateCommands@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

char __fastcall DirectComposition::CPrimitiveGroupMarshaler::EmitSetDirtyAndBoundsRectCommand(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rcx
  char *v9; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    v10 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v10) )
      return 0;
    v9 = (char *)v10;
    *(_DWORD *)v10 = 28;
    *(_OWORD *)(v9 + 4) = 0LL;
    *(_QWORD *)(v9 + 20) = 0LL;
    *((_DWORD *)v9 + 1) = 209;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v9 + 12) = *(_OWORD *)((char *)this + 196);
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  v5 = *((_DWORD *)this + 48);
  if ( v5 )
  {
    v10 = 0LL;
    v6 = (unsigned int)(16 * (v5 + 1));
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, v6, &v10) )
    {
      v7 = v10;
      *(_DWORD *)v10 = v6;
      v7[1] = 0LL;
      *((_DWORD *)v7 + 1) = 211;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 48);
      memmove(v7 + 2, (char *)this + 128, 16LL * *((unsigned int *)this + 48));
      *((_DWORD *)this + 48) = 0;
      return v4;
    }
    return 0;
  }
  return v4;
}
