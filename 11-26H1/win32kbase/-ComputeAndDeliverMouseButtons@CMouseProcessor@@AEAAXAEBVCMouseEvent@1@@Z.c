/*
 * XREFs of ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1400884A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1400898F4 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x14018741C (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
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
  int v9; // r8d
  __int64 v10; // r9
  __int128 v11; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v12[48]; // [rsp+40h] [rbp-58h] BYREF

  v4 = (**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2) & 0xF3FF;
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3690LL);
  v5 = 1;
  for ( i = (*(unsigned __int16 (__fastcall **)(const struct CMouseProcessor::CMouseEvent *))(*(_QWORD *)a2 + 8LL))(a2);
        v4;
        i >>= 2 )
  {
    if ( (v4 & 3) != 0 )
    {
      if ( (v4 & 1) != 0 )
      {
        if ( !*(_DWORD *)(W32GetUserSessionState(v7, v6, v9) + 16264) || (v10 = 1LL, (i & 1) == 0) )
          v10 = 0LL;
        CMouseProcessor::CButtonEvent::CButtonEvent(v12, v5, 1LL, v10, a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v12);
      }
      if ( (v4 & 2) != 0 )
      {
        CMouseProcessor::CButtonEvent::CButtonEvent(v12, v5, 2LL, 0LL, a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v12);
      }
      v7 = *((_QWORD *)a2 + 1);
      if ( (*(_DWORD *)(v7 + 120) & 1) == 0 && *(_DWORD *)(v7 + 116) != 1 )
      {
        v11 = *(_OWORD *)(v7 + 144);
        if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v11, v6, 0LL) )
          break;
      }
    }
    v5 *= 2;
    v4 >>= 2;
  }
}
