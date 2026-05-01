/*
 * XREFs of ?RmpCpuSetManagerPopulateScoresFromCpuSetInformation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x180085EF0
 * Callers:
 *     ?RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_KAFFINITY_EX@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x180085D80 (-RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU.c)
 * Callees:
 *     ?RmpCpuSetManagerGetNextCandidateIndex@@YAEPEAK_KE@Z @ 0x180085600 (-RmpCpuSetManagerGetNextCandidateIndex@@YAEPEAK_KE@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpCpuSetManagerPopulateScoresFromCpuSetInformation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_SCORE *a2,
        int a3,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a4,
        struct _SYSTEM_CPU_SET_INFORMATION *a5,
        unsigned int a6)
{
  unsigned int v10; // r10d
  __int64 v11; // rdx
  unsigned __int64 v12; // r11
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rbx
  char v19; // r9
  __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // r10d
  int v26; // r11d
  unsigned int v27[4]; // [rsp+20h] [rbp-148h] BYREF
  _QWORD v28[32]; // [rsp+30h] [rbp-138h] BYREF

  v27[0] = 0;
  memset_0(v28, 0, sizeof(v28));
  v10 = 0;
  v11 = 0LL;
  if ( a6 )
  {
    while ( 1 )
    {
      if ( *(CPU_SET_INFORMATION_TYPE *)((char *)&a5->Type + v11) == CpuSetInformation )
      {
        v12 = *((unsigned __int8 *)&a5->CpuSet.Id + v11);
        v13 = (*(DWORD *)((char *)&a5->CpuSet.Id + v11) - 256) >> 16;
        v27[0] = *((unsigned __int8 *)&a5->CpuSet.Id + v11);
        v14 = *((_QWORD *)a1 + v13 + 43);
        if ( _bittest64(&v14, v12) )
        {
          v15 = 2LL * v10;
          v28[v13] |= 1LL << v12;
          v16 = *((_QWORD *)a2 + 2 * v10 + 1) & 0xFFFFFFFFFFFFFE01uLL;
          *((_DWORD *)a2 + 2 * v15) = v13;
          *((_DWORD *)a2 + 2 * v15 + 1) = v12;
          v17 = (*((_BYTE *)a4 + 268) & 4) != 0 ? v16 | (2LL * *(&a5->CpuSet.SchedulingClass + v11)) : v16;
          ++v10;
          *((_QWORD *)a2 + v15 + 1) = v17;
          if ( v10 == a3 )
            break;
        }
      }
      v11 = (unsigned int)(*(DWORD *)((char *)&a5->Size + v11) + v11);
      if ( (unsigned int)v11 >= a6 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( v10 != a3 )
    {
      v18 = v28;
      v19 = (*((_DWORD *)a4 + 67) & 2) != 0;
      v20 = a1 - (struct _RM_CPU_SET_MANAGER *)v28;
      do
      {
        v21 = ~*v18 & *(_QWORD *)((char *)v18 + v20 + 344);
        while ( RmpCpuSetManagerGetNextCandidateIndex(v27, v21, v19) )
        {
          v22 = v27[0];
          v21 = v24 & ~(1LL << SLOBYTE(v27[0]));
          v23 = 2LL * v25;
          *((_DWORD *)a2 + 2 * v23) = v26;
          *((_DWORD *)a2 + 2 * v23 + 1) = v22;
        }
        ++v18;
      }
      while ( (unsigned int)(v26 + 1) < 0x20 );
    }
  }
}
