/*
 * XREFs of ?EmitUpdateCommands@CContainerShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14023E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0EH@$0EG@$0A@$0JK@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x14023E988 (-Marshal@-$CResourceMarshalerArray@$0EH@$0EG@$0A@$0JK@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@.c)
 */

char __fastcall DirectComposition::CContainerShapeMarshaler::EmitUpdateCommands(
        DirectComposition::CContainerShapeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  _DWORD *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  _DWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    v9 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v9) )
      return v2;
    v5 = v9;
    *v9 = 16;
    *((_QWORD *)v5 + 1) = 0LL;
    v5[1] = 287;
    v5[2] = *((_DWORD *)this + 8);
    v6 = *((_QWORD *)this + 7);
    if ( v6 )
      v7 = *(_DWORD *)(v6 + 32);
    else
      v7 = 0;
    v5[3] = v7;
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  if ( (unsigned __int8)DirectComposition::CResourceMarshalerArray<71,70,0,154>::Marshal(
                          (char *)this + 64,
                          a2,
                          *((unsigned int *)this + 8)) )
    return 1;
  return v2;
}
