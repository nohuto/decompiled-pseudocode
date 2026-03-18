/*
 * XREFs of ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1402237E0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1400CE60C (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14012184C (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1401C20BC (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x140224010 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x14022172C (-SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
        CMouseProcessor::ContainerMouseInputBuffer *this,
        __int64 a2,
        struct ContainerMouseInput *a3)
{
  __int64 v4; // xmm0_8
  int v5; // eax
  CMouseProcessor::ContainerMouseInputBuffer *v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+2Ch] [rbp-1Ch]
  int v9; // [rsp+34h] [rbp-14h]

  if ( *((_WORD *)this + 512) )
  {
    v4 = *(_QWORD *)((char *)this + 1044);
    v7 = *((unsigned __int16 *)this + 512);
    v5 = *((_DWORD *)this + 263);
    v6 = this;
    v8 = v4;
    v9 = v5;
    IVRootDeliver::Mouse::SendMouseInput(
      (CMouseProcessor::ContainerMouseInputBuffer *)((char *)this + 1056),
      (struct CONTAINER_ID *)&v6,
      a3);
    memset(this, 0, (unsigned __int64)*((unsigned __int16 *)this + 512) << 6);
    *((_WORD *)this + 512) = 0;
    *((_QWORD *)this + 129) = this;
    *((_BYTE *)this + 1041) = 0;
    *((_BYTE *)this + 1052) = 0;
  }
}
