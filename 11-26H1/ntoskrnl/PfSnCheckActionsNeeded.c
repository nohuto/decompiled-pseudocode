/*
 * XREFs of PfSnCheckActionsNeeded @ 0x1409D21C0
 * Callers:
 *     PfSnBeginScenario @ 0x1409D16A0 (PfSnBeginScenario.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     MmGetDefaultPagePriority @ 0x1404AFDB0 (MmGetDefaultPagePriority.c)
 *     PfResourceExclusiveAcquire @ 0x1404D07E8 (PfResourceExclusiveAcquire.c)
 *     MmQueryTransitionPagesMadeColdCount @ 0x1404E6CAC (MmQueryTransitionPagesMadeColdCount.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1409D2508 (PfSnPrefetchCacheEntryGet.c)
 */

__int64 __fastcall PfSnCheckActionsNeeded(unsigned __int8 *a1, int a2, __int64 a3, int *a4, int *a5)
{
  int v8; // esi
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int DefaultPagePriority; // eax
  __int64 v12; // r15
  __int64 v13; // r13
  unsigned int v14; // edx
  unsigned __int8 *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  _QWORD *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r14
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r15
  _QWORD *v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 v32; // r15
  int v33; // r13d
  __int64 v34; // rax
  _DWORD *v35; // rcx
  unsigned int v37; // edx
  unsigned int v38; // eax
  bool v39; // cf
  int v40; // eax
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  int v42; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v43; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v44; // [rsp+40h] [rbp-C0h]
  __int64 v45; // [rsp+48h] [rbp-B8h]
  unsigned __int8 *v46; // [rsp+50h] [rbp-B0h]
  int *v47; // [rsp+58h] [rbp-A8h]
  int *v48; // [rsp+60h] [rbp-A0h]
  _BYTE v49[104]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v50[9]; // [rsp+D8h] [rbp-28h] BYREF

  v46 = a1;
  v48 = a5;
  v47 = a4;
  memset_0(v49, 0, 0xB0uLL);
  LODWORD(v43) = 0;
  v42 = 0;
  v41 = 0;
  v8 = 3;
  v9 = 23;
  v10 = 3;
  if ( (stru_140E66D40.AbCompletedIoQoSBoostCount & 8) != 0 )
  {
    v9 = 22;
    v8 = 22;
  }
  else
  {
    PsGetPagePriorityThread(a3);
    DefaultPagePriority = MmGetDefaultPagePriority();
    v12 = DefaultPagePriority;
    v13 = DefaultPagePriority - 1;
    if ( v14 <= (unsigned int)v13 || DefaultPagePriority <= (unsigned int)v13 )
    {
      v8 = 2;
      v9 = 2;
    }
    else
    {
      if ( (stru_140E67200.WaitBlockFill5[32] & 0x10) != 0 && !a2 )
      {
        v10 = 1;
        v9 = 14;
      }
      v15 = a1;
      v16 = 314159LL;
      v17 = 8LL;
      do
      {
        v18 = *v15;
        v15 += 8;
        v19 = *(v15 - 3)
            + 37 * (*(v15 - 4) + 37 * (*(v15 - 5) + 37 * (*(v15 - 6) + 37 * (*(v15 - 7) + 37 * (v18 + 37 * v16)))));
        v20 = *(v15 - 1);
        v16 = v20 + 37 * (*(v15 - 2) + 37 * v19);
        --v17;
      }
      while ( v17 );
      v45 = v20 + 37 * (*(v15 - 2) + 37 * v19);
      v44 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, v49, 0xB0u, 0, &v43);
      v21 = 0LL;
      v22 = v50;
      v23 = 8LL;
      do
      {
        v21 += *v22++;
        --v23;
      }
      while ( v23 );
      v24 = v21 >> 6;
      v25 = 0LL;
      if ( (unsigned int)v12 <= 7 )
      {
        v26 = &v50[v12];
        v27 = (unsigned int)(8 - v12);
        do
        {
          v25 += *v26++;
          --v27;
        }
        while ( v27 );
      }
      v28 = v25 >> 6;
      v29 = 0LL;
      if ( (unsigned int)v13 <= 7 )
      {
        v30 = &v50[v13];
        v31 = (unsigned int)(8 - v13);
        do
        {
          v29 += *v30++;
          --v31;
        }
        while ( v31 );
      }
      v32 = v29 >> 6;
      v33 = MmQueryTransitionPagesMadeColdCount(&v42);
      PfResourceExclusiveAcquire((struct _ERESOURCE *)&stru_140E67200.Teb);
      v34 = PfSnPrefetchCacheEntryGet(&stru_140E67200.WaitStatus, v46, v45, &v41);
      v35 = (_DWORD *)v34;
      if ( v34 )
      {
        if ( v41 )
        {
          v8 = 13;
          if ( v10 >= 2 )
            v9 = 13;
        }
        else
        {
          v37 = v44 - *(_DWORD *)(v34 + 112);
          v38 = *(_DWORD *)(v34 + 116);
          v39 = v37 < v38;
          if ( v37 < v38 )
          {
            v10 &= ~1u;
            v39 = v37 < v38;
          }
          v8 = v39 + 4;
          if ( v10 >= 2 )
          {
            v9 = 4;
            if ( (stru_140E66D40.AbCompletedIoQoSBoostCount & 2) == 0 )
            {
              if ( v37 >= 0x1B7740 )
              {
                if ( v37 >= 0x36EE80 )
                  v40 = v24 - v35[26];
                else
                  v40 = v32 - v35[25];
              }
              else
              {
                v40 = v28 - v35[24];
              }
              if ( !v40 && (!v42 || (unsigned int)(v33 - v35[27]) < 0x100) )
              {
                v10 &= ~2u;
                v9 = 7;
              }
            }
          }
        }
        v35[28] = v44;
        v35[24] = v28;
        v35[25] = v32;
        v35[26] = v24;
        v35[27] = v33;
      }
      else
      {
        v9 = 3;
      }
      ExReleaseResourceLite((PERESOURCE)&stru_140E67200.Teb);
      KeLeaveCriticalRegion();
    }
  }
  *v47 = v8;
  *v48 = v9;
  return v10;
}
