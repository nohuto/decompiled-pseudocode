/*
 * XREFs of ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x140223AD4
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1400D28D4 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1400818C4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(
        CMouseProcessor::MouseInputDataEx *this,
        const struct _MouseProcessorData *a2)
{
  __int16 v4; // cx
  int v5; // eax
  _DWORD *v6; // rcx
  _DWORD *v7; // rdi

  if ( *(_WORD *)this == 0xFFFF )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2466);
  if ( (*((_BYTE *)this + 2) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2469);
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 0x8000) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2472);
  if ( (*((_BYTE *)a2 + 12) & 1) != 0 )
  {
    v4 = *((_WORD *)this + 1) | 1;
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    v5 = *((_DWORD *)a2 + 2);
    *((_WORD *)this + 1) = v4;
    *((_DWORD *)this + 4) = v5;
    if ( (*((_BYTE *)a2 + 12) & 2) != 0 )
      *((_WORD *)this + 1) = v4 | 2;
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 4) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2490);
    *((_DWORD *)this + 18) &= ~8u;
    v6 = (_DWORD *)((char *)a2 + 16);
  }
  else
  {
    v6 = (_DWORD *)((char *)a2 + 16);
    if ( (*((_DWORD *)a2 + 4) & 0x10) != 0 )
    {
      *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
      *((_DWORD *)this + 4) = *((_DWORD *)a2 + 2);
      *((_DWORD *)this + 18) = *((_DWORD *)this + 18) & 0xFFFFFFF3 | 4;
    }
  }
  *((_QWORD *)this + 10) = 2LL;
  if ( (*v6 & 2) != 0 )
  {
    *((_DWORD *)this + 18) |= 0x800u;
    v7 = (_DWORD *)((char *)a2 + 16);
  }
  else
  {
    v7 = v6;
  }
  if ( (*v6 & 4) != 0 )
    *((_DWORD *)this + 18) |= 2u;
  else
    v7 = v6;
  if ( (*v6 & 0x20) != 0 )
    *((_DWORD *)this + 18) |= 0x2000u;
  if ( (*v7 & 0x40) != 0 )
    *((_DWORD *)this + 18) |= 0x4000u;
}
