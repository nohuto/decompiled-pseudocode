/*
 * XREFs of ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z @ 0x1402FB050
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14030D4B0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0qqqszq_EtwWriteTransfer @ 0x14005B240 (McTemplateK0qqqszq_EtwWriteTransfer.c)
 *     McTemplateK0qqsz_EtwWriteTransfer @ 0x140062B60 (McTemplateK0qqsz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402FAC00 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 *     ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1402FAD94 (-GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1402FAE34 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 *     ?ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402FB018 (-ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1402FB8CC (-EtwProfilerTypeName@DripsBlockerTrackingHelper@@KAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 */

void __fastcall DXGGLOBAL::StartCoreDripsBlockerTracking(
        DXGGLOBAL *this,
        __int64 a2,
        const char *a3,
        struct _EPROCESS *a4)
{
  bool v8; // zf
  DXGFASTMUTEX *v9; // rcx
  struct _KTHREAD **v10; // r15
  __int64 v11; // rcx
  char *v12; // r15
  int v13; // r13d
  __int64 v14; // rcx
  struct DXGTHREAD *DxgThread; // rax
  unsigned __int64 Elapsed; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  const wchar_t *v20; // r10
  DripsBlockerTrackingHelper *v21; // rcx
  unsigned int v22; // edi
  SIZE_T v23; // r12
  __int64 v24; // r14
  __int64 i; // rbx
  unsigned int v26; // r14d
  char v27; // al
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // rcx
  char *v33; // rdi
  __int64 v34; // rcx
  const wchar_t *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  struct _KTHREAD **v38; // rbx
  unsigned int j; // ebx
  __int64 v40; // rdi
  unsigned int k; // edx
  char *v42; // r8
  struct DXGTHREAD *v43; // [rsp+50h] [rbp-29h] BYREF
  struct _KTHREAD **v44; // [rsp+58h] [rbp-21h]
  char v45; // [rsp+60h] [rbp-19h]
  SIZE_T Length; // [rsp+68h] [rbp-11h] BYREF
  __int128 Source2; // [rsp+70h] [rbp-9h] BYREF
  __int128 v48; // [rsp+80h] [rbp+7h]
  char v49; // [rsp+90h] [rbp+17h]

