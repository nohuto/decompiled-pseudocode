/*
 * XREFs of PopEtEnergyValuesDeltaCalculate @ 0x1409CCE40
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x1409CCC6C (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     RtlStateDurationDelta @ 0x140474510 (RtlStateDurationDelta.c)
 */

__int64 __fastcall PopEtEnergyValuesDeltaCalculate(__int64 a1, _QWORD *a2, _QWORD *a3, int *a4)
{
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  char *v7; // r14
  int v8; // esi
  __int64 v10; // rcx
  unsigned int *v11; // rdx
  char *v12; // r15
  __int64 v13; // rdx
  unsigned int *v14; // rdx
  __int64 v15; // rbp
  __int64 result; // rax
  __int64 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // rdi
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx

  v5 = a2;
  a3[8] = a2[8] - *(_QWORD *)(a1 + 64);
  v6 = 3LL;
  v7 = (char *)a2 - a1;
  a3[9] = a2[9] - *(_QWORD *)(a1 + 72);
  v8 = 1;
  a3[10] = a2[10] - *(_QWORD *)(a1 + 80);
  a3[11] = a2[11] - *(_QWORD *)(a1 + 88);
  a3[12] = a2[12] - *(_QWORD *)(a1 + 96);
  v10 = a2[54];
  v11 = (unsigned int *)(a1 + 104);
  a3[54] = v10 - *(_QWORD *)(a1 + 432);
  v12 = (char *)a3 - a1;
  do
  {
    RtlStateDurationDelta((__int64)v11 + (_QWORD)v12, v11, (unsigned int *)((char *)v11 + (_QWORD)v7));
    v11 = (unsigned int *)(v13 + 8);
    --v6;
  }
  while ( v6 );
  v14 = (unsigned int *)(a1 + 384);
  v15 = 5LL;
  do
  {
    result = RtlStateDurationDelta((__int64)&v12[(_QWORD)v14], v14, (unsigned int *)&v7[(_QWORD)v14]);
    v14 = (unsigned int *)(v18 + 8);
    --v15;
  }
  while ( v15 );
  v19 = 4LL;
  *(_DWORD *)(v17 + 128) = *((_DWORD *)v5 + 32) - *(_DWORD *)(a1 + 128);
  v20 = 0LL;
  *(_DWORD *)(v17 + 132) = *((_DWORD *)v5 + 33) - *(_DWORD *)(a1 + 132);
  *(_DWORD *)(v17 + 136) = *((_DWORD *)v5 + 34) - *(_DWORD *)(a1 + 136);
  *(_DWORD *)(v17 + 424) = *((_DWORD *)v5 + 106) - *(_DWORD *)(a1 + 424);
  v21 = *((_DWORD *)v5 + 107) - *(_DWORD *)(a1 + 428);
  v22 = a1 - (_QWORD)v5;
  *(_DWORD *)(v17 + 428) = v21;
  v23 = v17 - (_QWORD)v5;
  *(_OWORD *)(v17 + 272) = *((_OWORD *)v5 + 17);
  *(_OWORD *)(v17 + 288) = *((_OWORD *)v5 + 18);
  *(_OWORD *)(v17 + 304) = *((_OWORD *)v5 + 19);
  *(_OWORD *)(v17 + 320) = *((_OWORD *)v5 + 20);
  *(_OWORD *)(v17 + 336) = *((_OWORD *)v5 + 21);
  *(_OWORD *)(v17 + 352) = *((_OWORD *)v5 + 22);
  *(_OWORD *)(v17 + 368) = *((_OWORD *)v5 + 23);
  do
  {
    v24 = 2LL;
    do
    {
      v25 = *v5 - *(_QWORD *)((char *)v5 + v22);
      v26 = v25 + v20;
      *(_QWORD *)((char *)v5 + v23) = v25;
      v27 = v5[18] - *(_QWORD *)((char *)v5 + v22 + 144);
      *(_QWORD *)((char *)v5 + v23 + 144) = v27;
      v20 = v27 + v26;
      *(_QWORD *)((char *)v5 + v23 + 208) = v5[26] - *(_QWORD *)((char *)v5 + v22 + 208);
      ++v5;
      --v24;
    }
    while ( v24 );
    --v19;
  }
  while ( v19 );
  if ( v20
    || *(_QWORD *)(v17 + 64)
    || *(_QWORD *)(v17 + 72)
    || *(_QWORD *)(v17 + 80)
    || *(_QWORD *)(v17 + 432)
    || (*(_DWORD *)(v17 + 108) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(v17 + 116) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(v17 + 124) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(v17 + 388) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(v17 + 396) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(v17 + 404) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(v17 + 412) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(v17 + 420) & 0x7FFFFFFF) != 0
    || *(_DWORD *)(v17 + 128)
    || *(_DWORD *)(v17 + 132)
    || *(_DWORD *)(v17 + 136) )
  {
    v8 = 0;
  }
  *a4 = v8;
  return result;
}
