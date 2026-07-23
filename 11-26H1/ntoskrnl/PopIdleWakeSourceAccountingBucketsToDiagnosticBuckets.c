/*
 * XREFs of PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets @ 0x140B2AC20
 * Callers:
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x140B2AF00 (PopIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     PpmConvertTimeTo @ 0x1404239FC (PpmConvertTimeTo.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x140B2ADDC (PopIdleWakeConvertIntervalBucketsTo.c)
 */

__int64 __fastcall PopIdleWakeSourceAccountingBucketsToDiagnosticBuckets(__int64 a1, __int64 a2)
{
  *(_DWORD *)a2 = *(_DWORD *)a1;
  *(_QWORD *)(a2 + 8) = PpmConvertTimeTo(*(_QWORD *)(a1 + 8), 0xF4240uLL);
  *(_QWORD *)(a2 + 16) = PpmConvertTimeTo(*(_QWORD *)(a1 + 16), 0xF4240uLL);
  *(_QWORD *)(a2 + 24) = PpmConvertTimeTo(*(_QWORD *)(a1 + 24), 0xF4240uLL);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 48);
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 64);
  *(_OWORD *)(a2 + 68) = *(_OWORD *)(a1 + 68);
  *(_OWORD *)(a2 + 84) = *(_OWORD *)(a1 + 84);
  *(_QWORD *)(a2 + 100) = *(_QWORD *)(a1 + 100);
  *(_DWORD *)(a2 + 108) = *(_DWORD *)(a1 + 108);
  *(_QWORD *)(a2 + 112) = PpmConvertTimeTo(*(_QWORD *)(a1 + 120), 0xF4240uLL);
  *(_OWORD *)(a2 + 120) = *(_OWORD *)(a1 + 128);
  *(_DWORD *)(a2 + 136) = *(_DWORD *)(a1 + 144);
  PopIdleWakeConvertIntervalBucketsTo(5LL, a1 + 152, a2 + 144, 1000000LL);
  *(_QWORD *)(a2 + 184) = PpmConvertTimeTo(*(_QWORD *)(a1 + 192), 0xF4240uLL);
  *(_OWORD *)(a2 + 192) = *(_OWORD *)(a1 + 200);
  *(_DWORD *)(a2 + 208) = *(_DWORD *)(a1 + 216);
  PopIdleWakeConvertIntervalBucketsTo(5LL, a1 + 224, a2 + 216, 1000000LL);
  *(_QWORD *)(a2 + 256) = PpmConvertTimeTo(*(_QWORD *)(a1 + 264), 0xF4240uLL);
  *(_OWORD *)(a2 + 264) = *(_OWORD *)(a1 + 272);
  *(_DWORD *)(a2 + 280) = *(_DWORD *)(a1 + 288);
  PopIdleWakeConvertIntervalBucketsTo(5LL, a1 + 296, a2 + 288, 1000000LL);
  *(_QWORD *)(a2 + 328) = PpmConvertTimeTo(*(_QWORD *)(a1 + 336), 0xF4240uLL);
  *(_QWORD *)(a2 + 336) = *(_QWORD *)(a1 + 344);
  *(_DWORD *)(a2 + 344) = *(_DWORD *)(a1 + 352);
  return PopIdleWakeConvertIntervalBucketsTo(3LL, a1 + 360, a2 + 352, 1000000LL);
}
