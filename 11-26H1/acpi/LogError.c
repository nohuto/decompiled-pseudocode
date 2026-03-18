/*
 * XREFs of LogError @ 0x140007244
 * Callers:
 *     PushAccFieldObj @ 0x1400010C0 (PushAccFieldObj.c)
 *     NewObjOwner @ 0x1400015D0 (NewObjOwner.c)
 *     ParseSuperName @ 0x140001A40 (ParseSuperName.c)
 *     PushTerm @ 0x140002590 (PushTerm.c)
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     ObjTypeSizeOf @ 0x140002F10 (ObjTypeSizeOf.c)
 *     ParseNameTail @ 0x140003020 (ParseNameTail.c)
 *     PushCall @ 0x140003230 (PushCall.c)
 *     AccessFieldData @ 0x1400047D0 (AccessFieldData.c)
 *     GetFieldUnitRegionObj @ 0x140004D70 (GetFieldUnitRegionObj.c)
 *     AccessBaseField @ 0x140004F30 (AccessBaseField.c)
 *     ParseTerm @ 0x140006120 (ParseTerm.c)
 *     ParseArg @ 0x140006850 (ParseArg.c)
 *     ParseName @ 0x140006D60 (ParseName.c)
 *     FreeData @ 0x1400075B0 (FreeData.c)
 *     GetNameSpaceObjectNoLock @ 0x140007700 (GetNameSpaceObjectNoLock.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     ParseIntObj @ 0x140009C30 (ParseIntObj.c)
 *     AsyncEvalObject @ 0x140009DE0 (AsyncEvalObject.c)
 *     AccFieldUnit @ 0x14000ACF0 (AccFieldUnit.c)
 *     ParseCall @ 0x14000B5D0 (ParseCall.c)
 *     ParseRelease @ 0x14000C360 (ParseRelease.c)
 *     FreeObjData @ 0x14000C970 (FreeObjData.c)
 *     ReadField @ 0x14000CB30 (ReadField.c)
 *     AcquireGL @ 0x14000CF90 (AcquireGL.c)
 *     WriteField @ 0x14000D02C (WriteField.c)
 *     ParseAcquire @ 0x14000D400 (ParseAcquire.c)
 *     WriteFieldLoop @ 0x14000DDB0 (WriteFieldLoop.c)
 *     ProcessIncDec @ 0x14000DFF0 (ProcessIncDec.c)
 *     SyncEvalObject @ 0x14000EE78 (SyncEvalObject.c)
 *     WriteCookAccess @ 0x14000F370 (WriteCookAccess.c)
 *     MapPhysMem @ 0x14000FC90 (MapPhysMem.c)
 *     ParseObjName @ 0x14000FE10 (ParseObjName.c)
 *     MapUnmapPhysMem @ 0x14001017C (MapUnmapPhysMem.c)
 *     Field @ 0x1400102A0 (Field.c)
 *     OpRegion @ 0x140010510 (OpRegion.c)
 *     CopyObjBuffer @ 0x140010868 (CopyObjBuffer.c)
 *     ParseFieldList @ 0x140010940 (ParseFieldList.c)
 *     ParseField @ 0x140010AC8 (ParseField.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     CreateXField @ 0x140011840 (CreateXField.c)
 *     SleepStall @ 0x140011960 (SleepStall.c)
 *     IncDec @ 0x140011A50 (IncDec.c)
 *     ReadObject @ 0x140011B40 (ReadObject.c)
 *     Index @ 0x1400120A0 (Index.c)
 *     Notify @ 0x1400123C0 (Notify.c)
 *     ExprOp2_64 @ 0x140012500 (ExprOp2_64.c)
 *     LogOp2_32 @ 0x140012BEC (LogOp2_32.c)
 *     IfElse @ 0x140013020 (IfElse.c)
 *     ValidateArgTypes @ 0x140013230 (ValidateArgTypes.c)
 *     PushScope @ 0x1400138A0 (PushScope.c)
 *     Store @ 0x140013D20 (Store.c)
 *     WriteObject @ 0x140014190 (WriteObject.c)
 *     DupObjData @ 0x140014650 (DupObjData.c)
 *     ValidateTarget @ 0x140014990 (ValidateTarget.c)
 *     Acquire @ 0x140014CB0 (Acquire.c)
 *     Release @ 0x140014E60 (Release.c)
 *     Concat @ 0x140015240 (Concat.c)
 *     ToHexStr @ 0x1400155F0 (ToHexStr.c)
 *     PushPost @ 0x140015C84 (PushPost.c)
 *     AMLIEvalPkgDataElement @ 0x140015D90 (AMLIEvalPkgDataElement.c)
 *     MidString @ 0x140015EA0 (MidString.c)
 *     CopyObject @ 0x1400166E0 (CopyObject.c)
 *     ToString @ 0x140016D20 (ToString.c)
 *     IndexField @ 0x140030BC0 (IndexField.c)
 *     BankField @ 0x140030DC0 (BankField.c)
 *     ResetSignal @ 0x140036A80 (ResetSignal.c)
 *     Wait @ 0x140036BE0 (Wait.c)
 *     RegRSAccess @ 0x140036D68 (RegRSAccess.c)
 *     RawFieldAccess @ 0x140036EEC (RawFieldAccess.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x140037230 (AmlpValidateFirmwareMemoryAddress.c)
 *     NewObjData @ 0x140037DEC (NewObjData.c)
 *     ParsePackage @ 0x1400387D0 (ParsePackage.c)
 *     ParseString @ 0x140038A6C (ParseString.c)
 *     Buffer @ 0x1400395A0 (Buffer.c)
 *     SleepQueueRequest @ 0x14003971C (SleepQueueRequest.c)
 *     Package @ 0x14003C780 (Package.c)
 *     CreateField @ 0x14003CBF0 (CreateField.c)
 *     Method @ 0x14003E490 (Method.c)
 *     PushPreserveWriteObj @ 0x14003F97C (PushPreserveWriteObj.c)
 *     ToDecStr @ 0x140044A30 (ToDecStr.c)
 *     PushFrame @ 0x14004944C (PushFrame.c)
 *     PerformMutexDriverCallbacks @ 0x14004A31C (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x14004D640 (InitMutex.c)
 *     AMLIRegEventHandler @ 0x140051350 (AMLIRegEventHandler.c)
 *     ConcatenateResTemplate @ 0x140052780 (ConcatenateResTemplate.c)
 *     ParseFieldConnection @ 0x140054000 (ParseFieldConnection.c)
 *     AMLIEvalPackageElement @ 0x14006C2F0 (AMLIEvalPackageElement.c)
 *     LoadDDB @ 0x14006CDDC (LoadDDB.c)
 *     LoadFieldUnitDDB @ 0x14006CF10 (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x14006D0F8 (LoadMemDDB.c)
 *     AMLIAddNamespaceOverride @ 0x14006D664 (AMLIAddNamespaceOverride.c)
 *     RegEventHandler @ 0x14006E754 (RegEventHandler.c)
 *     RegOpcodeHandler @ 0x14006E7B0 (RegOpcodeHandler.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 *     InitEvent @ 0x14006F924 (InitEvent.c)
 *     PowerRes @ 0x14006FAA0 (PowerRes.c)
 *     Processor @ 0x14006FC20 (Processor.c)
 *     NestAsyncEvalObject @ 0x1400704D4 (NestAsyncEvalObject.c)
 *     Load @ 0x140070B90 (Load.c)
 *     LoadTable @ 0x140070D90 (LoadTable.c)
 *     ProcessLoadTable @ 0x1400711D0 (ProcessLoadTable.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1400DC718 (InitIllegalIOAddressListFromHAL.c)
 *     AMLIInitialize @ 0x1400DD5C8 (AMLIInitialize.c)
 *     SyncLoadDDB @ 0x1400DDC3C (SyncLoadDDB.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_Ds @ 0x14003DC80 (WPP_RECORDER_SF_Ds.c)
 */

_UNKNOWN **__fastcall LogError(int a1)
{
  _UNKNOWN **result; // rax
  char v2; // bl
  int v3; // edi
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  int v7; // [rsp+20h] [rbp-28h]

  dword_14008ED38 = a1;
  result = (_UNKNOWN **)&unk_14008DC50;
  v2 = a1;
  v3 = 0;
  while ( result[1] )
  {
    if ( a1 == *(_DWORD *)result )
    {
      RtlStringCchPrintfA(&pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", a1, (const char *)result[1]);
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (_UNKNOWN **)WPP_RECORDER_SF_Ds(
                              WPP_GLOBAL_Control->DeviceExtension,
                              v4,
                              v5,
                              v6,
                              v7,
                              v2,
                              *((_QWORD *)&unk_14008DC50 + 2 * v3 + 1));
      return result;
    }
    ++v3;
    result += 2;
  }
  return result;
}
