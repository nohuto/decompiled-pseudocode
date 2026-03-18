/*
 * XREFs of ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x14005F048
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1400380D4 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018F9E8 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14021FF1C (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     IsMouseIVEnabled @ 0x14005F180 (IsMouseIVEnabled.c)
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x14019FD58 (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1401A0250 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1401F6FF4 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1402205A4 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x140222370 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 */

bool __fastcall CMouseProcessor::BufferInputDestinedForContainer(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  bool v4; // si
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  const struct tagBASEWNDCONTAINERINFO *ContainerInfo; // rbp
  char v16; // dl
  char v17; // cl
  int v18; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( (unsigned __int8)IsMouseIVEnabled() )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 19448) )
    {
      v12 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19452);
      if ( (unsigned int)W32GetCurrentWin32kSessionId() == v12 )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v14, v13) + 19504) )
        {
          CInputDest::GetContainerId(a3, &v18);
          ContainerInfo = CInputDest::GetContainerInfo(a3);
          v16 = 1;
          v4 = ContainerInfo != 0LL;
          if ( *((_WORD *)this + 2568) != (_WORD)v18 || (v17 = 1, *((_WORD *)this + 2569) != HIWORD(v18)) )
            v17 = 0;
          if ( *((_WORD *)this + 2552) )
            v16 = 0;
          else
            *((_DWORD *)this + 1284) = v18;
          if ( ContainerInfo && v16 && v17 )
            goto LABEL_18;
          if ( *((_BYTE *)this + 5121) )
          {
            CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
              (CMouseProcessor *)((char *)this + 4080),
              a2);
            CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 4080));
          }
          if ( ContainerInfo )
LABEL_18:
            CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk(
              (CMouseProcessor *)((char *)this + 4080),
              a2,
              a3);
        }
      }
    }
  }
  return v4;
}
