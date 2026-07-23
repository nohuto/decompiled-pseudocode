/*
 * XREFs of EtwpCovSampContextPruneModules @ 0x140A30B58
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x140A32D00 (EtwpCoverageSamplerQuery.c)
 *     EtwpCovSampContextGetModule @ 0x140A34168 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentThreadId @ 0x14045DC00 (PsGetCurrentThreadId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpCovSampModuleCleanup @ 0x140A32AA4 (EtwpCovSampModuleCleanup.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall EtwpCovSampContextPruneModules(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned __int64 result; // rax
  struct _KLOCK_ENTRIES *v4; // r9
  __int64 v5; // r12
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // r14
  void *v11; // rdx
  LegacyAutoBoost *v12; // r15
  __int64 *i; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  _QWORD *v16; // r8
  _OWORD *v17; // rcx
  _QWORD *v18; // r10
  struct _KLOCK_ENTRIES *v19; // r9
  __int128 *v20; // rax
  _QWORD *v21; // rdx
  _OWORD *v22; // r8
  __int64 v23; // r13
  struct _KTHREAD *v24; // rax
  AutoBoost *v25; // rax
  void *v26; // rdx
  AutoBoost *v27; // r15
  __int128 *v28; // r11
  __int128 *v29; // rax
  char *v30; // r10
  __int128 *v31; // r15
  int v32; // r9d
  char *j; // rcx
  _QWORD *v34; // r10
  int v35; // r9d
  _QWORD *k; // rcx
  __int128 *v37; // rax
  __int64 v38; // rdx
  __int128 **v39; // rcx
  __int128 **v40; // rcx
  __int64 v41; // rcx
  _QWORD *v42; // rbx
  __int64 v43; // [rsp+28h] [rbp-89h]
  __int128 v44; // [rsp+30h] [rbp-81h] BYREF
  __int128 v45; // [rsp+40h] [rbp-71h] BYREF
  _OWORD v46[8]; // [rsp+58h] [rbp-59h] BYREF

  v2 = *(_DWORD *)(a1 + 16) >> 1;
  v45 = 0LL;
  result = *(unsigned int *)(a1 + 1244);
  v44 = 0LL;
  if ( (unsigned int)result > v2 || *(_DWORD *)(a1 + 1636) > (signed int)v2 )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a1 + 1640),
                             (signed __int32)PsGetCurrentThreadId(),
                             0);
    if ( !(_DWORD)result )
    {
      v5 = 8LL;
      v6 = v46;
      v7 = 8LL;
      v8 = v46;
      do
      {
        v6[1] = v8;
        *v6 = v8++;
        v6 += 2;
        --v7;
      }
      while ( v7 );
      CurrentThread = KeGetCurrentThread();
      v10 = (volatile signed __int64 *)(a1 + 1176);
      --CurrentThread->KernelApcDisable;
      v12 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 1176, 0LL, 0LL, v4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1176), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 1176), 0, v12, (struct _KTHREAD *)(a1 + 1176));
      if ( v12 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v12, v11);
        else
          *((_BYTE *)v12 + 10) = 1;
      }
      for ( i = *(__int64 **)(a1 + 1224); i != (__int64 *)(a1 + 1224); i = (__int64 *)*i )
      {
        if ( *(i - 1) == 1 && !*((_DWORD *)i + 15) )
        {
          v14 = MEMORY[0xFFFFF78000000320] - *((_DWORD *)i + 16);
          if ( v14 < 0x100 )
            v15 = v14 >> 6;
          else
            v15 = ((v14 - 256) >> 8) + 4;
          v16 = i + 2;
          if ( v15 >= 8 )
            v15 = 7;
          v17 = &v46[v15];
          v18 = (_QWORD *)*((_QWORD *)v17 + 1);
          if ( (_OWORD *)*v18 != v17 )
LABEL_22:
            __fastfail(3u);
          *v16 = v17;
          i[3] = (__int64)v18;
          *v18 = v16;
          *((_QWORD *)v17 + 1) = v16;
        }
      }
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 1176));
      KeAbPostRelease(a1 + 1176);
      KeLeaveCriticalRegion();
      v20 = &v45;
      *((_QWORD *)&v45 + 1) = &v45;
      *(_QWORD *)&v45 = &v45;
      v21 = v46;
      v22 = v46;
      do
      {
        if ( (_OWORD *)*v21 != v22 )
        {
          *(_QWORD *)v20 = *v21;
          *(_QWORD *)(*v21 + 8LL) = *((_QWORD *)&v45 + 1);
          *((_QWORD *)&v45 + 1) = v21[1];
          **((_QWORD **)&v45 + 1) = &v45;
          v20 = (__int128 *)*((_QWORD *)&v45 + 1);
        }
        ++v22;
        v21 += 2;
        --v5;
      }
      while ( v5 );
      *((_QWORD *)&v44 + 1) = &v44;
      *(_QWORD *)&v44 = &v44;
      v23 = 0LL;
      v24 = KeGetCurrentThread();
      --v24->KernelApcDisable;
      v25 = (AutoBoost *)KeAbPreAcquire(a1 + 1176, 0LL, 0LL, v19);
      v27 = v25;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1176), v25, a1 + 1176);
      if ( v27 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v27, v26);
        else
          *((_BYTE *)v27 + 10) = 1;
      }
      v28 = (__int128 *)v45;
      *(_QWORD *)(a1 + 1184) = KeGetCurrentThread();
      while ( v28 != &v45 )
      {
        v29 = v28;
        v30 = (char *)v28 - 88;
        v31 = v28;
        v28 = *(__int128 **)v28;
        *((_QWORD *)v29 + 1) = v29;
        *(_QWORD *)v29 = v29;
        if ( *((_QWORD *)v30 + 8) == 1LL
          && !*((_DWORD *)v30 + 33)
          && ++v23 > (unsigned __int64)*(unsigned int *)(a1 + 16) )
        {
          if ( (*((_DWORD *)v30 + 30) & 0x40000) == 0 )
          {
            v32 = *(_DWORD *)(a1 + 1196) >> 5;
            v43 = *((_QWORD *)v30 + 1) & (-1LL << (*(_DWORD *)(a1 + 1196) & 0x1F));
            for ( j = (char *)(*(_QWORD *)(a1 + 1200)
                             + 8LL
                             * ((v32 - 1) & (HIBYTE(v43)
                                           - 877075889
                                           + 442596621 * (unsigned __int8)v43
                                           + 37
                                           * (BYTE6(v43)
                                            + 37
                                            * (BYTE5(v43)
                                             + 37
                                             * (BYTE4(v43)
                                              + 37 * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (unsigned int)BYTE1(v43)))))))));
                  (*(_QWORD *)j & 1) == 0;
                  j = *(char **)j )
            {
              if ( *(char **)j == v30 )
              {
                *(_QWORD *)j = *(_QWORD *)v30;
                --*(_DWORD *)(a1 + 1192);
                break;
              }
            }
            *(_QWORD *)v30 = 0LL;
          }
          v34 = (_QWORD *)v31 - 9;
          if ( *((_QWORD *)v31 - 9) )
          {
            v35 = *(_DWORD *)(a1 + 1212) >> 5;
            v43 = *(_QWORD *)(v31 - 4) & (-1LL << (*(_DWORD *)(a1 + 1212) & 0x1F));
            for ( k = (_QWORD *)(*(_QWORD *)(a1 + 1216)
                               + 8LL
                               * ((v35 - 1) & (HIBYTE(v43)
                                             - 877075889
                                             + 442596621 * (unsigned __int8)v43
                                             + 37
                                             * (BYTE6(v43)
                                              + 37
                                              * (BYTE5(v43)
                                               + 37
                                               * (BYTE4(v43)
                                                + 37 * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (unsigned int)BYTE1(v43)))))))));
                  (*k & 1) == 0;
                  k = (_QWORD *)*k )
            {
              if ( (_QWORD *)*k == v34 )
              {
                *k = *v34;
                --*(_DWORD *)(a1 + 1208);
                break;
              }
            }
            *v34 = 0LL;
          }
          v37 = v31 - 1;
          v38 = *((_QWORD *)v31 - 2);
          if ( *(__int128 **)(v38 + 8) != v31 - 1 )
            goto LABEL_22;
          v39 = (__int128 **)*((_QWORD *)v31 - 1);
          if ( *v39 != v37 )
            goto LABEL_22;
          *v39 = (__int128 *)v38;
          *(_QWORD *)(v38 + 8) = v39;
          v40 = (__int128 **)*((_QWORD *)&v44 + 1);
          --*(_DWORD *)(a1 + 1240);
          if ( *v40 != &v44 )
            goto LABEL_22;
          *((_QWORD *)v37 + 1) = v40;
          *(_QWORD *)v37 = &v44;
          *v40 = v37;
          *((_QWORD *)&v44 + 1) = v31 - 1;
        }
      }
      *(_DWORD *)(a1 + 1244) = 0;
      *(_DWORD *)(a1 + 1636) = 0;
      *(_QWORD *)(a1 + 1184) = 0LL;
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1176));
      KeAbPostRelease(a1 + 1176);
      KeLeaveCriticalRegion();
      while ( 1 )
      {
        result = v44;
        if ( (__int128 *)v44 == &v44 )
          break;
        if ( *(__int128 **)(v44 + 8) != &v44 )
          goto LABEL_22;
        v41 = *(_QWORD *)v44;
        if ( *(_QWORD *)(*(_QWORD *)v44 + 8LL) != (_QWORD)v44 )
          goto LABEL_22;
        *(_QWORD *)&v44 = *(_QWORD *)v44;
        v42 = (_QWORD *)(result - 72);
        *(_QWORD *)(v41 + 8) = &v44;
        *(_QWORD *)(result - 72 + 64) = 0LL;
        *(_QWORD *)(result + 8) = result;
        *(_QWORD *)result = result;
        EtwpCovSampModuleCleanup(result - 72);
        ExFreePoolWithTag(v42, 0x56777445u);
      }
      _InterlockedExchange((volatile __int32 *)(a1 + 1640), 0);
    }
  }
  return result;
}
