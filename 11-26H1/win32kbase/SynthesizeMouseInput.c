/*
 * XREFs of SynthesizeMouseInput @ 0x14015DEE0
 * Callers:
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1402196B0 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1400D135C (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall SynthesizeMouseInput(__int64 a1, __int128 *a2, __int64 a3, __int64 a4, int a5)
{
  CMouseProcessor *MouseProcessor; // r9
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  _BYTE v12[24]; // [rsp+30h] [rbp-41h] BYREF
  int v13; // [rsp+48h] [rbp-29h]
  int v14; // [rsp+4Ch] [rbp-25h]
  __int64 v15; // [rsp+50h] [rbp-21h]
  __int64 v16; // [rsp+58h] [rbp-19h]
  __int64 v17; // [rsp+60h] [rbp-11h]
  __int64 v18; // [rsp+68h] [rbp-9h]
  __int64 v19; // [rsp+70h] [rbp-1h]
  int v20; // [rsp+78h] [rbp+7h]
  int v21; // [rsp+7Ch] [rbp+Bh]
  __int64 v22; // [rsp+80h] [rbp+Fh]
  int v23; // [rsp+88h] [rbp+17h]

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1342LL);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1343LL);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, (int)a2, a3);
  if ( MouseProcessor )
  {
    v10 = *a2;
    v15 = a1;
    v11 = *((_QWORD *)a2 + 2);
    v17 = a3;
    v18 = a4;
    v19 = a4;
    v14 = 0;
    v22 = 0LL;
    v16 = 0LL;
    v13 = a1 != 0 ? 3 : 0;
    v20 = a5;
    v21 = 0;
    v23 = 0;
    *(_OWORD *)v12 = v10;
    *(_QWORD *)&v12[16] = v11;
    if ( (BYTE2(v10) & 1) == 0 && !*(_QWORD *)&v12[12] )
      v20 = a5 | 8;
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct CMouseProcessor::MouseInputDataEx *)v12, 0LL);
  }
}
