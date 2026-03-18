/*
 * XREFs of ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1400EBE5C
 * Callers:
 *     PostPendingMouseMove @ 0x1400EBE10 (PostPendingMouseMove.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018F9E8 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     UserIsCurrentThreadDesktopComposed @ 0x1400B9EB0 (UserIsCurrentThreadDesktopComposed.c)
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400BA520 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2@Z @ 0x140221A60 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  __int64 v4; // rdx
  __int64 v5; // xmm0_8
  int v6; // eax
  _DWORD *v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-30h] BYREF
  int v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+50h] [rbp-18h]

  if ( (*((_DWORD *)a2 + 103) & 0x20) != 0 )
  {
    if ( (unsigned int)UserIsCurrentThreadDesktopComposed((__int64)this, (__int64)a2) )
    {
      v5 = *((_QWORD *)a2 + 24);
      v6 = *((_DWORD *)a2 + 50);
    }
    else
    {
      v7 = anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(&v10, v4);
      v5 = *(_QWORD *)v7;
      v6 = v7[2];
    }
    v8 = *((_QWORD *)a2 + 26);
    v13 = v6;
    v12 = v5;
    v11 = v6;
    v9 = *((_QWORD *)a2 + 27);
    v10 = v5;
    CMouseProcessor::PostMouseMoveToQ(this, a2, (const struct tagLOGICALPOINT *)&v10, v8, v9);
    if ( (*((_DWORD *)a2 + 103) & 0x20) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1697LL);
  }
}
