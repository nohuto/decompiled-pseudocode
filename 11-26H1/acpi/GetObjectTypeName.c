/*
 * XREFs of GetObjectTypeName @ 0x14001495C
 * Callers:
 *     ObjTypeSizeOf @ 0x140002F10 (ObjTypeSizeOf.c)
 *     FreeData @ 0x1400075B0 (FreeData.c)
 *     AccFieldUnit @ 0x14000ACF0 (AccFieldUnit.c)
 *     FreeObjData @ 0x14000C970 (FreeObjData.c)
 *     ReadField @ 0x14000CB30 (ReadField.c)
 *     WriteField @ 0x14000D02C (WriteField.c)
 *     ProcessIncDec @ 0x14000DFF0 (ProcessIncDec.c)
 *     CopyObjBuffer @ 0x140010868 (CopyObjBuffer.c)
 *     Index @ 0x1400120A0 (Index.c)
 *     ExprOp2_64 @ 0x140012500 (ExprOp2_64.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     Store @ 0x140013D20 (Store.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 *     Acquire @ 0x140014CB0 (Acquire.c)
 *     Release @ 0x140014E60 (Release.c)
 *     Concat @ 0x140015240 (Concat.c)
 *     AMLIEvalPkgDataElement @ 0x140015D90 (AMLIEvalPkgDataElement.c)
 *     ResetSignal @ 0x140036A80 (ResetSignal.c)
 *     Wait @ 0x140036BE0 (Wait.c)
 *     NewObjData @ 0x140037DEC (NewObjData.c)
 *     PrintObject @ 0x1400553E8 (PrintObject.c)
 *     AMLIEvalPackageElement @ 0x14006C2F0 (AMLIEvalPackageElement.c)
 *     DumpObject @ 0x14006FE98 (DumpObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetObjectTypeName(int a1)
{
  __int64 v1; // rdx
  _QWORD *i; // rax

  v1 = 0LL;
  for ( i = &unk_14008CBC0; i[1]; i += 2 )
  {
    if ( a1 == *(_DWORD *)i )
      return i[1];
  }
  return v1;
}
