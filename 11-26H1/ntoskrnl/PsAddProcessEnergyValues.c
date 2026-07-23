/*
 * XREFs of PsAddProcessEnergyValues @ 0x140414930
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x140775FF8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PopEtEnergyTrackerUpdateAggregate @ 0x1409CCC6C (PopEtEnergyTrackerUpdateAggregate.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1409CDB8C (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1409CDD60 (PspQueryProcessAccountingInformationCallback.c)
 * Callees:
 *     RtlTimelineBitmapMerge @ 0x140414B40 (RtlTimelineBitmapMerge.c)
 */

__int64 __fastcall PsAddProcessEnergyValues(_QWORD *a1, __int64 a2)
{
  _DWORD *v2; // r8
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned int v7; // eax
  unsigned int v8; // ecx
  _DWORD *v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // ecx
  unsigned int v12; // eax
  int v13; // r8d
  int *v14; // rdx
  int v15; // ecx
  int v16; // eax
  int *v17; // rdx
  int v18; // r8d
  int v19; // eax
  int *v20; // rdx
  int v21; // r8d
  int v22; // eax
  int *v23; // rdx
  int v24; // r8d
  int v25; // eax
  int *v26; // rdx
  int v27; // r8d
  __int64 v28; // rdi
  _QWORD *v29; // rbx
  __int64 v30; // rsi
  _QWORD *v31; // r10
  __int64 v32; // r11
  __int64 v33; // r11
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 result; // rax

  v2 = (_DWORD *)a1 + 27;
  a1[8] += *(_QWORD *)(a2 + 64);
  a1[9] += *(_QWORD *)(a2 + 72);
  v5 = 3LL;
  a1[10] += *(_QWORD *)(a2 + 80);
  a1[11] += *(_QWORD *)(a2 + 88);
  a1[12] += *(_QWORD *)(a2 + 96);
  a1[54] += *(_QWORD *)(a2 + 432);
  v6 = a2 - (_QWORD)a1;
  do
  {
    v7 = *(v2 - 1);
    *v2 ^= (*v2 ^ (*v2 + *(_DWORD *)((char *)v2 + v6))) & 0x7FFFFFFF;
    v8 = *(_DWORD *)((char *)v2 + v6 - 4);
    v2 += 2;
    if ( v7 <= v8 )
      v7 = v8;
    *(v2 - 3) = v7;
    --v5;
  }
  while ( v5 );
  v9 = (_DWORD *)a1 + 97;
  v10 = 5LL;
  do
  {
    *v9 ^= (*v9 ^ (*v9 + *(_DWORD *)((char *)v9 + v6))) & 0x7FFFFFFF;
    v11 = *(_DWORD *)((char *)v9 + v6 - 4);
    v12 = *(v9 - 1);
    v9 += 2;
    if ( v12 <= v11 )
      v12 = v11;
    *(v9 - 3) = v12;
    --v10;
  }
  while ( v10 );
  v13 = *(_DWORD *)(a2 + 128);
  v14 = (int *)(a1 + 16);
  v15 = -1;
  if ( v13 == -1 || (v16 = *v14 + v13, ~v13 < (unsigned int)*v14) )
    v16 = -1;
  *v14 = v16;
  v17 = (int *)a1 + 33;
  v18 = *(_DWORD *)(a2 + 132);
  if ( v18 == -1 || (v19 = *v17 + v18, ~v18 < (unsigned int)*v17) )
    v19 = -1;
  *v17 = v19;
  v20 = (int *)(a1 + 17);
  v21 = *(_DWORD *)(a2 + 136);
  if ( v21 == -1 || (v22 = *v20 + v21, ~v21 < (unsigned int)*v20) )
    v22 = -1;
  *v20 = v22;
  v23 = (int *)(a1 + 53);
  v24 = *(_DWORD *)(a2 + 424);
  if ( v24 == -1 || (v25 = *v23 + v24, ~v24 < (unsigned int)*v23) )
    v25 = -1;
  *v23 = v25;
  v26 = (int *)a1 + 107;
  v27 = *(_DWORD *)(a2 + 428);
  if ( v27 != -1 && ~v27 >= (unsigned int)*v26 )
    v15 = *v26 + v27;
  *v26 = v15;
  v28 = a2 - (_QWORD)a1;
  v29 = a1 + 34;
  v30 = 14LL;
  do
  {
    RtlTimelineBitmapMerge(v29, (char *)v29 + v28);
    ++v29;
    --v30;
  }
  while ( v30 );
  v33 = v32 - (_QWORD)v31;
  v34 = 4LL;
  do
  {
    v35 = 2LL;
    do
    {
      *v31 += *(_QWORD *)((char *)v31 + v33);
      v31[18] += *(_QWORD *)((char *)v31 + v33 + 144);
      result = *(_QWORD *)((char *)v31 + v33 + 208);
      v31[26] += result;
      ++v31;
      --v35;
    }
    while ( v35 );
    --v34;
  }
  while ( v34 );
  return result;
}
