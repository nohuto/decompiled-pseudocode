/*
 * XREFs of SynthesizePTPMouseInput @ 0x1400D0144
 * Callers:
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140149060 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x14021B1D0 (ChildProcessRootSynthesizedMouseInput.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1400D135C (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall SynthesizePTPMouseInput(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct PTPMouseInputData *a6)
{
  CMouseProcessor *MouseProcessor; // r9
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  _BYTE v13[24]; // [rsp+30h] [rbp-59h] BYREF
  int v14; // [rsp+48h] [rbp-41h]
  int v15; // [rsp+4Ch] [rbp-3Dh]
  __int64 v16; // [rsp+50h] [rbp-39h]
  __int64 v17; // [rsp+58h] [rbp-31h]
  __int64 v18; // [rsp+60h] [rbp-29h]
  __int64 v19; // [rsp+68h] [rbp-21h]
  __int64 v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]
  __int64 v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1369LL);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1370LL);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1);
  if ( MouseProcessor )
  {
    v11 = *a2;
    v16 = a1;
    v12 = *((_QWORD *)a2 + 2);
    v18 = a3;
    v19 = a4;
    v22 = 0;
    v15 = 0;
    v20 = *((_QWORD *)a6 + 4);
    v23 = 0LL;
    v17 = 0LL;
    v14 = a1 != 0 ? 3 : 0;
    v21 = a5;
    v24 = 0;
    *(_OWORD *)v13 = v11;
    *(_QWORD *)&v13[16] = v12;
    if ( (BYTE2(v11) & 1) == 0 && !*(_QWORD *)&v13[12] )
      v21 = a5 | 8;
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct CMouseProcessor::MouseInputDataEx *)v13, a6);
  }
}
