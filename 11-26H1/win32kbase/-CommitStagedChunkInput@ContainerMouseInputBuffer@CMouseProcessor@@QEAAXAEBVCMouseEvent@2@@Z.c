/*
 * XREFs of ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1401C20BC
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1400CE60C (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14012184C (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x140224010 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1402237E0 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
        CMouseProcessor::ContainerMouseInputBuffer *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rax

  if ( *((_BYTE *)this + 1040) )
  {
    v4 = *((_QWORD *)this + 129);
    v5 = *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 24LL);
    *(_WORD *)v4 = v5;
    *(_WORD *)(v4 + 2) = *(_WORD *)(*((_QWORD *)a2 + 1) + 36LL);
    *(_DWORD *)(v4 + 8) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 32LL);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 40LL);
    v6 = *((_QWORD *)a2 + 1);
    *(_QWORD *)(*((_QWORD *)this + 129) + 24LL) = *(_QWORD *)(v6 + 16);
    if ( *(_DWORD *)v6 == 3 )
    {
      v7 = *(_QWORD *)(v6 + 8);
      if ( v7 )
      {
        LOBYTE(v5) = 19;
        v8 = HMValidateHandleNoSecure(v7, v5);
        if ( v8 )
          *(_QWORD *)(*((_QWORD *)this + 129) + 24LL) = *(_QWORD *)(v8 + 24);
      }
    }
    if ( *(_DWORD *)v6 != 2 )
    {
      if ( *(_DWORD *)v6 == 1 )
        *(_QWORD *)(*((_QWORD *)this + 129) + 24LL) = 0LL;
      *(_DWORD *)(*((_QWORD *)this + 129) + 48LL) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 172LL);
      *(_BYTE *)(*((_QWORD *)this + 129) + 32LL) = 1;
      *(_QWORD *)(*((_QWORD *)this + 129) + 40LL) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 104LL);
    }
    *(_DWORD *)(*((_QWORD *)this + 129) + 48LL) |= 4u;
    v9 = (unsigned __int16)++*((_WORD *)this + 512);
    v10 = *((unsigned __int16 *)this + 512);
    *((_WORD *)this + 520) = 256;
    *((_QWORD *)this + 129) = (char *)this + 64 * v10;
    if ( v9 > 0x10 )
      CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(this);
  }
}
