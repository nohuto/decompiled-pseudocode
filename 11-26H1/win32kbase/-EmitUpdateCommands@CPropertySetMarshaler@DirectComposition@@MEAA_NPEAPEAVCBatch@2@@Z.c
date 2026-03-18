/*
 * XREFs of ?EmitUpdateCommands@CPropertySetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140127470
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401275A8 (-EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::EmitUpdateCommands(
        DirectComposition::CPropertySetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  int *v3; // rdi
  int v4; // eax
  _QWORD *v7; // rcx
  char *v8; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (int *)((char *)this + 16);
  v4 = *((_DWORD *)this + 4);
  if ( (v4 & 0x40) != 0 )
  {
    v12 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
      return v2;
    v7 = v12;
    v8 = (char *)this + 16;
    *(_DWORD *)v12 = 16;
    v7[1] = 0LL;
    *((_DWORD *)v7 + 1) = 179;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v7 + 3) = *((_DWORD *)this + 14);
    *v3 &= ~0x40u;
    v4 = *v3;
  }
  else
  {
    v8 = (char *)this + 16;
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v12 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
      return v2;
    v10 = v12;
    *(_DWORD *)v12 = 16;
    v10[1] = 0LL;
    *((_DWORD *)v10 + 1) = 231;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v10 + 3) = *((_DWORD *)this + 16);
    *v3 &= ~0x80u;
    v4 = *v3;
    v3 = (int *)v8;
  }
  if ( (v4 & 0x200) != 0 )
  {
    v12 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v12) )
      return v2;
    v11 = v12;
    *(_DWORD *)v12 = 16;
    v11[1] = 0LL;
    *((_DWORD *)v11 + 1) = 233;
    *((_DWORD *)v11 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v11 + 3) = *((_DWORD *)this + 26);
    *v3 &= ~0x200u;
  }
  if ( DirectComposition::CPropertySetMarshaler::EmitSetProperties(this, (struct DirectComposition::CBatch **)a2) )
    return 1;
  return v2;
}
