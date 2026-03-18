/*
 * XREFs of ?EmitUpdateCommands@CAtlasedRectsGroupMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x14022A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$07$0EA@$0BNJ@$0BNK@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x14022D1C0 (-Marshal@-$CResourceMarshalerArray@VCResourceMarshaler@DirectComposition@@$07$0EA@$0BNJ@$0BNK@@D.c)
 */

char __fastcall DirectComposition::CAtlasedRectsGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CAtlasedRectsGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  _DWORD *v2; // rdi
  char v3; // bl
  _DWORD *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _DWORD *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = (_DWORD *)((char *)this + 16);
  v3 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v10 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v10) )
      return v3;
    v6 = v10;
    *v10 = 16;
    *(_QWORD *)(v6 + 1) = 0LL;
    v6[3] = 0;
    v6[1] = 472;
    v6[2] = *((_DWORD *)this + 8);
    v7 = *((_QWORD *)this + 7);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 32);
    else
      v8 = 0;
    v6[3] = v8;
    *v2 &= ~0x20u;
  }
  if ( (unsigned __int8)DirectComposition::CResourceMarshalerArray<DirectComposition::CResourceMarshaler,8,64,473,474>::Marshal(
                          (char *)this + 64,
                          a2,
                          *((unsigned int *)this + 8),
                          v2) )
    return 1;
  return v3;
}
