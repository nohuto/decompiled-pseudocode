/*
 * XREFs of ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1402215DC
 * Callers:
 *     PostMouseInputMessage @ 0x140216994 (PostMouseInputMessage.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1400380D4 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     IsMouseIVEnabled @ 0x14005F180 (IsMouseIVEnabled.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018E544 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018F9E8 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1401A0250 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x14021F260 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14021FF1C (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1402205A4 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?PostMouseInputMessage@Mouse@InputTraceLogging@@SAX_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAX@Z @ 0x14022186C (-PostMouseInputMessage@Mouse@InputTraceLogging@@SAX_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAX@Z.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x140222078 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

char __fastcall CMouseProcessor::PostMouseInputMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        void *a4,
        struct _mouseCursorEvent *a5)
{
  char v5; // r12
  struct CMouseProcessor::MouseInputMessage *v9; // rax
  char v10; // bl
  struct CMouseProcessor::MouseInputMessage *v11; // rdi
  char v12; // r14
  const struct CMouseProcessor::CMouseEvent *v13; // rsi
  const struct tagINPUTDEST *v14; // rdx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  struct ContainerMouseInput *v24; // r8
  _OWORD v26[7]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v27[7]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v28[7]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v29[32]; // [rsp+190h] [rbp+90h] BYREF

  v5 = a3;
  InputTraceLogging::Mouse::PostMouseInputMessage(a2, a3, a4);
  v9 = CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
         (CMouseProcessor::BufferedMouseInputList *)(a1 + 4032),
         a2);
  v10 = 0;
  v11 = v9;
  if ( v9 )
  {
    if ( !*((_DWORD *)v9 + 6) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1266);
    v12 = 0;
    memset(v26, 0, sizeof(v26));
    if ( (v5 & 3) == 3 )
    {
      if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a4, 4, (struct tagINPUTDEST *)v26) )
      {
        v12 = 1;
LABEL_8:
        if ( (v5 & 1) != 0 || v12 )
        {
          v13 = 0LL;
          if ( v12 )
          {
            v14 = (const struct tagINPUTDEST *)v27;
            v27[0] = v26[0];
            v27[2] = v26[2];
            v27[1] = v26[1];
            v27[4] = v26[4];
            v27[3] = v26[3];
            v27[6] = v26[6];
            v27[5] = v26[5];
          }
          else
          {
            v14 = (const struct tagINPUTDEST *)v28;
            v15 = *(_OWORD *)((char *)v11 + 40);
            v28[0] = *(_OWORD *)((char *)v11 + 24);
            v16 = *(_OWORD *)((char *)v11 + 56);
            v28[1] = v15;
            v17 = *(_OWORD *)((char *)v11 + 72);
            v28[2] = v16;
            v18 = *(_OWORD *)((char *)v11 + 88);
            v28[3] = v17;
            v19 = *(_OWORD *)((char *)v11 + 104);
            v28[4] = v18;
            v20 = *(_OWORD *)((char *)v11 + 120);
            v28[5] = v19;
            v28[6] = v20;
          }
          CInputDest::CInputDest((CInputDest *)v29, v14);
          if ( v12 && !v29[0] )
          {
            CInputDest::~CInputDest((CInputDest *)v29);
            goto LABEL_28;
          }
          switch ( *((_DWORD *)v11 + 42) )
          {
            case 1:
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360);
              CMouseProcessor::DeliverMouseMoveToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360),
                (const struct CInputDest *)v29,
                (struct tagPOINT *)v11 + 18,
                a5);
              break;
            case 2:
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360);
              CMouseProcessor::DeliverMouseButtonToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360),
                (const struct CInputDest *)v29,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 144));
              break;
            case 3:
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360);
              CMouseProcessor::DeliverMouseWheelToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360),
                (const struct CInputDest *)v29,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 144));
              break;
          }
          if ( IsMouseIVEnabled() && isRootPartition(v22, v21) && v13 )
          {
            CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
              (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 4080),
              v13);
            CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
              (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 4080),
              v23,
              v24);
          }
          CInputDest::~CInputDest((CInputDest *)v29);
        }
        v10 = 1;
      }
    }
    else if ( !a4 )
    {
      goto LABEL_8;
    }
LABEL_28:
    CMouseProcessor::MouseInputMessage::`scalar deleting destructor'((char *)v11);
    LOBYTE(v9) = v10;
  }
  return (char)v9;
}
