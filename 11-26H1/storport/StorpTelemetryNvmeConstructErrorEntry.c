/*
 * XREFs of StorpTelemetryNvmeConstructErrorEntry @ 0x1400BD6B4
 * Callers:
 *     StorpTelemetryCollectNvmeErrorData @ 0x1400BA2B8 (StorpTelemetryCollectNvmeErrorData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpTelemetryNvmeConstructErrorEntry(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4, __int64 a5)
{
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // edi
  signed __int64 UnbiasedInterruptTime; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax

  *(_DWORD *)(a5 + 88) = 0;
  *(_OWORD *)a5 = *(_OWORD *)a3;
  *(_OWORD *)(a5 + 16) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a5 + 32) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a5 + 48) = *(_OWORD *)(a3 + 48);
  *(_OWORD *)(a5 + 64) = *a4;
  v7 = (unsigned __int8)*(_DWORD *)a3;
  if ( v7 == 2 || v7 <= 0x19 && (v8 = 33554738, _bittest(&v8, v7)) )
  {
    *(_QWORD *)(a5 + 96) = *(_QWORD *)(a3 + 40);
    *(_DWORD *)(a5 + 80) = (unsigned __int16)*(_DWORD *)(a3 + 48);
  }
  v9 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 608) + 4LL) & 1) != 0 )
  {
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    if ( UnbiasedInterruptTime <= *(_QWORD *)(a1 + 64) || UnbiasedInterruptTime == *(_QWORD *)(a1 + 64) )
      v9 = 0;
    v11 = 84LL;
    v12 = a5;
  }
  else
  {
    v9 = 0;
    v11 = a5;
    v12 = 84LL;
  }
  *(_DWORD *)(v12 + v11) = v9;
  result = *(_QWORD *)(a2 + 608);
  *(_DWORD *)(a5 + 92) = *(_DWORD *)(result + 112);
  return result;
}
