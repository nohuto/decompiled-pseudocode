/*
 * XREFs of ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x140240E80
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdatesCompletedForResource@CResourceMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x140120744 (-EmitUpdatesCompletedForResource@CResourceMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetDefaultAnimation@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140166EC4 (-EmitSetDefaultAnimation@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401C0BA0 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0EC@$0EA@$0A@$0DC@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140240F5C (-Marshal@-$CResourceMarshalerArray@$0EC@$0EA@$0A@$0DC@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@.c)
 *     ?Marshal@?$CResourceMarshalerArray@$0EE@$0EB@$0A@$0DC@$0FH@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@I@Z @ 0x140240F80 (-Marshal@-$CResourceMarshalerArray@$0EE@$0EB@$0A@$0DC@$0FH@@DirectComposition@@QEAA_NPEAPEAVCBat.c)
 */

char __fastcall DirectComposition::CConditionalExpressionMarshaler::EmitUpdateCommands(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl
  _QWORD *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2)
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<66,64,0,50>::Marshal(
                          (char *)this + 136,
                          a2,
                          *((unsigned int *)this + 8))
    && (unsigned __int8)DirectComposition::CResourceMarshalerArray<68,65,0,50,87>::Marshal(
                          (char *)this + 160,
                          a2,
                          *((unsigned int *)this + 8))
    && DirectComposition::CConditionalExpressionMarshaler::EmitSetDefaultAnimation(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x2000) == 0 )
    {
      v7 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
        return v4;
      v5 = v7;
      *(_DWORD *)v7 = 16;
      v5[1] = 0LL;
      *((_DWORD *)v5 + 1) = 69;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 48);
      *((_DWORD *)this + 4) |= 0x2000u;
    }
    if ( DirectComposition::CResourceMarshaler::EmitUpdatesCompletedForResource(this, a2) )
      return 1;
  }
  return v4;
}
