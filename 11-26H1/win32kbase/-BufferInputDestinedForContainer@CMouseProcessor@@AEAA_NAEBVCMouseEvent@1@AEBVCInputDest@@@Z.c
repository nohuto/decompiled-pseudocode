/*
 * XREFs of ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1400CE60C
 * Callers:
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1400CE498 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1400CF738 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x1401C12C0 (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1401C20BC (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x140211DB8 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1402237E0 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x140224AD4 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 */

bool __fastcall CMouseProcessor::BufferInputDestinedForContainer(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  bool v4; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v14; // ebx
  __int64 v15; // rcx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // ebx
  __int64 v20; // rcx
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  const struct tagBASEWNDCONTAINERINFO *ContainerInfo; // rsi
  char v25; // dl
  char v26; // cl
  int v27; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState((_DWORD)this, (_DWORD)a2, (_DWORD)a3) + 19480)
    && (v14 = *(_DWORD *)(W32GetUserSessionState(v8, v7, v9) + 19484),
        (unsigned int)W32GetCurrentWin32kSessionId(v15) == v14)
    && *(_DWORD *)(W32GetUserSessionState(v8, v7, v9) + 19536)
    || *(_DWORD *)(W32GetUserSessionState(v8, v7, v9) + 36) == 3
    || (unsigned __int8)isChildPartition(v8, v7, v9) && *(_BYTE *)(W32GetUserSessionState(v17, v16, v18) + 19392) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v8, v7, v9) + 19480) )
    {
      v19 = *(_DWORD *)(W32GetUserSessionState(v11, v10, v12) + 19484);
      if ( (unsigned int)W32GetCurrentWin32kSessionId(v20) == v19 )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v22, v21, v23) + 19536) )
        {
          CInputDest::GetContainerId(a3, &v27);
          ContainerInfo = CInputDest::GetContainerInfo(a3);
          v25 = 1;
          v4 = ContainerInfo != 0LL;
          if ( *((_WORD *)this + 2572) != (_WORD)v27 || (v26 = 1, *((_WORD *)this + 2573) != HIWORD(v27)) )
            v26 = 0;
          if ( *((_WORD *)this + 2556) )
            v25 = 0;
          else
            *((_DWORD *)this + 1286) = v27;
          if ( ContainerInfo && v25 && v26 )
            goto LABEL_25;
          if ( *((_BYTE *)this + 5129) )
          {
            CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
              (CMouseProcessor *)((char *)this + 4088),
              a2);
            CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 4088));
          }
          if ( ContainerInfo )
LABEL_25:
            CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk(
              (CMouseProcessor *)((char *)this + 4088),
              a2,
              a3);
        }
      }
    }
  }
  return v4;
}
