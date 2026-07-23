/*
 * XREFs of PopEtEnergyTrackerUpdateAggregate @ 0x1409CCC6C
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1409CC994 (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     PsAddProcessEnergyValues @ 0x140414930 (PsAddProcessEnergyValues.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopEtEnergyValuesDeltaCalculate @ 0x1409CCE40 (PopEtEnergyValuesDeltaCalculate.c)
 *     PopEtAggregateGet @ 0x1409CD378 (PopEtAggregateGet.c)
 */

__int64 __fastcall PopEtEnergyTrackerUpdateAggregate(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  _DWORD *v9; // rbx
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  unsigned __int64 v13; // rdx
  unsigned int v14; // r9d
  int v15; // [rsp+20h] [rbp-208h] BYREF
  __int64 v16; // [rsp+28h] [rbp-200h] BYREF
  _BYTE v17[448]; // [rsp+30h] [rbp-1F8h] BYREF

  v16 = 0LL;
  memset_0(v17, 0, 0x1B8uLL);
  v15 = 0;
  result = PopEtEnergyValuesDeltaCalculate(a2 + 48, a3, v17, &v15);
  if ( !v15 )
  {
    PopEtAggregateGet(a1, a2 + 16, &v16);
    v9 = (_DWORD *)v16;
    PsAddProcessEnergyValues((_QWORD *)(v16 + 48), (__int64)v17);
    v10 = *(_DWORD *)(a2 + 492);
    if ( v10 >= 0 )
    {
      *(_DWORD *)(a2 + 492) = v10 | 0x80000000;
      ++v9[125];
    }
    ++v9[122];
    v11 = *(_DWORD *)(a2 + 492);
    *(_DWORD *)(a2 + 492) = v11 ^ (v11 ^ (v11 + 1)) & 0x7FFFFFFF;
    if ( ((v11 + 1) & 0x7FFFFFFF) == 1 )
      ++v9[126];
    switch ( a4 )
    {
      case 2:
        ++v9[123];
        break;
      case 3:
        ++v9[124];
        break;
      case 4:
        ++v9[127];
        break;
    }
    if ( (*(_DWORD *)(a3 + 108) & 0x7FFFFFFF) != 0 )
      v9[129] |= 1u;
    if ( (*(_DWORD *)(a3 + 116) & 0x7FFFFFFF) != 0 )
      v9[129] |= 2u;
    v12 = *(_DWORD *)(a1 + 604);
    v13 = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
    v14 = v13 - v12;
    if ( (int)v13 - *(_DWORD *)(a2 + 496) <= (unsigned int)(v13 - v12) )
      v12 = *(_DWORD *)(a2 + 496);
    result = (unsigned int)((MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL) - v12;
    v9[128] += result;
    if ( v9[128] > v14 )
      v9[128] = v14;
    *(_DWORD *)(a2 + 496) = v13;
  }
  return result;
}
