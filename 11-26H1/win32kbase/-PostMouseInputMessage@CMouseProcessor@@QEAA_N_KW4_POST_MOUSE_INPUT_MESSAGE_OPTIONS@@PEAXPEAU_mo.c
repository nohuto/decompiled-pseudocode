/*
 * XREFs of ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x140224010
 * Callers:
 *     PostMouseInputMessage @ 0x14021BEB4 (PostMouseInputMessage.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14006F90C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x14009C12C (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1400CE498 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1400CF738 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x14012184C (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1401C20BC (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x140222A08 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1402237E0 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?PostMouseInputMessage@Mouse@InputTraceLogging@@SAX_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAX@Z @ 0x140224280 (-PostMouseInputMessage@Mouse@InputTraceLogging@@SAX_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAX@Z.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x140224964 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
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
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  int v20; // edx
  int v21; // r8d
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // rdx
  struct ContainerMouseInput *v27; // r8
  __int128 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+50h] [rbp-B0h]
  __int128 v31; // [rsp+60h] [rbp-A0h]
  __int128 v32; // [rsp+70h] [rbp-90h]
  __int128 v33; // [rsp+80h] [rbp-80h]
  __int128 v34; // [rsp+90h] [rbp-70h]
  __int128 v35; // [rsp+A0h] [rbp-60h]
  _OWORD v36[7]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v37[32]; // [rsp+120h] [rbp+20h] BYREF

  v5 = a3;
  InputTraceLogging::Mouse::PostMouseInputMessage(a2, a3, a4);
  v9 = CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
         (CMouseProcessor::BufferedMouseInputList *)(a1 + 4040),
         a2);
  v10 = 0;
  v11 = v9;
  if ( v9 )
  {
    if ( !*((_DWORD *)v9 + 6) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1276);
    v12 = 0;
    memset(v36, 0, sizeof(v36));
    if ( (v5 & 3) == 3 )
    {
      if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a4, 4u, (struct tagINPUTDEST *)v36) )
      {
        v12 = 1;
LABEL_8:
        if ( (v5 & 1) != 0 || v12 )
        {
          v13 = 0LL;
          if ( v12 )
          {
            v29 = v36[0];
            v31 = v36[2];
            v30 = v36[1];
            v33 = v36[4];
            v14 = v36[6];
            v32 = v36[3];
            v15 = v36[5];
          }
          else
          {
            v16 = *(_OWORD *)((char *)v11 + 40);
            v29 = *(_OWORD *)((char *)v11 + 24);
            v17 = *(_OWORD *)((char *)v11 + 56);
            v30 = v16;
            v18 = *(_OWORD *)((char *)v11 + 72);
            v31 = v17;
            v19 = *(_OWORD *)((char *)v11 + 88);
            v32 = v18;
            v15 = *(_OWORD *)((char *)v11 + 104);
            v33 = v19;
            v14 = *(_OWORD *)((char *)v11 + 120);
          }
          v35 = v14;
          v34 = v15;
          CInputDest::CInputDest((CInputDest *)v37, (const struct tagINPUTDEST *)&v29);
          if ( v12 && !v37[0] )
          {
            CInputDest::~CInputDest((CInputDest *)v37);
            goto LABEL_28;
          }
          if ( *((_DWORD *)v11 + 42) == 1 )
          {
            v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360);
            CMouseProcessor::DeliverMouseMoveToInputDest(
              (CMouseProcessor *)a1,
              (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360),
              (const struct CInputDest *)v37,
              (struct tagPOINT *)v11 + 18,
              a5);
          }
          else
          {
            v22 = *((_DWORD *)v11 + 42) - 2;
            if ( *((_DWORD *)v11 + 42) == 2 )
            {
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360);
              CMouseProcessor::DeliverMouseButtonToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360),
                (const struct CInputDest *)v37,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 144));
            }
            else if ( *((_DWORD *)v11 + 42) == 3 )
            {
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360);
              CMouseProcessor::DeliverMouseWheelToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 360),
                (const struct CInputDest *)v37,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 144));
            }
          }
          if ( IsMouseIVEnabled(v22, v20, v21) && isRootPartition(v24, v23, v25) && v13 )
          {
            CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
              (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 4088),
              v13);
            CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
              (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 4088),
              v26,
              v27);
          }
          CInputDest::~CInputDest((CInputDest *)v37);
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
