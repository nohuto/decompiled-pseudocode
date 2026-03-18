/*
 * XREFs of ?EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1402326D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0CHO@$0CHP@$0A@$0HM@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x14023488C (-Marshal@-$CResourceMarshalerArray@$0CHO@$0CHP@$0A@$0HM@@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0CIA@$0CIB@$0A@$0HF@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x1402348B0 (-Marshal@-$CResourceMarshalerArray@$0CIA@$0CIB@$0A@$0HF@@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 */

bool __fastcall DirectComposition::CSceneNodeMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneNodeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // ebx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  void *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( (unsigned __int8)DirectComposition::CResourceMarshalerArray<638,639,0,124>::Marshal(
                          (char *)this + 56,
                          a2,
                          *((unsigned int *)this + 8))
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<640,641,0,117>::Marshal(
                          (char *)this + 80,
                          a2,
                          *((unsigned int *)this + 8)) )
  {
    if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    {
LABEL_8:
      LOBYTE(v4) = 1;
      return v4;
    }
    v8 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v8) )
    {
      v5 = v8;
      *(_DWORD *)v8 = 16;
      v5[1] = 0LL;
      *((_DWORD *)v5 + 1) = 642;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      v6 = *((_QWORD *)this + 13);
      if ( v6 )
        v4 = *(_DWORD *)(v6 + 32);
      *((_DWORD *)v5 + 3) = v4;
      *((_DWORD *)this + 4) &= ~0x40u;
      goto LABEL_8;
    }
  }
  return v4;
}
