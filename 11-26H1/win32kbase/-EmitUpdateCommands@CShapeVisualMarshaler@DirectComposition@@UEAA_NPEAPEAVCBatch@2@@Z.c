/*
 * XREFs of ?EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14023E050
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400FF990 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0BAO@$0BAN@$0A@$0JK@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x14023E108 (-Marshal@-$CResourceMarshalerArray@$0BAO@$0BAN@$0A@$0JK@@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  _QWORD *v5; // rcx
  __int64 v6; // rax
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  v4 = 1;
  if ( (*((_DWORD *)this + 92) & 1) != 0 )
  {
    v8 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x10uLL, &v8) )
      return 0;
    v5 = v8;
    *(_DWORD *)v8 = 16;
    v5[1] = 0LL;
    *((_DWORD *)v5 + 1) = 271;
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
    v6 = *((_QWORD *)this + 42);
    if ( v6 )
      LODWORD(v6) = *(_DWORD *)(v6 + 32);
    *((_DWORD *)v5 + 3) = v6;
    *((_DWORD *)this + 92) &= ~1u;
  }
  if ( !(unsigned __int8)DirectComposition::CResourceMarshalerArray<270,269,0,154>::Marshal(
                           (char *)this + 344,
                           a2,
                           *((unsigned int *)this + 8)) )
    return 0;
  return v4;
}