  if ( a2 )
  {
    if ( a4 )
    {
      if ( *((_DWORD *)this + 526) && *((_BYTE *)this + 304360) )
      {
        v8 = (DXGGLOBAL *)((char *)this + 2112) == 0LL;
        v9 = (DXGGLOBAL *)((char *)this + 2112);
        v44 = (struct _KTHREAD **)v9;
        v45 = 0;
        if ( v8 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 628;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
          v9 = (DXGFASTMUTEX *)v44;
        }
        if ( DXGFASTMUTEX::IsOwner(v9) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 635;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
        }
        v10 = v44;
        KeEnterCriticalRegion();
        if ( v10[3] == KeGetCurrentThread() )
        {
          if ( *((int *)v10 + 8) <= 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 504;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
          }
          ++*((_DWORD *)v10 + 8);
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v10 + 1, 0LL) )
          {
            if ( bTracingEnabled && *((_DWORD *)v10 + 9) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v11, (__int64)"g");
            _InterlockedIncrement64((volatile signed __int64 *)v10 + 2);
            ExAcquirePushLockExclusiveEx(v10 + 1, 0LL);
          }
          if ( v10[3] )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 530;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( *((_DWORD *)v10 + 8) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 531;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
          }
          v10[3] = KeGetCurrentThread();
          *((_DWORD *)v10 + 8) = 1;
        }
        v45 = 1;
        v12 = (char *)this + 2280;
        v13 = -1;
        v43 = 0LL;
        if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v43) >= 0 )
        {
          DxgThread = v43;
          if ( v43 || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v43 = DxgThread) != 0LL) )
            v13 = *((_DWORD *)DxgThread + 14);
        }
        v8 = *((_BYTE *)this + 304432) == 0;
        *((_BYTE *)this + 304409) = 0;
        if ( !v8 )
        {
          Elapsed = DripsBlockerTrackingHelper::TimeInterval::GetElapsed(*((_QWORD *)this + 38052));
          v17 = Elapsed;
          v14 = 4720LL * *((unsigned int *)v12 + 75536) + 72LL * *((unsigned int *)v12 + 75537);
          if ( v12[302153] )
            *(_QWORD *)&v12[v14 + 160] += Elapsed;
          else
            *(_QWORD *)&v12[v14 + 152] += Elapsed;
          if ( bTracingEnabled )
          {
            v18 = 4720LL * *((unsigned int *)v12 + 75536);
            v19 = *((unsigned int *)v12 + 75537);
            LODWORD(v43) = 0;
            v20 = (const wchar_t *)DripsBlockerTrackingHelper::EtwProfilerTypeName(
                                     *(unsigned int *)&v12[72 * v19 + 172 + v18],
                                     &v43);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
              McTemplateK0qqqszq_EtwWriteTransfer(
                (unsigned __int8)v12[302153],
                &DripsBlockerTracking_AddD0LagTime,
                (__int64)&v12[4720 * *((unsigned int *)v12 + 75536) + 8],
                *((_DWORD *)v12 + 75536),
                *((_DWORD *)v12 + 75537),
                v12[302153],
                &v12[4720 * *((unsigned int *)v12 + 75536) + 8],
                v20,
                v17 / 0x2710);
          }
          v12[302152] = 0;
        }
        if ( v12[302080] )
        {
          LODWORD(v43) = 0;
          if ( !DripsBlockerTrackingHelper::ShouldIgnore(v14, v13) )
          {
            Length = 0LL;
            v49 = 0;
            Source2 = 0LL;
            v48 = 0LL;
            DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v21, a3, a4, (char *)&Source2, 0x21u, &Length);
            v22 = 0;
            v23 = Length;
            while ( v22 < 0x40 )
            {
              v24 = 4720LL * v22;
              if ( v12[v24 + 104] && *(_QWORD *)&v12[v24] == a2 && RtlCompareMemory(&v12[v24 + 8], &Source2, v23) == v23 )
              {
                for ( i = 0LL; (unsigned int)i < *(_DWORD *)&v12[v24 + 44]; i = (unsigned int)(i + 1) )
                {
                  if ( *(_DWORD *)&v12[72 * i + 172 + v24] == v13 )
                  {
                    v26 = v22;
                    goto LABEL_42;
                  }
                }
              }
              ++v22;
            }
            for ( j = 0; j < 0x40; ++j )
            {
              v40 = 4720LL * j;
              if ( v12[v40 + 104] && *(_QWORD *)&v12[v40] == a2 && RtlCompareMemory(&v12[v40 + 8], &Source2, v23) == v23 )
              {
                if ( *(_DWORD *)&v12[v40 + 44] >= 0x40u )
                  goto LABEL_49;
                _mm_lfence();
                v26 = j;
                i = *(unsigned int *)&v12[v40 + 44];
                *(_DWORD *)&v12[v40 + 44] = i + 1;
                *(_DWORD *)&v12[72 * i + 172 + v40] = v13;
                goto LABEL_42;
              }
            }
            for ( k = 0; k < 0x40; ++k )
            {
              v42 = &v12[4720 * k];
              if ( !v42[104] )
              {
                v27 = v49;
                v26 = k;
                ++*((_DWORD *)v42 + 11);
                v28 = Source2;
                *(_QWORD *)v42 = a2;
                v29 = v48;
                *(_OWORD *)(v42 + 8) = v28;
                *(_OWORD *)(v42 + 24) = v29;
                v42[40] = v27;
                v30 = 0;
                *((_DWORD *)v42 + 43) = v13;
                v42[104] = 1;
                v12[302128] = 0;
                goto LABEL_41;
              }
            }
            v26 = (unsigned int)v43;
            v30 = -1073741275;
LABEL_41:
            LODWORD(i) = 0;
            if ( v30 >= 0 )
            {
LABEL_42:
              v31 = 4720LL * v26;
              v32 = v31 + 72 * ((unsigned int)i + 2LL);
              ++*(_DWORD *)&v12[v32];
              v33 = &v12[72 * (unsigned int)i + v31];
              ++*((_DWORD *)v33 + 37);
              *((_DWORD *)v33 + 44) += v12[302104] != 0;
              if ( *(_DWORD *)&v12[v32] == 1 )
              {
                if ( !v33[112] && !v12[302104] )
                {
                  *((LARGE_INTEGER *)v33 + 15) = KeQueryPerformanceCounter(0LL);
                  v33[112] = 1;
                }
                if ( bTracingEnabled )
                {
                  v34 = *((unsigned int *)v33 + 43);
                  LODWORD(v43) = 0;
                  v35 = (const wchar_t *)DripsBlockerTrackingHelper::EtwProfilerTypeName(v34, &v43);
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
                    McTemplateK0qqsz_EtwWriteTransfer((__int64)&v12[v31 + 8], v36, v37, v26, i, &v12[v31 + 8], v35);
                }
              }
            }
          }
        }
LABEL_49:
        if ( v45 )
        {
          v38 = v44;
          v45 = 0;
          if ( v44[3] != KeGetCurrentThread() )
          {
            WdLogSingleEntry5(0LL, 275LL, 4LL, v44, 0LL, 0LL);
            WdLogGlobalForLineNumber = 553;
          }
          if ( *((int *)v38 + 8) <= 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 556;
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
          }
          v8 = (*((_DWORD *)v38 + 8))-- == 1;
          if ( v8 )
          {
            v38[3] = 0LL;
            ExReleasePushLockExclusiveEx(v38 + 1, 0LL);
          }
          KeLeaveCriticalRegion();
        }
      }
    }
    else
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 510;
    }
  }
  else
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 504;
  }
}
