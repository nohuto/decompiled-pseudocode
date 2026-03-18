/*
 * XREFs of ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x140133510
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14009C278 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall QHelper::SetMouseMovePoint(
        QHelper *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3)
{
  int v4; // r8d
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edx

  if ( *(_DWORD *)this )
  {
    v4 = *((_DWORD *)this + 23);
    if ( v4 )
    {
      v5 = *((_QWORD *)this + 10);
      v6 = v5 ? *(_QWORD *)(v5 + 16) : 0LL;
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 464);
        if ( v7 )
        {
          v8 = 18;
          if ( v4 == 2 )
            v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 40LL) + 288LL);
          if ( (((unsigned __int16)(v8 >> 8) ^ (unsigned __int16)(*((_DWORD *)a2 + 2) >> 8)) & 0x1FF) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 474LL);
          *(_QWORD *)(v7 + 192) = *(_QWORD *)a2;
          *(_DWORD *)(v7 + 200) = *((_DWORD *)a2 + 2);
        }
      }
    }
  }
}
