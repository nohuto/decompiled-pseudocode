/*
 * XREFs of PiQueryPowerRelations @ 0x140B37868
 * Callers:
 *     PnpDeviceActionWorker @ 0x14047C410 (PnpDeviceActionWorker.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409B0EBC (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     PnpAcquirePowerRelationsQueueLock @ 0x1404E6CC8 (PnpAcquirePowerRelationsQueueLock.c)
 *     PnpReleasePowerRelationsQueueLock @ 0x1404ED618 (PnpReleasePowerRelationsQueueLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PnpQueryDeviceRelations @ 0x1409B023C (PnpQueryDeviceRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140B37DDC (PiQueryPowerDependencyRelations.c)
 *     PiValidatePowerRelations @ 0x140B38024 (PiValidatePowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140B45AE4 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryPowerRelations(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  int DeviceRelations; // esi
  _QWORD *v6; // r12
  _QWORD *v7; // rdi
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  unsigned int *v12; // r8
  unsigned int i; // r15d
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 Pool2; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // r13
  _QWORD *v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  _WORD *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  int PowerDependencyRelations; // eax
  PVOID *v41; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v43; // edx
  PVOID P; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  DeviceRelations = 0;
  P = 0LL;
  if ( !*(_QWORD *)(a1 + 16) )
    return 3221225865LL;
  if ( !a2 )
  {
    DeviceRelations = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 32), 2, 0LL, (__int64)&P);
    if ( DeviceRelations >= 0 )
    {
      PnpAcquirePowerRelationsQueueLock();
      v6 = (_QWORD *)(a1 + 192);
      v7 = *(_QWORD **)(a1 + 192);
      while ( v7 != v6 )
      {
        v8 = v7;
        v7 = (_QWORD *)*v7;
        if ( (_QWORD *)v7[1] != v8
          || (v9 = (_QWORD *)v8[1], (_QWORD *)*v9 != v8)
          || (*v9 = v7, v7[1] = v9, v10 = v8[3], *(_QWORD **)(v10 + 8) != v8 + 3)
          || (v11 = (_QWORD *)v8[4], (_QWORD *)*v11 != v8 + 3) )
        {
LABEL_26:
          __fastfail(3u);
        }
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        ExFreePoolWithTag(v8, 0x72775044u);
      }
      PnpReleasePowerRelationsQueueLock();
      v12 = (unsigned int *)P;
      if ( P && *(_DWORD *)P )
      {
        for ( i = 0; i < *v12; ++i )
        {
          v14 = *(_QWORD *)&v12[2 * i + 2];
          if ( !v14 )
            goto LABEL_73;
          v15 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL);
          if ( !v15 || (*(_DWORD *)(v15 + 396) & 0x20000) != 0 )
          {
            _mm_lfence();
            v22 = *((_QWORD *)P + i + 1);
            IoAddTriageDumpDataBlock(v22, (PVOID)*(unsigned __int16 *)(v22 + 2));
            v12 = (unsigned int *)P;
            v23 = *(_QWORD *)(*((_QWORD *)P + i + 1) + 8LL);
            if ( v23 )
            {
              _mm_lfence();
              IoAddTriageDumpDataBlock(v23, (PVOID)(unsigned int)*(__int16 *)(v23 + 2));
              v12 = (unsigned int *)P;
              v24 = (_WORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 8LL) + 56LL);
              if ( *v24 )
              {
                _mm_lfence();
                IoAddTriageDumpDataBlock((ULONG)v24, (PVOID)2);
                v25 = *(_QWORD *)(*((_QWORD *)P + i + 1) + 8LL);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v25 + 64), (PVOID)*(unsigned __int16 *)(v25 + 56));
                v12 = (unsigned int *)P;
              }
            }
            if ( *(_QWORD *)&v12[2 * i + 2] )
            {
              _mm_lfence();
              v12 = (unsigned int *)P;
              v26 = *((_QWORD *)P + i + 1);
              if ( *(_QWORD *)(*(_QWORD *)(v26 + 312) + 40LL) )
              {
                if ( v26 )
                {
                  _mm_lfence();
                  v12 = (unsigned int *)P;
                  v27 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                }
                else
                {
                  v27 = 0LL;
                }
                if ( *(_QWORD *)&v12[2 * i + 2] )
                {
                  _mm_lfence();
                  v28 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                }
                else
                {
                  LODWORD(v28) = 0;
                }
                IoAddTriageDumpDataBlock(v28, (PVOID)0x388);
                if ( *(_WORD *)(v27 + 40) )
                {
                  IoAddTriageDumpDataBlock(v27 + 40, (PVOID)2);
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v27 + 48), (PVOID)*(unsigned __int16 *)(v27 + 40));
                }
                v12 = (unsigned int *)P;
                if ( *((_QWORD *)P + i + 1) )
                {
                  _mm_lfence();
                  v12 = (unsigned int *)P;
                  v29 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                }
                else
                {
                  v29 = 0LL;
                }
                if ( *(_WORD *)(v29 + 56) )
                {
                  if ( *(_QWORD *)&v12[2 * i + 2] )
                  {
                    _mm_lfence();
                    v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                  }
                  else
                  {
                    LODWORD(v30) = 0;
                  }
                  IoAddTriageDumpDataBlock(v30 + 56, (PVOID)2);
                  v31 = P;
                  if ( *((_QWORD *)P + i + 1) )
                  {
                    _mm_lfence();
                    v31 = P;
                    v32 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                  }
                  else
                  {
                    v32 = 0LL;
                  }
                  if ( v31[i + 1] )
                  {
                    _mm_lfence();
                    v33 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                  }
                  else
                  {
                    v33 = 0LL;
                  }
                  IoAddTriageDumpDataBlock(*(_QWORD *)(v33 + 64), (PVOID)*(unsigned __int16 *)(v32 + 56));
                  v12 = (unsigned int *)P;
                }
                if ( *(_QWORD *)&v12[2 * i + 2] )
                {
                  _mm_lfence();
                  v12 = (unsigned int *)P;
                  v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                }
                else
                {
                  v34 = 0LL;
                }
                if ( *(_QWORD *)(v34 + 16) )
                {
                  if ( *(_QWORD *)&v12[2 * i + 2] )
                  {
                    _mm_lfence();
                    v12 = (unsigned int *)P;
                    v35 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                  }
                  else
                  {
                    v35 = 0LL;
                  }
                  if ( *(_WORD *)(*(_QWORD *)(v35 + 16) + 56LL) )
                  {
                    if ( *(_QWORD *)&v12[2 * i + 2] )
                    {
                      _mm_lfence();
                      v36 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                    }
                    else
                    {
                      v36 = 0LL;
                    }
                    IoAddTriageDumpDataBlock(*(_QWORD *)(v36 + 16) + 56, (PVOID)2);
                    v37 = P;
                    if ( *((_QWORD *)P + i + 1) )
                    {
                      _mm_lfence();
                      v37 = P;
                      v38 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                    }
                    else
                    {
                      v38 = 0LL;
                    }
                    if ( v37[i + 1] )
                    {
                      _mm_lfence();
                      v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + i + 1) + 312LL) + 40LL);
                    }
                    else
                    {
                      v39 = 0LL;
                    }
                    IoAddTriageDumpDataBlock(
                      *(_QWORD *)(*(_QWORD *)(v39 + 16) + 64LL),
                      (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v38 + 16) + 56LL));
                    v12 = (unsigned int *)P;
                  }
                }
              }
            }
LABEL_73:
            KeBugCheckEx(0xCAu, 2uLL, *(_QWORD *)&v12[2 * i + 2], 0LL, 0LL);
          }
          if ( *(_QWORD *)(v15 + 16) )
          {
            Pool2 = ExAllocatePool2(0x40uLL);
            v17 = (_QWORD *)Pool2;
            if ( !Pool2 )
            {
              DeviceRelations = -1073741670;
              break;
            }
            *(_BYTE *)(Pool2 + 48) = 0;
            *(_QWORD *)(Pool2 + 40) = v15 + 160;
            *(_QWORD *)(Pool2 + 16) = a1 + 160;
            PnpAcquirePowerRelationsQueueLock();
            v18 = *(_QWORD **)(a1 + 200);
            if ( (_QWORD *)*v18 != v6 )
              goto LABEL_26;
            *v17 = v6;
            v19 = v15 + 176;
            v17[1] = v18;
            *v18 = v17;
            *(_QWORD *)(a1 + 200) = v17;
            v20 = v17 + 3;
            v21 = *(_QWORD **)(v19 + 8);
            if ( *v21 != v19 )
              goto LABEL_26;
            *v20 = v19;
            v20[1] = v21;
            *v21 = v20;
            *(_QWORD *)(v19 + 8) = v20;
            PnpReleasePowerRelationsQueueLock();
            v12 = (unsigned int *)P;
          }
        }
      }
      else
      {
        DeviceRelations = 0;
      }
    }
    else
    {
      P = 0LL;
    }
  }
  PowerDependencyRelations = PiQueryPowerDependencyRelations(a1);
  if ( DeviceRelations >= 0 && PowerDependencyRelations < 0 )
    DeviceRelations = PowerDependencyRelations;
  PiValidatePowerRelations(a1);
  v41 = (PVOID *)P;
  if ( P )
  {
    if ( *(_DWORD *)P )
    {
      do
      {
        ObfDereferenceObject(v41[v2 + 1]);
        v41 = (PVOID *)P;
        ++v2;
      }
      while ( v2 < *(_DWORD *)P );
    }
    ExFreePoolWithTag(v41, 0);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  v43 = *(_DWORD *)(a1 + 300);
  if ( v43 != 768 && (unsigned int)(v43 - 769) > 1 && (unsigned int)(v43 - 789) > 1 )
    PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(*(_QWORD *)(a1 + 32));
  ExReleaseResourceLite(&IopDeviceTreeLock);
  KeLeaveCriticalRegion();
  return (unsigned int)DeviceRelations;
}
