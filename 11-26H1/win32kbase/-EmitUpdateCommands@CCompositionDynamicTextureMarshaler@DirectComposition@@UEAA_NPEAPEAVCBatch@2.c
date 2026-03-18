/*
 * XREFs of ?EmitUpdateCommands@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140230530
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Marshal@?$CMarshaledArray@UtagRECT@@$0HEGEEDEE@$0BJP@$0BKA@$00@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402346F0 (-Marshal@-$CMarshaledArray@UtagRECT@@$0HEGEEDEE@$0BJP@$0BKA@$00@DirectComposition@@QEAA_NPEAPEAV.c)
 */

bool __fastcall DirectComposition::CCompositionDynamicTextureMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionDynamicTextureMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // ebx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( (unsigned __int8)DirectComposition::CMarshaledArray<tagRECT,1952727876,415,416,1>::Marshal((DirectComposition::CCompositionDynamicTextureMarshaler *)((char *)this + 56)) )
  {
    if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    {
LABEL_7:
      LOBYTE(v4) = 1;
      return v4;
    }
    v8 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
    {
      v5 = v8;
      *(_DWORD *)v8 = 16;
      v5[1] = 0LL;
      *((_DWORD *)v5 + 1) = 417;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      v6 = *((_QWORD *)this + 10);
      if ( v6 )
        v4 = *(_DWORD *)(v6 + 32);
      *((_DWORD *)v5 + 3) = v4;
      *((_DWORD *)this + 4) &= ~0x40u;
      goto LABEL_7;
    }
  }
  return v4;
}
