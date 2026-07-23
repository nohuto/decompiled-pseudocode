/*
 * XREFs of PopDripsWatchdogUpdateMetrics @ 0x140B69834
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407E2A20 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     PopAccumulateNonActivatedCpuTime @ 0x140421DFC (PopAccumulateNonActivatedCpuTime.c)
 *     PpmConvertTimeTo @ 0x1404239FC (PpmConvertTimeTo.c)
 *     PopDeepSleepEnabled @ 0x1404CB9AC (PopDeepSleepEnabled.c)
 *     PopBatteryCapacityToRate @ 0x140510144 (PopBatteryCapacityToRate.c)
 */

__int64 __fastcall PopDripsWatchdogUpdateMetrics(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  int v7; // esi
  unsigned int v8; // r10d
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // r11d
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  unsigned __int64 v15; // r9
  int v16; // r8d
  bool v17; // zf
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  int v20; // r9d
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 result; // rax
  unsigned __int64 v24; // [rsp+30h] [rbp+8h] BYREF

  v7 = *(_DWORD *)(a3 + 28);
  v8 = DWORD1(xmmword_140F10660);
  v9 = *(_QWORD *)(a3 + 8);
  v10 = *(_DWORD *)(a3 + 24);
  *(_BYTE *)(a1 + 600) = word_140E27158 & 1;
  v11 = v7 - *(_DWORD *)(a1 + 644);
  v12 = v9 - *(_QWORD *)(a1 + 624);
  v13 = a2 - *(_QWORD *)(a1 + 568);
  v14 = a5;
  *a4 = v11;
  v24 = 0LL;
  *v14 = v12;
  LODWORD(v12) = v10 - *(_DWORD *)(a1 + 640);
  *a6 = v12;
  v15 = v13 / 0x2710;
  *(_DWORD *)(a1 + 584) = v13 / 0x2710;
  if ( (_DWORD)v12 )
  {
    *(_DWORD *)(a1 + 576) = 0;
    *(_DWORD *)(a1 + 596) = 0;
    *(_DWORD *)(a1 + 640) = v10;
    *(_QWORD *)(a1 + 624) = v9;
    *(_DWORD *)(a1 + 604) = v8;
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 576);
    v17 = (_DWORD)v15 + v16 == 0;
    v18 = v15 + v16;
    *(_DWORD *)(a1 + 576) = v18;
    if ( !v17 && (unk_140F10688 & 0x40000000) == 0 )
    {
      v19 = *(_DWORD *)(a1 + 604);
      if ( v8 < v19 )
        *(_DWORD *)(a1 + 596) = PopBatteryCapacityToRate(v19 - v8, 1000LL * v18);
    }
  }
  if ( v11 || !PopDeepSleepEnabled() )
  {
    *(_DWORD *)(a1 + 580) = 0;
    *(_DWORD *)(a1 + 644) = v7;
  }
  else
  {
    *(_DWORD *)(a1 + 580) += v20;
  }
  PopAccumulateNonActivatedCpuTime(0, (_QWORD *)(a1 + 608), &v24);
  v21 = PpmConvertTimeTo(v24, 0x3E8uLL);
  v22 = *(_DWORD *)(a1 + 584);
  *(_DWORD *)(a1 + 588) = v21;
  if ( v21 <= v22 )
    result = 100 * v21 / v22;
  else
    result = 100LL;
  *(_DWORD *)(a1 + 592) = result;
  return result;
}
