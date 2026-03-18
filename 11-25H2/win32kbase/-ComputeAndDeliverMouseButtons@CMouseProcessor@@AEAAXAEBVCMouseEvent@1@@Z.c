/*
 * XREFs of ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14018F280
 * Callers:
 *     <none>
 * Callees:
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x14018EEA0 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x14019526C (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseButtons(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int i; // ebp
  int v9; // r9d
  __int128 v10; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v11[48]; // [rsp+40h] [rbp-58h] BYREF

  v4 = (**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2) & 0xF3FF;
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3680LL);
  v5 = 1;
  for ( i = (*(unsigned __int16 (__fastcall **)(const struct CMouseProcessor::CMouseEvent *))(*(_QWORD *)a2 + 8LL))(a2);
        v4;
        i >>= 2 )
  {
    if ( (v4 & 3) != 0 )
    {
      if ( (v4 & 1) != 0 )
      {
        if ( !*(_DWORD *)(W32GetUserSessionState(v7, v6) + 16272) || (v9 = 1, (i & 1) == 0) )
          v9 = 0;
        CMouseProcessor::CButtonEvent::CButtonEvent((__int64)v11, v5, 1, v9, (__int64)a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v11);
      }
      if ( (v4 & 2) != 0 )
      {
        CMouseProcessor::CButtonEvent::CButtonEvent((__int64)v11, v5, 2, 0, (__int64)a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v11);
      }
      v7 = *((_QWORD *)a2 + 1);
      if ( (*(_BYTE *)(v7 + 120) & 1) == 0 && *(_DWORD *)(v7 + 116) != 1 )
      {
        v10 = *(_OWORD *)(v7 + 144);
        if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v10, v6, 0LL) )
          break;
      }
    }
    v5 *= 2;
    v4 >>= 2;
  }
}
