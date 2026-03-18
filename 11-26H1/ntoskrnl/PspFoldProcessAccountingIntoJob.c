/*
 * XREFs of PspFoldProcessAccountingIntoJob @ 0x14095224C
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x140959638 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     PsAddProcessEnergyValues @ 0x14041D0E0 (PsAddProcessEnergyValues.c)
 *     PoEnergyEstimationEnabled @ 0x14047C5D0 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspUpdateJobPeakProcessMemory @ 0x1409523E0 (PspUpdateJobPeakProcessMemory.c)
 *     PsQueryProcessEnergyValues @ 0x140952980 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall PspFoldProcessAccountingIntoJob(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __m128i v10; // xmm0
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 result; // rax
  _BYTE v14[448]; // [rsp+20h] [rbp-1D8h] BYREF

  memset_0(v14, 0, 0x1B8uLL);
  v6 = *a3;
  *(_QWORD *)(a1 + 1256) += a3[2];
  v7 = a3[1];
  *(_QWORD *)(a1 + 176) += a3[3];
  *(_QWORD *)(a1 + 168) += v6;
  *(_QWORD *)(a1 + 192) += v6;
  v8 = 73LL;
  v9 = a3[4];
  *(_QWORD *)(a1 + 160) += v7;
  *(_QWORD *)(a1 + 184) += v7;
  *(_QWORD *)(a1 + 200) += v9;
  do
  {
    *(_QWORD *)(v8 * 8 + a1) += a3[v8 - 68];
    ++v8;
  }
  while ( v8 < 79 );
  v10 = _mm_loadu_si128((const __m128i *)(a1 + 1816));
  *(_DWORD *)(a1 + 208) += *(_DWORD *)(a2 + 1028);
  *(__m128i *)(a1 + 1816) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a3 + 11)), v10);
  v11 = *(_QWORD **)(a2 + 1592);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 632) += *v11;
    *(_QWORD *)(a1 + 640) += v11[1];
    *(_QWORD *)(a1 + 648) += v11[2];
    *(_QWORD *)(a1 + 656) += v11[3];
    *(_QWORD *)(a1 + 664) += v11[4];
  }
  v12 = *(_QWORD **)(a2 + 2032);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 672) += *v12;
    *(_QWORD *)(a1 + 680) += *(_QWORD *)(*(_QWORD *)(a2 + 2032) + 8LL);
  }
  PspUpdateJobPeakProcessMemory(a1, *(_QWORD *)(a2 + 992));
  result = PoEnergyEstimationEnabled();
  if ( (_BYTE)result )
  {
    PsQueryProcessEnergyValues(a2, v14);
    return PsAddProcessEnergyValues(*(_QWORD **)(a1 + 1560), (__int64)v14);
  }
  return result;
}
