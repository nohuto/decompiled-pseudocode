/*
 * XREFs of PnpAllocateResources @ 0x140AA0454
 * Callers:
 *     IopLegacyResourceAllocation @ 0x1409B81D4 (IopLegacyResourceAllocation.c)
 *     PnpAssignResourcesToDevices @ 0x140AA03DC (PnpAssignResourcesToDevices.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     PnpFindBestConfiguration @ 0x1407A6064 (PnpFindBestConfiguration.c)
 *     IopReleaseFilteredBootResources @ 0x1407A9034 (IopReleaseFilteredBootResources.c)
 *     PnpBuildCmResourceLists @ 0x1407B6158 (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1407B6398 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpRebalance @ 0x1407B6FF8 (PnpRebalance.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1409B01B0 (PipClearDevNodeFlags.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140AA0544 (PnpGetResourceRequirementsForAssignTable.c)
 *     IopCommitConfiguration @ 0x140B51038 (IopCommitConfiguration.c)
 */

__int64 __fastcall PnpAllocateResources(unsigned int a1, _DWORD *a2, char a3, _BYTE *a4)
{
  int v4; // r12d
  __int64 v5; // r14
  char v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v10; // rbp
  int ResourceRequirementsForAssignTable; // ebx
  _DWORD *i; // rax
  int v14; // edx
  _DWORD *v15; // rax
  unsigned __int64 v16; // rcx
  _QWORD *j; // rcx
  __int64 v18; // rax
  int v19; // esi
  unsigned int v20; // ebx
  int *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  _DWORD *v25; // rcx
  _OWORD *v26; // rdx
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  __int128 v30; // xmm5
  unsigned int v31; // eax
  _DWORD *v32; // rcx
  unsigned __int64 v33; // rsi
  _DWORD *k; // rsi
  __int64 v35; // r15
  int BestConfiguration; // eax
  int v37; // eax
  _DWORD *v38; // rcx
  unsigned __int64 v39; // rax
  int v40; // edx
  _OWORD v41[5]; // [rsp+30h] [rbp-58h] BYREF
  size_t NumOfElements; // [rsp+98h] [rbp+10h] BYREF
  char v44; // [rsp+A0h] [rbp+18h]

  v44 = a3;
  v4 = 0;
  v5 = a1;
  v7 = a3;
  v41[0] = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( !a3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  LODWORD(NumOfElements) = v5;
  v10 = (unsigned __int64)&a2[16 * v5];
  ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(a2, v10, &NumOfElements);
  if ( ResourceRequirementsForAssignTable >= 0 )
  {
    if ( !IopBootConfigsReserved )
    {
      for ( i = a2; (unsigned __int64)i < v10; i += 16 )
      {
        if ( (int)i[14] >= 0 && !*((_QWORD *)i + 3) )
        {
          v14 = 1;
          goto LABEL_17;
        }
      }
      v14 = 0;
      if ( i != (_DWORD *)v10 )
      {
LABEL_17:
        if ( (unsigned __int64)a2 < v10 )
        {
          v15 = a2 + 2;
          v16 = ((unsigned __int64)((v5 << 6) - 1) >> 6) + 1;
          do
          {
            if ( (int)v15[12] < 0 || *((_QWORD *)v15 + 2) )
            {
              *v15 |= 0x20u;
              v15[12] = -1073741267;
            }
            v15 += 16;
            --v16;
          }
          while ( v16 );
        }
        if ( v14 )
          goto LABEL_98;
      }
    }
    for ( j = a2; (unsigned __int64)j < v10; j += 8 )
    {
      if ( *j )
        v18 = *(_QWORD *)(*(_QWORD *)(*j + 312LL) + 40LL);
      else
        v18 = 0LL;
      if ( (*(_DWORD *)(v18 + 396) & 0x40) != 0 && j[3] )
      {
        v19 = 0;
        goto LABEL_34;
      }
    }
    v19 = 1;
    if ( j != (_QWORD *)v10 )
    {
LABEL_34:
      if ( (unsigned __int64)a2 < v10 )
      {
        v20 = NumOfElements;
        v21 = a2 + 2;
        do
        {
          v22 = *((_QWORD *)v21 - 1);
          if ( v22 )
            v23 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
          else
            v23 = 0LL;
          if ( (*(_DWORD *)(v23 + 396) & 0x40) == 0 || !*((_QWORD *)v21 + 2) )
          {
            v24 = *v21;
            if ( (*v21 & 0x20) == 0 )
            {
              v21[12] = -1073741267;
              *v21 = v24 | 0x20;
              --v20;
            }
          }
          v21 += 16;
        }
        while ( (unsigned __int64)(v21 - 2) < v10 );
LABEL_46:
        if ( !v20 )
        {
          ResourceRequirementsForAssignTable = -1073741823;
LABEL_98:
          PnpFreeResourceRequirementsForAssignTable(
            (unsigned __int64)a2,
            (unsigned __int64)&a2[16 * (unsigned __int64)(unsigned int)v5]);
          goto LABEL_6;
        }
        if ( v20 != (_DWORD)v5 )
        {
          v25 = a2;
          if ( (unsigned __int64)a2 < v10 )
          {
            v26 = (_OWORD *)(v10 - 64);
            do
            {
              if ( (v25[2] & 0x20) != 0 )
              {
                v10 -= 64LL;
                v27 = *(_OWORD *)v25;
                v28 = *((_OWORD *)v25 + 1);
                v29 = *((_OWORD *)v25 + 2);
                v30 = *((_OWORD *)v25 + 3);
                *(_OWORD *)v25 = *v26;
                *((_OWORD *)v25 + 1) = v26[1];
                *((_OWORD *)v25 + 2) = v26[2];
                *((_OWORD *)v25 + 3) = v26[3];
                *v26 = v27;
                v26[1] = v28;
                v26[2] = v29;
                v26[3] = v30;
                v26 -= 4;
              }
              else
              {
                v25 += 16;
              }
            }
            while ( (unsigned __int64)v25 < v10 );
          }
        }
        if ( v20 > 1 )
        {
          v31 = 0;
          v32 = a2 + 5;
          do
          {
            *v32 = v31++;
            v32 += 16;
          }
          while ( v31 < v20 );
          qsort(a2, v20, 0x40uLL, (int (__cdecl *)(const void *, const void *))PnpCompareResourceRequestPriority);
        }
        if ( v19 )
        {
          ResourceRequirementsForAssignTable = PnpFindBestConfiguration((__int64)a2, v20, (__int64)v41);
          if ( ResourceRequirementsForAssignTable >= 0 )
          {
            ResourceRequirementsForAssignTable = IopCommitConfiguration(v41);
            v33 = (unsigned __int64)a2;
            if ( (unsigned __int64)a2 >= v10 )
            {
LABEL_97:
              IopReleaseFilteredBootResources((unsigned __int64)a2, v10);
              goto LABEL_98;
            }
            do
            {
              if ( ResourceRequirementsForAssignTable < 0 )
                *(_DWORD *)(v33 + 56) = -1073741800;
              else
                PnpBuildCmResourceLists(v33, v33 + 64, 0);
              v33 += 64LL;
            }
            while ( v33 < v10 );
LABEL_96:
            LODWORD(v5) = a1;
            goto LABEL_97;
          }
        }
        else
        {
          ResourceRequirementsForAssignTable = -1073741823;
        }
        for ( k = a2; (unsigned __int64)k < v10; k += 16 )
        {
          if ( *(_QWORD *)k )
            v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)k + 312LL) + 40LL);
          else
            v35 = 0LL;
          BestConfiguration = PnpFindBestConfiguration((__int64)k, 1u, (__int64)v41);
          ResourceRequirementsForAssignTable = BestConfiguration;
          if ( BestConfiguration < 0 )
          {
            if ( BestConfiguration == -1073741670 )
              goto LABEL_90;
            if ( v4 || (a2[2] & 0x80u) != 0 )
            {
              k[2] |= 0x20u;
              k[14] = -1073741267;
            }
            else
            {
              PipSetDevNodeFlags(v35, 0x40000u);
              ResourceRequirementsForAssignTable = PnpRebalance(v35, k, 1u, 0);
              PipClearDevNodeFlags(v35, 0x40000);
              if ( ResourceRequirementsForAssignTable >= 0 )
              {
                if ( a4 )
                  *a4 = 1;
                k += 16;
                if ( (unsigned __int64)k < v10 )
                {
LABEL_90:
                  v38 = k + 2;
                  v39 = ((v10 - (unsigned __int64)k - 1) >> 6) + 1;
                  do
                  {
                    if ( ResourceRequirementsForAssignTable == -1073741670 )
                    {
                      v40 = -1073741670;
                    }
                    else
                    {
                      *v38 |= 0x20u;
                      v40 = -1073741267;
                    }
                    v38[12] = v40;
                    v38 += 16;
                    --v39;
                  }
                  while ( v39 );
                  break;
                }
                break;
              }
              v37 = -1073739512;
              if ( ResourceRequirementsForAssignTable != -1073739512 )
                v37 = -1073741800;
              k[14] = v37;
            }
          }
          else
          {
            v4 = 1;
            ResourceRequirementsForAssignTable = IopCommitConfiguration(v41);
            if ( ResourceRequirementsForAssignTable < 0 )
              k[14] = -1073741800;
            else
              PnpBuildCmResourceLists((unsigned __int64)k, (unsigned __int64)(k + 16), 0);
          }
        }
        v7 = v44;
        goto LABEL_96;
      }
    }
    v20 = NumOfElements;
    goto LABEL_46;
  }
LABEL_6:
  if ( !v7 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)ResourceRequirementsForAssignTable;
}
