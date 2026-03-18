/*
 * XREFs of IrqArbpFindSuitableRangeMsi @ 0x1400D15F0
 * Callers:
 *     IrqArbFindSuitableRange @ 0x1400D0C00 (IrqArbFindSuitableRange.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002EC00 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     ArbFindSuitableRange @ 0x1400D0CA0 (ArbFindSuitableRange.c)
 *     ProcessorMsiSupported @ 0x1400D1720 (ProcessorMsiSupported.c)
 */

char __fastcall IrqArbpFindSuitableRangeMsi(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  __int64 v5; // r10
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  int v9; // edx
  int v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = 0;
  v3 = *(_QWORD **)(a2 + 56);
  v5 = *(_QWORD *)(a2 + 40);
  v6 = *(_QWORD *)(a2 + 72);
  v7 = *(_QWORD *)(v5 + 40);
  LOBYTE(v11) = *(_BYTE *)(v3[5] + 4LL) & 1;
  v8 = (unsigned int)(*(_DWORD *)(v7 + 12) - *(_DWORD *)(v7 + 8) + 1);
  if ( *(_DWORD *)(a2 + 48) == 1 && v3[2] == 1LL && v3[3] == 1LL )
    *(_WORD *)(a2 + 64) |= 0x40u;
  if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, _DWORD, int, _DWORD, int))ProcessorFindIdtEntries)(
              *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL),
              *(_QWORD *)(v5 + 40),
              v6,
              v8,
              *(_DWORD *)a2,
              v11,
              0,
              1) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        20,
        30,
        (__int64)&WPP_a7cbb71da2803f118d26d72a062fa390_Traceguids,
        *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL));
    }
    return 0;
  }
  LOBYTE(v11) = 0;
  if ( (int)ProcessorMsiSupported(v6 + 16, &v11) < 0 || !(_BYTE)v11 )
    return 0;
  return ArbFindSuitableRange(a1, a2);
}
