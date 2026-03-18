/*
 * XREFs of ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14012184C
 * Callers:
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x140224010 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     IsMouseIVEnabled @ 0x14009C12C (IsMouseIVEnabled.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14009C278 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14009C52C (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x14009C758 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x1401C12C0 (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1401C20BC (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x140211DB8 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1402237E0 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x140224AD4 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CMouseProcessor::DeliverMouseMoveToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMoveEvent *a2,
        const struct CInputDest *a3,
        struct tagPOINT *a4,
        struct _mouseCursorEvent *a5)
{
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  int (*v19)(void); // rax
  __int64 v20; // rcx
  void (*v21)(void); // rax
  __int64 v22; // rcx
  int (*v23)(void); // rax
  __int64 v24; // rcx
  void (*v25)(void); // rax
  const struct tagBASEWNDCONTAINERINFO *ContainerInfo; // rax
  const struct tagBASEWNDCONTAINERINFO *v27; // rbp
  char v28; // al
  int v29; // [rsp+70h] [rbp+18h] BYREF

  if ( !*(_DWORD *)a3 )
  {
    v29 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5387LL);
  }
  if ( !IsMouseIVEnabled((int)this, (int)a2, (int)a3) || !isRootPartition(v10, v9, v11) )
    goto LABEL_12;
  CInputDest::GetContainerId(a3, &v29);
  ContainerInfo = CInputDest::GetContainerInfo(a3);
  v10 = v29;
  v27 = ContainerInfo;
  LOBYTE(v11) = 1;
  if ( *((_WORD *)this + 2572) != (_WORD)v29 || (v9 = HIWORD(v29), v28 = 1, *((_WORD *)this + 2573) != HIWORD(v29)) )
    v28 = 0;
  if ( *((_WORD *)this + 2556) )
    LOBYTE(v11) = 0;
  else
    *((_DWORD *)this + 1286) = v29;
  if ( v27 && (_BYTE)v11 && v28 )
    goto LABEL_36;
  if ( *((_BYTE *)this + 5129) )
  {
    CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput((CMouseProcessor *)((char *)this + 4088), a2);
    CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 4088));
  }
  if ( v27 )
  {
LABEL_36:
    CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk((CMouseProcessor *)((char *)this + 4088), a2, a3);
  }
  else
  {
LABEL_12:
    if ( !*(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 18928) )
      goto LABEL_13;
    v15 = 0LL;
    if ( *(_DWORD *)a3 && *((_DWORD *)a3 + 23) )
    {
      v16 = *((_QWORD *)a3 + 10);
      v17 = v16 ? *(_QWORD *)(v16 + 16) : 0LL;
      if ( v17 )
        v15 = *(_QWORD *)(v17 + 464);
    }
    if ( v15 != *(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 18928) )
LABEL_13:
      CMouseProcessor::Telemetry::OnBackgroundMouseInput(a3);
    v19 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18) + 48) + 4600LL);
    if ( v19 )
    {
      if ( v19() >= 0 )
      {
        v21 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20) + 48) + 4608LL);
        if ( v21 )
          v21();
      }
    }
    CMouseProcessor::UpdateGlobalCursorOwner(
      this,
      a3,
      a4,
      (const struct tagINPUT_MESSAGE_SOURCE *)(*((_QWORD *)a2 + 1) + 112LL));
    CMouseProcessor::DetectAndApplyMouseMovePostStrategy(this, a3, (const struct tagLOGICALPOINT *)&a4[1], a2, a5);
    v23 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22) + 48) + 4616LL);
    if ( v23 && v23() >= 0 )
    {
      v25 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24) + 48) + 4624LL);
      if ( v25 )
        v25();
    }
  }
}
