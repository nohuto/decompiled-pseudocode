/*
 * XREFs of ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x140119374
 * Callers:
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1400CF738 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400CFE80 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 *     UserIsCurrentThreadDesktopComposed @ 0x140119530 (UserIsCurrentThreadDesktopComposed.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle@@@Z @ 0x14022432C (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  int v4; // edx
  int v5; // r8d
  __int64 v6; // xmm1_8
  int v7; // eax
  unsigned __int64 v8; // r9
  _DWORD *v9; // rax
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  int v11; // [rsp+40h] [rbp-18h]

  if ( (*((_DWORD *)a2 + 109) & 0x20) != 0 )
  {
    if ( (unsigned int)UserIsCurrentThreadDesktopComposed() )
    {
      v6 = *((_QWORD *)a2 + 24);
      v7 = *((_DWORD *)a2 + 50);
    }
    else
    {
      v9 = anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(&v10, v4, v5);
      v6 = *(_QWORD *)v9;
      v7 = v9[2];
    }
    v8 = *((_QWORD *)a2 + 26);
    v11 = v7;
    v10 = v6;
    CMouseProcessor::PostMouseMoveToQ(
      this,
      a2,
      (const struct tagLOGICALPOINT *)&v10,
      v8,
      *((_QWORD *)a2 + 27),
      (struct tagQ *)((char *)a2 + 224));
    if ( (*((_DWORD *)a2 + 109) & 0x20) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1707LL);
  }
}
