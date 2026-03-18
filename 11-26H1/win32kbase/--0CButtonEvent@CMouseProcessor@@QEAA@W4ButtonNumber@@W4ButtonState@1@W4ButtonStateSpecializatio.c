/*
 * XREFs of ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1400898F4
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1400884A0 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x140089AA0 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::CButtonEvent(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // r10
  int v7; // eax
  void *v8; // rax

  v6 = *(_QWORD *)(a5 + 8);
  *(_QWORD *)a1 = &CMouseProcessor::CButtonEvent::`vftable';
  *(_QWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 28) = a2;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 16) = 2;
  if ( !(_DWORD)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7705LL);
  if ( ((*(_DWORD *)(a1 + 24) - 1) & *(_DWORD *)(a1 + 24)) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7708LL);
  v7 = *(_DWORD *)(a1 + 32);
  if ( v7 != 2 && v7 != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7710LL);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 120LL) & 0x400) == 0 )
  {
    LOBYTE(a2) = *(_DWORD *)(a1 + 32) == 2;
    if ( (unsigned __int8)anonymous_namespace_::IsMouseButtonSwapped(*(unsigned int *)(a1 + 24), a2) )
      *(_DWORD *)(a1 + 24) ^= 3u;
  }
  if ( *(_QWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7717LL);
  switch ( *(_DWORD *)(a1 + 24) )
  {
    case 1:
      v8 = &CMouseProcessor::CButtonEvent::_dependentInfo;
      break;
    case 2:
      v8 = &unk_140266CA8;
      break;
    case 4:
      v8 = &unk_140266CC0;
      break;
    case 8:
      v8 = &unk_140266CD8;
      break;
    case 0x10:
      v8 = &unk_140266CF0;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7747LL);
      return a1;
  }
  *(_QWORD *)(a1 + 40) = v8;
  return a1;
}
