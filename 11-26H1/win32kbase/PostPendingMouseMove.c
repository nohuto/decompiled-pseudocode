/*
 * XREFs of PostPendingMouseMove @ 0x140119440
 * Callers:
 *     ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14016F764 (-CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400CFE80 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 *     UserIsCurrentThreadDesktopComposed @ 0x140119530 (UserIsCurrentThreadDesktopComposed.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle@@@Z @ 0x14022432C (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PostPendingMouseMove(struct tagQ *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  CMouseProcessor *v6; // rdi
  int v7; // edx
  int v8; // r8d
  __int64 v9; // xmm1_8
  int v10; // eax
  unsigned __int64 v11; // r9
  _DWORD *v12; // rax
  __int64 v13; // [rsp+38h] [rbp-20h] BYREF
  int v14; // [rsp+40h] [rbp-18h]

  result = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v5 = *(_QWORD *)(result + 3136);
  if ( v5 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = (CMouseProcessor *)result;
    if ( result )
    {
      if ( (*((_DWORD *)a1 + 109) & 0x20) != 0 )
      {
        if ( (unsigned int)UserIsCurrentThreadDesktopComposed() )
        {
          v9 = *((_QWORD *)a1 + 24);
          v10 = *((_DWORD *)a1 + 50);
        }
        else
        {
          v12 = anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(&v13, v7, v8);
          v9 = *(_QWORD *)v12;
          v10 = v12[2];
        }
        v11 = *((_QWORD *)a1 + 26);
        v14 = v10;
        v13 = v9;
        CMouseProcessor::PostMouseMoveToQ(
          v6,
          a1,
          (const struct tagLOGICALPOINT *)&v13,
          v11,
          *((_QWORD *)a1 + 27),
          (struct tagQ *)((char *)a1 + 224));
        result = *((unsigned int *)a1 + 109);
        if ( (result & 0x20) != 0 )
          return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1707LL);
      }
    }
  }
  return result;
}
