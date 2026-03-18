/*
 * XREFs of AcpiDiagTraceAmlError @ 0x1400072EC
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
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall AcpiDiagTraceAmlError(__int64 a1, int a2)
{
  int v3; // r10d
  int v4; // r9d
  __int64 v5; // rax
  char *v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // r9
  __int16 v9; // ax
  __int64 v10; // rax
  char *v11; // rcx
  __int64 *v12; // rdx
  __int64 v13; // r8
  __int16 v14; // ax
  int v16; // [rsp+30h] [rbp-19h] BYREF
  char v17; // [rsp+34h] [rbp-15h]
  int v18; // [rsp+38h] [rbp-11h] BYREF
  char v19; // [rsp+3Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v21; // [rsp+50h] [rbp+7h]
  int v22; // [rsp+58h] [rbp+Fh]
  int v23; // [rsp+5Ch] [rbp+13h]
  int *v24; // [rsp+60h] [rbp+17h]
  __int64 v25; // [rsp+68h] [rbp+1Fh]
  __int64 v26; // [rsp+70h] [rbp+27h] BYREF
  __int16 v27; // [rsp+78h] [rbp+2Fh]
  __int64 v28; // [rsp+80h] [rbp+37h] BYREF
  __int16 v29; // [rsp+88h] [rbp+3Fh]
  int v30; // [rsp+B8h] [rbp+6Fh] BYREF

  v30 = a2;
  v29 = 0;
  v27 = 0;
  v28 = 0x41002F004ELL;
  v26 = 0x41002F004ELL;
  v3 = 3;
  v19 = 0;
  v4 = 3;
  v17 = 0;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 80);
    if ( v5 )
    {
      v6 = (char *)&v16;
      v16 = *(_DWORD *)(v5 + 40);
      v7 = &v26;
      v8 = 4LL;
      do
      {
        v9 = *v6++;
        *(_WORD *)v7 = v9;
        v7 = (__int64 *)((char *)v7 + 2);
        --v8;
      }
      while ( v8 );
      v27 = 0;
      v4 = 5;
    }
    v10 = *(_QWORD *)(a1 + 72);
    if ( v10 )
    {
      v11 = (char *)&v18;
      v18 = *(_DWORD *)(v10 + 40);
      v12 = &v28;
      v13 = 4LL;
      do
      {
        v14 = *v11++;
        *(_WORD *)v12 = v14;
        v12 = (__int64 *)((char *)v12 + 2);
        --v13;
      }
      while ( v13 );
      v29 = 0;
      v3 = 5;
    }
  }
  UserData.Ptr = (unsigned __int64)&v26;
  UserData.Reserved = 0;
  UserData.Size = 2 * v4;
  v23 = 0;
  v21 = &v28;
  v25 = 4LL;
  v22 = 2 * v3;
  v24 = &v30;
  return EtwWrite(
           *(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
           &ACPI_ETW_EVENT_AMLI_ERROR,
           0LL,
           3u,
           &UserData);
}
