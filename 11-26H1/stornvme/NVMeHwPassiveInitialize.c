/*
 * XREFs of NVMeHwPassiveInitialize @ 0x140013020
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 *     NVMeControllerStartFailureEventLog @ 0x140007370 (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerInitPart2 @ 0x14000CC70 (NVMeControllerInitPart2.c)
 *     NVMeLogEtwControllerInfo @ 0x1400131FC (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetryControllerInfo @ 0x1400136F4 (NVMeLogTelemetryControllerInfo.c)
 *     NVMePowerInitialize @ 0x1400188C4 (NVMePowerInitialize.c)
 *     NVMeIceInitPart2 @ 0x140031A48 (NVMeIceInitPart2.c)
 */

char __fastcall NVMeHwPassiveInitialize(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // di
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 1560);
  v2 = 0;
  if ( (*(_DWORD *)(a1 + 4064) & 0x1000) != 0 )
    return 1;
  StorPortExtendedFunction(55LL, a1, 0LL, &unk_140038AE0);
  if ( *(_DWORD *)(v1 + 516) )
  {
    LOBYTE(v5) = 1;
    if ( (unsigned int)NVMeControllerInitPart2(a1, v5, 0)
      || (*(_DWORD *)(a1 + 4064) & 0x10000) != 0 && (unsigned int)NVMeIceInitPart2(a1) )
    {
      goto LABEL_15;
    }
    v6 = 0xFFFFFFFFLL;
    v7 = *(unsigned __int16 *)(a1 + 330);
    v8 = v7 * (*(unsigned __int16 *)(a1 + 326) - 1LL);
    if ( v8 <= 0xFFFFFFFF )
    {
      v6 = v7 * (*(unsigned __int16 *)(a1 + 326) - 1LL);
      if ( !v8 )
        v6 = 128LL;
    }
    v9 = *(unsigned int *)(a1 + 152);
    if ( (_DWORD)v9 )
    {
      if ( v6 >= v9 )
        v6 = *(unsigned int *)(a1 + 152);
    }
    StorPortExtendedFunction(84LL, a1, v6, (unsigned int)v6);
  }
  if ( NVMeControllerInitPart3(a1, 0) )
  {
    NVMePowerInitialize(a1);
    v2 = 1;
    NVMeLogEtwControllerInfo(a1);
    NVMeLogTelemetryControllerInfo(a1);
    return v2;
  }
LABEL_15:
  NVMeControllerStartFailureEventLog(a1);
  NVMeLogEtwControllerInfo(a1);
  return v2;
}
