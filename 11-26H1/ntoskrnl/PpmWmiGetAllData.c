/*
 * XREFs of PpmWmiGetAllData @ 0x140A91568
 * Callers:
 *     PpmWmiDispatch @ 0x140A91490 (PpmWmiDispatch.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PpmPerfGetCurrentState @ 0x1404764D4 (PpmPerfGetCurrentState.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmWmiGetAllData(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, int *a5, char a6)
{
  __int64 v6; // r10
  __int64 v8; // rdx
  unsigned int v10; // ebx
  __int64 v12; // r9
  char v13; // r12
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ecx
  int v20; // edx
  int v21; // ebp
  int v22; // ebx
  __int64 result; // rax
  unsigned int *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r9
  unsigned int v31; // eax
  __int64 v32; // r8
  _DWORD *v33; // rbx
  __int64 v34; // r10

  v6 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4;
  v8 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1;
  v10 = a3;
  v12 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 - *a2;
  if ( *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 == *a2 )
    v12 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4 - a2[1];
  if ( v12 )
  {
    v13 = 0;
  }
  else
  {
    v13 = 1;
    PopAcquireRwLockShared(
      (volatile signed __int64 *)&PpmIdlePolicyLock.Header.Lock,
      *(__int64 *)&PPM_IDLESTATES_DATA_GUID.Data1,
      a3,
      0LL);
    v6 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4;
    v8 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1;
  }
  v14 = *a2;
  v15 = a1[48];
  v16 = *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 - *a2;
  if ( *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 == *a2 )
    v16 = *(_QWORD *)PPM_PERFSTATES_DATA_GUID.Data4 - a2[1];
  if ( v16 || !v15 )
  {
    v17 = v8 - v14;
    if ( !v17 )
      v17 = v6 - a2[1];
    if ( v17 || !*a1 )
    {
      v18 = *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 - v14;
      if ( *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 == v14 )
        v18 = *(_QWORD *)PPM_PERFMON_PERFSTATE_GUID.Data4 - a2[1];
      if ( v18 || !v15 )
      {
        v22 = -1073741808;
        v21 = 0;
        goto LABEL_20;
      }
      v19 = 12;
    }
    else
    {
      v19 = 32 * *(_DWORD *)(*a1 + 40LL) + 56;
    }
  }
  else
  {
    v19 = 80;
  }
  v20 = a6 != 0 ? 72 : 64;
  v21 = v20 + v19;
  if ( v10 >= v20 + v19 )
  {
    *(_DWORD *)a4 = v21;
    v24 = (unsigned int *)((a6 != 0 ? 72LL : 64LL) + a4);
    if ( a6 )
    {
      v25 = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(a4 + 44) |= 0x10u;
      *(_QWORD *)(a4 + 16) = v25;
      *(_DWORD *)(a4 + 52) = 1;
      *(_DWORD *)(a4 + 48) = v20;
    }
    else
    {
      *(_DWORD *)(a4 + 56) = v20;
    }
    *(_DWORD *)(a4 + 60) = v19;
    memset_0(v24, 0, v19);
    v26 = *a2;
    v27 = *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 - *a2;
    if ( *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 == *a2 )
      v27 = *(_QWORD *)PPM_PERFSTATES_DATA_GUID.Data4 - a2[1];
    if ( v27 || !v15 )
    {
      v28 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 - v26;
      if ( *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 == v26 )
        v28 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4 - a2[1];
      if ( v28 || !*a1 )
      {
        v29 = *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 - *a2;
        if ( *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 == *a2 )
          v29 = *(_QWORD *)PPM_PERFMON_PERFSTATE_GUID.Data4 - a2[1];
        if ( !v29 && v15 )
          PpmPerfGetCurrentState((__int64)(a1 - 4360), v24, 0LL, v24 + 2, v24 + 1, 0LL);
      }
      else
      {
        v24[1] = *(_DWORD *)(*a1 + 40LL);
        v24[2] = *(_DWORD *)(*a1 + 24LL);
        v24[3] = *(_DWORD *)(*a1 + 32LL);
        *((_QWORD *)v24 + 2) = *(a1 - 4335);
        v30 = *a1;
        v31 = *(_DWORD *)(*a1 + 40LL);
        if ( v31 )
        {
          v32 = 0LL;
          v33 = v24 + 7;
          v34 = v31;
          do
          {
            v32 += 352LL;
            *(v33 - 1) = *(_DWORD *)(v32 + *a1 + 984) / 0xAu;
            *v33 = *(_DWORD *)(v32 + *a1 + 992);
            v33 += 8;
            *(v33 - 7) = *(_DWORD *)(v30 + 708);
            *((_BYTE *)v33 - 24) = *(_BYTE *)(v30 + 712);
            *((_BYTE *)v33 - 23) = *(_BYTE *)(v30 + 713);
            *((_BYTE *)v33 - 22) = *(_BYTE *)(v32 + *a1 + 1040);
            *(_QWORD *)(v33 - 5) = *(unsigned int *)(v32 + *a1 + 996);
            *(v33 - 3) = 1;
            --v34;
          }
          while ( v34 );
        }
      }
    }
    else
    {
      *v24 = 0;
      v24[1] = *(_DWORD *)(v15 + 456);
      *((_QWORD *)v24 + 1) = 0LL;
      *((_QWORD *)v24 + 2) = 0LL;
      *((_BYTE *)v24 + 28) = 100;
      *((_BYTE *)v24 + 29) = *(_BYTE *)(v15 + 497);
      v24[8] = *((_DWORD *)PpmCurrentProfile + 178 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 23);
      *((_QWORD *)v24 + 5) = *(_QWORD *)(v15 + 32);
      v24[16] = 1;
    }
    goto LABEL_19;
  }
  if ( v10 >= 0x38 )
  {
    *(_DWORD *)(a4 + 48) = v21;
    v21 = 56;
    *(_DWORD *)(a4 + 44) = 32;
LABEL_19:
    v22 = 0;
    goto LABEL_20;
  }
  v22 = -1073741789;
LABEL_20:
  if ( v13 )
    PopReleaseRwLock(&PpmIdlePolicyLock);
  result = (unsigned int)v22;
  if ( v22 < 0 )
    v21 = 0;
  *a5 = v21;
  return result;
}
