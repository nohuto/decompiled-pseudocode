/*
 * XREFs of PpmWmiGetAllData @ 0x140A8C898
 * Callers:
 *     PpmWmiDispatch @ 0x140A8C7C0 (PpmWmiDispatch.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PpmPerfGetCurrentState @ 0x14047CB64 (PpmPerfGetCurrentState.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall PpmWmiGetAllData(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, int *a5, char a6)
{
  __int64 v7; // rdx
  unsigned int v9; // ebx
  __int64 v11; // r9
  char v12; // r12
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned int v18; // ecx
  int v19; // edx
  int v20; // ebp
  int v21; // ebx
  __int64 result; // rax
  unsigned int *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r9
  unsigned int v30; // eax
  __int64 v31; // r8
  _DWORD *v32; // rbx
  __int64 v33; // r10

  v7 = PPM_IDLESTATES_DATA_GUID;
  v9 = a3;
  v11 = PPM_IDLESTATES_DATA_GUID - *a2;
  if ( PPM_IDLESTATES_DATA_GUID == *a2 )
    v11 = 0xE710D47A1ACF1686uLL - a2[1];
  if ( v11 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F10070.1136, PPM_IDLESTATES_DATA_GUID, a3, 0LL);
    v7 = PPM_IDLESTATES_DATA_GUID;
  }
  v13 = *a2;
  v14 = a1[48];
  v15 = PPM_PERFSTATES_DATA_GUID - *a2;
  if ( PPM_PERFSTATES_DATA_GUID == *a2 )
    v15 = 0x26018D33012BAAB4LL - a2[1];
  if ( v15 || !v14 )
  {
    v16 = v7 - v13;
    if ( !v16 )
      v16 = 0xE710D47A1ACF1686uLL - a2[1];
    if ( v16 || !*a1 )
    {
      v17 = PPM_PERFMON_PERFSTATE_GUID - v13;
      if ( PPM_PERFMON_PERFSTATE_GUID == v13 )
        v17 = 0x9E75876A060BA1B0uLL - a2[1];
      if ( v17 || !v14 )
      {
        v21 = -1073741808;
        v20 = 0;
        goto LABEL_20;
      }
      v18 = 12;
    }
    else
    {
      v18 = 32 * *(_DWORD *)(*a1 + 40LL) + 56;
    }
  }
  else
  {
    v18 = 80;
  }
  v19 = a6 != 0 ? 72 : 64;
  v20 = v19 + v18;
  if ( v9 >= v19 + v18 )
  {
    *(_DWORD *)a4 = v20;
    v23 = (unsigned int *)((a6 != 0 ? 72LL : 64LL) + a4);
    if ( a6 )
    {
      v24 = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(a4 + 44) |= 0x10u;
      *(_QWORD *)(a4 + 16) = v24;
      *(_DWORD *)(a4 + 52) = 1;
      *(_DWORD *)(a4 + 48) = v19;
    }
    else
    {
      *(_DWORD *)(a4 + 56) = v19;
    }
    *(_DWORD *)(a4 + 60) = v18;
    memset_0(v23, 0, v18);
    v25 = *a2;
    v26 = PPM_PERFSTATES_DATA_GUID - *a2;
    if ( PPM_PERFSTATES_DATA_GUID == *a2 )
      v26 = 0x26018D33012BAAB4LL - a2[1];
    if ( v26 || !v14 )
    {
      v27 = PPM_IDLESTATES_DATA_GUID - v25;
      if ( PPM_IDLESTATES_DATA_GUID == v25 )
        v27 = 0xE710D47A1ACF1686uLL - a2[1];
      if ( v27 || !*a1 )
      {
        v28 = PPM_PERFMON_PERFSTATE_GUID - *a2;
        if ( PPM_PERFMON_PERFSTATE_GUID == *a2 )
          v28 = 0x9E75876A060BA1B0uLL - a2[1];
        if ( !v28 && v14 )
          PpmPerfGetCurrentState((__int64)(a1 - 4360), v23, 0LL, v23 + 2, v23 + 1, 0LL);
      }
      else
      {
        v23[1] = *(_DWORD *)(*a1 + 40LL);
        v23[2] = *(_DWORD *)(*a1 + 24LL);
        v23[3] = *(_DWORD *)(*a1 + 32LL);
        *((_QWORD *)v23 + 2) = *(a1 - 4335);
        v29 = *a1;
        v30 = *(_DWORD *)(*a1 + 40LL);
        if ( v30 )
        {
          v31 = 0LL;
          v32 = v23 + 7;
          v33 = v30;
          do
          {
            v31 += 352LL;
            *(v32 - 1) = *(_DWORD *)(v31 + *a1 + 984) / 0xAu;
            *v32 = *(_DWORD *)(v31 + *a1 + 992);
            v32 += 8;
            *(v32 - 7) = *(_DWORD *)(v29 + 708);
            *((_BYTE *)v32 - 24) = *(_BYTE *)(v29 + 712);
            *((_BYTE *)v32 - 23) = *(_BYTE *)(v29 + 713);
            *((_BYTE *)v32 - 22) = *(_BYTE *)(v31 + *a1 + 1040);
            *(_QWORD *)(v32 - 5) = *(unsigned int *)(v31 + *a1 + 996);
            *(v32 - 3) = 1;
            --v33;
          }
          while ( v33 );
        }
      }
    }
    else
    {
      *v23 = 0;
      v23[1] = *(_DWORD *)(v14 + 456);
      *((_QWORD *)v23 + 1) = 0LL;
      *((_QWORD *)v23 + 2) = 0LL;
      *((_BYTE *)v23 + 28) = 100;
      *((_BYTE *)v23 + 29) = *(_BYTE *)(v14 + 497);
      v23[8] = HIDWORD(PpmCurrentProfile[89 * dword_140F106CC + 11]);
      *((_QWORD *)v23 + 5) = *(_QWORD *)(v14 + 32);
      v23[16] = 1;
    }
    goto LABEL_19;
  }
  if ( v9 >= 0x38 )
  {
    *(_DWORD *)(a4 + 48) = v20;
    v20 = 56;
    *(_DWORD *)(a4 + 44) = 32;
LABEL_19:
    v21 = 0;
    goto LABEL_20;
  }
  v21 = -1073741789;
LABEL_20:
  if ( v12 )
    PopReleaseRwLock((struct _KTHREAD *)&stru_140F10070.1136);
  result = (unsigned int)v21;
  if ( v21 < 0 )
    v20 = 0;
  *a5 = v20;
  return result;
}
