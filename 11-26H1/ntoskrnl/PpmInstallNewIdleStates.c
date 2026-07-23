/*
 * XREFs of PpmInstallNewIdleStates @ 0x140605810
 * Callers:
 *     PpmIdleInstallDefaultStates @ 0x140604C10 (PpmIdleInstallDefaultStates.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     PpmResetIdlePolicy @ 0x1402F31E0 (PpmResetIdlePolicy.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     PpmDeepestHardwareIdleState @ 0x1404E054C (PpmDeepestHardwareIdleState.c)
 *     PpmIdleIsStateDisabled @ 0x1404E61BC (PpmIdleIsStateDisabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmInstallNewIdleStates(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rsi
  unsigned int v10; // r14d
  _DWORD *v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // r13
  __int64 Pool2; // rax
  __int64 v16; // rdi
  unsigned int v17; // r13d
  unsigned int *v18; // r12
  _BYTE *v19; // r14
  __int64 v20; // rbp
  __int64 v21; // r15
  char *v22; // rdi
  __int64 v23; // r9
  unsigned __int64 v24; // rcx
  __int64 v25; // r14
  bool v26; // zf
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _DWORD *v30; // rbp
  unsigned int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rcx
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // rcx
  char v39; // [rsp+20h] [rbp-198h]
  unsigned int v40; // [rsp+30h] [rbp-188h]
  unsigned int v41; // [rsp+34h] [rbp-184h]
  __int64 v44; // [rsp+48h] [rbp-170h]
  __int64 *v45; // [rsp+50h] [rbp-168h]
  __int64 v46; // [rsp+60h] [rbp-158h] BYREF
  _BYTE v47[264]; // [rsp+68h] [rbp-150h] BYREF

  memset_0(v47, 0, 0x100uLL);
  v6 = 0;
  v7 = a1 + 34880;
  v8 = 0LL;
  v45 = (__int64 *)(a1 + 34880);
  if ( a3 != 1 || !*(_QWORD *)v7 )
  {
    if ( *(_QWORD *)v7 )
      v39 = *(_BYTE *)(*(_QWORD *)v7 + 1LL);
    else
      v39 = 0;
    v9 = *(unsigned int *)(a2 + 96);
    if ( (_DWORD)v9 )
    {
      v10 = 0;
      v11 = (_DWORD *)(a2 + 104);
      v12 = *(unsigned int *)(a2 + 96);
      do
      {
        v13 = v10 + 1;
        if ( (*v11 & 0x100) != 0 )
          v13 = v10;
        v11 += 8;
        v10 = v13;
        --v12;
      }
      while ( v12 );
      v14 = (unsigned int)(352 * (v9 + 3));
      v41 = v14 + 24 * v13;
      v40 = v41 + ((_DWORD)v9 << 10) + 40;
      Pool2 = ExAllocatePool2(0x40uLL);
      v44 = Pool2;
      v16 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 44) = a3;
        *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(a2 + 56);
        *(_BYTE *)Pool2 = *(_BYTE *)(a2 + 19);
        *(_BYTE *)(Pool2 + 2) = *(_BYTE *)(a2 + 16);
        *(_BYTE *)(Pool2 + 16) = *(_BYTE *)(a2 + 18);
        *(_DWORD *)(Pool2 + 60) = 0;
        *(_DWORD *)(Pool2 + 40) = v9;
        *(_QWORD *)(Pool2 + 616) = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(Pool2 + 624) = *(_QWORD *)(a2 + 32);
        *(_QWORD *)(Pool2 + 632) = *(_QWORD *)(a2 + 40);
        *(_QWORD *)(Pool2 + 608) = *(_QWORD *)(a2 + 64);
        *(_QWORD *)(Pool2 + 600) = *(_QWORD *)(a2 + 48);
        *(_QWORD *)(Pool2 + 640) = *(_QWORD *)(a2 + 72);
        *(_QWORD *)(Pool2 + 648) = *(_QWORD *)(a2 + 80);
        *(_QWORD *)(Pool2 + 656) = *(_QWORD *)(a2 + 88);
        *(_QWORD *)(Pool2 + 664) = *(_QWORD *)(a2 + 8);
        *(_QWORD *)(Pool2 + 1048) = Pool2 + 1040;
        *(_DWORD *)(Pool2 + 1032) = 1;
        if ( v10 )
        {
          *(_DWORD *)(Pool2 + 1000) = v10;
          *(_QWORD *)(Pool2 + 1008) = Pool2 + v14;
          v8 = Pool2 + v14 + 24LL * v10;
        }
        *(_QWORD *)(Pool2 + 72) = 2097184LL;
        memset_0((void *)(Pool2 + 80), 0, 0x100uLL);
        v17 = 0;
        v18 = (unsigned int *)(v8 + 4);
        v19 = (_BYTE *)(v16 + 1393);
        v20 = a2 + 104;
        v21 = v16 + ((v40 + 4 * (_DWORD)v9 + 15) & 0xFFFFFFF8);
        v22 = (char *)(v16 + 1064);
        do
        {
          *(_OWORD *)(v19 - 73) = *(_OWORD *)(v20 + 16);
          *(_QWORD *)(v19 - 337) = 2097153LL;
          memset_0(v22, 0, 0x100uLL);
          *(v19 - 1) = (*(_DWORD *)v20 >> 3) & 0xF;
          v19[1] = *(_BYTE *)v20 & 1;
          v19[2] = (*(_DWORD *)v20 & 4) != 0;
          v19[3] = (*(_DWORD *)v20 & 2) != 0;
          if ( *(int *)v20 < 0 )
          {
            *(_DWORD *)(v19 - 45) = 1;
            *v19 = 1;
          }
          v19[4] = (*(_DWORD *)v20 & 0x80) != 0;
          v19[5] = BYTE1(*(_DWORD *)v20) & 1;
          v19[6] = (*(_DWORD *)v20 & 0x40000000) != 0;
          *(_DWORD *)(v19 - 57) = *(_DWORD *)(v20 + 4);
          *(_DWORD *)(v19 - 49) = *(_DWORD *)(v20 + 12);
          *(_DWORD *)(v19 - 53) = *(_DWORD *)(v20 + 8);
          v19[7] = (*(_DWORD *)v20 & 0x200) != 0;
          *(_QWORD *)(v19 - 25) = v19 - 33;
          *(_QWORD *)(v19 - 33) = v19 - 33;
          if ( PpmIdleIsStateDisabled(1, v17) )
            *(_DWORD *)(v19 - 41) = 0x80000000;
          v24 = stru_140E67200.Padding[4];
          if ( stru_140E67200.Padding[4] )
          {
            *(_DWORD *)(v19 - 13) = *(_DWORD *)(stru_140E67200.Padding[4] + 4);
            *(_QWORD *)(v19 - 9) = v21;
            v21 += (unsigned __int64)*(unsigned int *)(v24 + 4) << 6;
          }
          if ( v18 != (unsigned int *)4 && (*(_DWORD *)v20 & 0x100) == 0 )
          {
            v18 -= 6;
            *((_BYTE *)v18 - 3) = v23;
            *v18 = v17;
          }
          v17 += v23;
          v22 += 352;
          v19 += 352;
          v20 += 32LL;
        }
        while ( v17 < (unsigned int)v9 );
        v25 = v44 + v41;
        v26 = stru_140E67200.Padding[4] == 0;
        *(_QWORD *)(v44 + 984) = v44 + v40;
        *(_DWORD *)v25 = v9;
        if ( !v26 )
        {
          v27 = (__int64 *)(v25 + 224);
          v28 = v9;
          v29 = v44 + 1352;
          do
          {
            *v27 = v29;
            v29 += 352LL;
            v27 += 128;
            v28 -= v23;
          }
          while ( v28 );
        }
        KxAcquireSpinLock(&PpmIdleVetoLock);
        v30 = (_DWORD *)*v45;
        *v45 = v44;
        KxReleaseSpinLock(&PpmIdleVetoLock);
        if ( v39 )
          *(_DWORD *)(v44 + 36) = v30[9];
        if ( !v30 || (v31 = v30[6], v31 >= (unsigned int)v9) )
          v31 = 0;
        *(_DWORD *)(v44 + 24) = v31;
        *(_BYTE *)(v44 + 1) = v39;
        v32 = v45[1];
        v45[1] = v25;
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 24);
          v34 = 0;
          for ( *(_QWORD *)(v25 + 24) = v33; v34 < *(_DWORD *)v32; *(_QWORD *)(v25 + 24) = v33 )
          {
            v35 = v34++;
            v33 += *(_QWORD *)((v35 << 10) + v32 + 40);
          }
          v36 = a1;
        }
        else
        {
          v36 = a1;
          *(_QWORD *)(v25 + 24) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 652LL);
        }
        PpmResetIdlePolicy(v45);
        if ( v32 )
          *(_DWORD *)(v25 + 8) = *(_DWORD *)(v32 + 8) + 1;
        v46 = 2097153LL;
        memset_0(v47, 0, 0x100uLL);
        KeAddProcessorAffinityEx((unsigned __int16 *)&v46, *(_DWORD *)(v36 + 36));
        LOBYTE(v37) = PpmDeepestHardwareIdleState(v44);
        guard_dispatch_icall_no_overrides(v37, &v46);
        if ( *(_DWORD *)(v44 + 44) != 1 && *(_BYTE *)v44 )
          PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
        if ( !v45[75] )
          v45[75] = ExAllocatePool2(0x40uLL);
        if ( v30 )
          ExFreePoolWithTag(v30, 0x694D5050u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v6;
}
