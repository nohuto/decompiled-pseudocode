/*
 * XREFs of ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x140050DAC
 * Callers:
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x14004FA00 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x140050BFC (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x140053890 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x14016F40C (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x140050ED0 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     ?GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x140050F14 (-GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     ?GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z @ 0x140051318 (-GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z @ 0x140169D24 (-GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetPointerTouchpadInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x140215B0C (-GetPointerTouchpadInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTouchProcessor::PointerInfoCopyOutHelper(
        CTouchProcessor *this,
        struct CPointerInfoNode *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned int v11; // ebp
  int (*v12)(void); // rax
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(char *, __int64, struct tagHID_POINTER_DEVICE_INFO *, _QWORD, unsigned int, struct tagPOINTER_INFO *); // rax
  unsigned int v15; // edi
  unsigned int v17; // edi

  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 13978LL);
  v10 = *(_QWORD *)((char *)a2 + 148);
  v11 = 0;
  v12 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 48) + 6048LL);
  if ( v12 )
  {
    if ( v12() >= 0 )
    {
      v14 = *(__int64 (__fastcall **)(char *, __int64, struct tagHID_POINTER_DEVICE_INFO *, _QWORD, unsigned int, struct tagPOINTER_INFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13) + 48) + 6056LL);
      if ( v14 )
      {
        v11 = v14((char *)a2 + 160, v10, a3, a4, a5, a6);
        if ( v11 )
        {
          v15 = a4 - 2;
          if ( v15 )
          {
            v17 = v15 - 1;
            if ( v17 )
            {
              if ( v17 == 2 )
                InputTraceLogging::Pointer::GetPointerTouchpadInfo(a6);
              else
                InputTraceLogging::Pointer::GetPointerInfo(a6);
            }
            else
            {
              InputTraceLogging::Pointer::GetPointerPenInfo(a6);
            }
          }
          else
          {
            InputTraceLogging::Pointer::GetPointerTouchInfo(a6);
          }
        }
      }
    }
  }
  return v11;
}
