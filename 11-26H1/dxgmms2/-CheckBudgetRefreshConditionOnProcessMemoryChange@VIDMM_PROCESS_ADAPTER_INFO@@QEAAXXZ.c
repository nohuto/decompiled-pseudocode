/*
 * XREFs of ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400CFA10
 * Callers:
 *     VidMmSubmitPacket @ 0x1400CF830 (VidMmSubmitPacket.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(
        VIDMM_PROCESS_ADAPTER_INFO *this)
{
  char v1; // r14
  unsigned int v3; // ebp
  char *v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  _QWORD *v10; // r10
  int v11; // r9d
  __int64 i; // r11
  unsigned __int64 v13; // r8
  __int64 v14; // r13
  __int64 v15; // rdi
  unsigned int v16; // esi
  unsigned int v17; // r10d
  __int64 v18; // r11
  __int64 j; // r9
  __int64 v20; // rcx
  struct _RTL_BALANCED_NODE *v21; // rcx
  _QWORD *k; // rax
  _QWORD **v23; // rcx
  _QWORD *v24; // rdx
  _QWORD *v25; // rdx
  _BYTE v26[8]; // [rsp+50h] [rbp-48h] BYREF
  void *v27; // [rsp+58h] [rbp-40h]
  int v28; // [rsp+60h] [rbp-38h]

  v1 = 0;
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)this + 6952LL) )
  {
    v4 = (char *)this + 144;
    while ( 1 )
    {
      v5 = (_QWORD *)(*((_QWORD *)this + 1) + 304LL * (unsigned __int16)v3);
      if ( v4 && *((struct _KTHREAD **)v4 + 1) == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1495;
        DxgkLogInternalTriageEvent(v6, 262146LL);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v9 = *((_DWORD *)v4 + 6);
          if ( v9 != -1 && (byte_14008A201 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v7, &EventBlockThread, v8, v9);
        }
        ExAcquirePushLockSharedEx(v4, 0LL);
      }
      _InterlockedIncrement((volatile signed __int32 *)v4 + 4);
      v10 = v5 + 24;
      v11 = 0;
      for ( i = 0LL; ; i += 24LL )
      {
        if ( v11 >= 2 )
          goto LABEL_18;
        v13 = *(v10 - 6);
        if ( v11 == 1 )
          v13 += v5[33] + v5[34] + v5[35] + v5[36] + v5[37];
        v14 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40320LL) + 8LL * v3) + i + 616);
        if ( v13 > *v10 * (v14 + 100) / 0x64uLL || v13 < *v10 * (100 - v14) / 0x64uLL )
          break;
        ++v11;
        ++v10;
      }
      v1 = 1;
LABEL_18:
      _InterlockedDecrement((volatile signed __int32 *)v4 + 4);
      ExReleasePushLockSharedEx(v4, 0LL);
      KeLeaveCriticalRegion();
      v15 = *(_QWORD *)this;
      if ( ++v3 >= *(_DWORD *)(*(_QWORD *)this + 6952LL) )
      {
        if ( !v1 )
          return;
        v27 = &VIDMM_PARTITION::_PartitionLock;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
        v16 = *(_DWORD *)(v15 + 6952);
        v17 = 0;
        v28 = 1;
LABEL_21:
        if ( v17 >= v16 )
        {
          v28 = 0;
          ExReleasePushLockSharedEx(v27, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        v18 = 0LL;
        for ( j = 0LL; ; j += 24LL )
        {
          if ( j >= 48 )
          {
            ++v17;
            goto LABEL_21;
          }
          v20 = *(_QWORD *)(*(_QWORD *)(v15 + 40320) + 8LL * v17);
          if ( (*(_BYTE *)(j + v20 + 632) & 1) != 0 )
          {
            v21 = VIDMM_PARTITION::_PartitionTree;
            for ( k = 0LL; v21; v21 = v21->Children[0] )
              k = v21->Children;
            while ( k )
            {
              if ( *(_BYTE *)(*(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v15 + 24) + 240LL) + k[5] + 24)
                            + 344LL * v17
                            + 136) )
                goto LABEL_44;
              v23 = (_QWORD **)k[1];
              v24 = k;
              if ( v23 )
              {
                v25 = *v23;
                for ( k = (_QWORD *)k[1]; v25; v25 = (_QWORD *)*v25 )
                  k = v25;
              }
              else
              {
                for ( k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
                {
                  if ( (_QWORD *)*k == v24 )
                    break;
                  v24 = k;
                }
              }
            }
          }
          else if ( *(_BYTE *)(v18 + v20 + 800) )
          {
LABEL_44:
            DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v26);
            _InterlockedIncrement64((volatile signed __int64 *)(v15 + 45112));
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)v15 + 8LL) )
              KeSetEvent(*(PRKEVENT *)(*(_QWORD *)v15 + 24LL), 0, 0);
            return;
          }
          v18 += 344LL;
        }
      }
    }
  }
}
