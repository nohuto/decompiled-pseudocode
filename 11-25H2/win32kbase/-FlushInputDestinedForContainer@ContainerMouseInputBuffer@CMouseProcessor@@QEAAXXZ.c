/*
 * XREFs of ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1402205A4
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x14005F048 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1401A0250 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1402215DC (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x140222878 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x14021DFB8 (-SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z.c)
 *     memset @ 0x140243000 (memset.c)
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
