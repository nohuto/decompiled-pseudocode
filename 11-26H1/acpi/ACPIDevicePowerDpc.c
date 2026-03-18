/*
 * XREFs of ACPIDevicePowerDpc @ 0x140019030
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x140018ADC (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x140018E98 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDeviceCompleteRequest @ 0x140019A30 (ACPIDeviceCompleteRequest.c)
 *     ACPIDeviceRecordDependencies @ 0x140019E04 (ACPIDeviceRecordDependencies.c)
 *     ACPIInternalMovePowerList @ 0x14001A170 (ACPIInternalMovePowerList.c)
 *     ACPIDevicePowerProcessBlockedItems @ 0x14001A214 (ACPIDevicePowerProcessBlockedItems.c)
 *     ACPIDeviceRecordBlockedOnPhase3List @ 0x14001A2AC (ACPIDeviceRecordBlockedOnPhase3List.c)
 *     ACPIIsPowerRequestBlocked @ 0x14001A394 (ACPIIsPowerRequestBlocked.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x14001AB44 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x14001AD90 (ACPIDevicePowerProcessPhase3.c)
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     _ACPIInternalError @ 0x14004B798 (_ACPIInternalError.c)
 *     ACPIMovePowerListUnblockedItems @ 0x14005D480 (ACPIMovePowerListUnblockedItems.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIDevicePowerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  PVOID *v5; // rdx
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 *v8; // r8
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  PVOID *v14; // rdx
  PVOID *v15; // rcx
  PVOID *v16; // r8
  int v17; // r9d
  _DWORD *v18; // rax
  bool v19; // zf
  __int64 v20; // rax
  PVOID **v21; // rcx
  PVOID *v22; // rbx
  char v23; // r15
  PVOID *v24; // r12
  PVOID *v25; // r14
  PVOID *v26; // rdi
  unsigned __int32 v27; // eax
  unsigned __int32 v28; // esi
  __int64 v29; // rdx
  PVOID *v30; // rbx
  char v31; // r15
  PVOID *v32; // rbx
  PVOID *v33; // r14
  PVOID *v34; // rsi
  PVOID *v35; // rdi
  unsigned __int32 v36; // eax
  __int64 v37; // rdx
  PVOID **v38; // rcx
  PVOID *v39; // rbx
  int v40; // eax
  int v41; // eax
  __int64 *v42; // rcx
  __int64 *v43; // rdx
  __int64 *v44; // r8
  int v45; // r9d
  _DWORD *v46; // rax
  bool v47; // zf
  __int64 v48; // r8
  __int64 v49; // rax
  _QWORD *v50; // rdx
  int v51; // eax
  PVOID *v52; // rax
  PVOID **v53; // rcx
  PVOID **v54; // rax
  PVOID *v55; // r12
  PVOID *v56; // r14
  PVOID *v57; // rdi
  unsigned __int32 v58; // eax
  unsigned __int32 v59; // esi
  __int64 v60; // rdx
  PVOID *v61; // rax
  PVOID **v62; // rcx
  PVOID **v63; // rax
  PVOID *v64; // rax
  PVOID **v65; // rcx
  PVOID **v66; // rax
  int v67; // eax
  __int64 *v68; // rcx
  __int64 *v69; // rax
  PVOID Entry; // [rsp+38h] [rbp-18h] BYREF
  PVOID *p_Entry; // [rsp+40h] [rbp-10h]

  p_Entry = &Entry;
  Entry = &Entry;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  v4 = AcpiPowerDpcFlags;
  v5 = &AcpiPowerPhase5List;
  if ( (AcpiPowerDpcFlags & 2) != 0 )
  {
    do
    {
      v6 = (__int64 *)AcpiPowerQueueList;
      AcpiPowerDpcFlags = v4 & 0xFFFFFFFD;
      if ( (__int64 *)AcpiPowerQueueList != &AcpiPowerQueueList )
      {
        do
        {
          v7 = v6;
          v8 = v6;
          v6 = (__int64 *)*v6;
          if ( !*((_DWORD *)v7 + 12) )
          {
            v9 = *(_DWORD *)(v7[5] + 740);
            if ( v9 > 0 )
            {
              v67 = *((_DWORD *)v7 + 14);
              if ( (v67 & 0x2000000) == 0 )
              {
                *((_DWORD *)v7 + 14) = v67 | 0x2000000;
                _InterlockedAdd(&AcpiPowerCurrentPagingPathTransitions, 1u);
              }
            }
            else if ( !v9 )
            {
              v10 = *((_DWORD *)v7 + 14);
              if ( (v10 & 0x2000000) != 0 )
              {
                *((_DWORD *)v7 + 14) = v10 & 0xFDFFFFFF;
                _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
              }
            }
          }
          _InterlockedExchange((volatile __int32 *)v8 + 52, 3);
        }
        while ( v6 != &AcpiPowerQueueList );
        v11 = AcpiPowerQueueList;
        if ( (__int64 *)AcpiPowerQueueList != &AcpiPowerQueueList )
        {
          v12 = qword_140090C48;
          v13 = p_Entry;
          *(_QWORD *)qword_140090C48 = &Entry;
          p_Entry = (PVOID *)v12;
          *(_QWORD *)(v11 + 8) = v13;
          *v13 = v11;
          qword_140090C48 = (__int64)&AcpiPowerQueueList;
          AcpiPowerQueueList = (__int64)&AcpiPowerQueueList;
        }
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
      if ( (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List )
      {
        if ( (__int64 *)AcpiPowerBlockedOnPhase3List != &AcpiPowerBlockedOnPhase3List )
          ACPIInternalMovePowerList(&AcpiPowerBlockedOnPhase3List, &Entry);
      }
      else if ( Entry != &Entry )
      {
        ACPIDeviceRecordBlockedOnPhase3List(&Entry);
      }
      if ( Entry != &Entry )
      {
        ACPIDeviceRecordDependencies(&Entry);
        v14 = (PVOID *)Entry;
        if ( Entry != &Entry )
        {
          while ( 1 )
          {
            v15 = v14;
            v16 = v14;
            v14 = (PVOID *)*v14;
            if ( !*((_DWORD *)v15 + 12) )
            {
              v17 = *((_DWORD *)v15[5] + 185);
              v18 = v15 + 7;
              v19 = v17 == 0;
              if ( v17 <= 0 )
                goto LABEL_18;
              if ( (*v18 & 0x2000000) != 0 )
              {
                v19 = v17 == 0;
LABEL_18:
                if ( v19 && (*v18 & 0x2000000) != 0 )
                {
                  *v18 &= ~0x2000000u;
                  _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
                }
                goto LABEL_21;
              }
              *v18 |= 0x2000000u;
              _InterlockedAdd(&AcpiPowerCurrentPagingPathTransitions, 1u);
            }
LABEL_21:
            _InterlockedExchange((volatile __int32 *)v16 + 52, 3);
            if ( v14 == &Entry )
            {
              v14 = (PVOID *)Entry;
              break;
            }
          }
        }
        if ( v14 != &Entry )
        {
          v20 = (__int64)p_Entry;
          v21 = (PVOID **)qword_140090C78;
          *p_Entry = &AcpiPowerPhase0List;
          qword_140090C78 = v20;
          v14[1] = v21;
          *v21 = v14;
          p_Entry = &Entry;
          Entry = &Entry;
        }
      }
      if ( (__int64 *)AcpiPowerBlockedOnDependencyList != &AcpiPowerBlockedOnDependencyList )
        ACPIDevicePowerProcessBlockedItems();
      v22 = (PVOID *)AcpiPowerPhase0List;
      if ( AcpiPowerPhase0List != &AcpiPowerPhase0List )
      {
        v23 = 1;
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v24 = v22;
              if ( v22 == &AcpiPowerPhase0List )
              {
                if ( v23 )
                  ACPIInternalMovePowerList(&AcpiPowerPhase0List, &AcpiPowerPhase1List);
                goto LABEL_37;
              }
              v25 = (PVOID *)*v22;
              v26 = v22;
              v27 = _InterlockedCompareExchange((volatile signed __int32 *)v22 + 52, 1, 1);
              v28 = v27;
              if ( v27 >= 5 )
LABEL_136:
                ACPIInternalError(0xC17D7uLL);
              _mm_lfence();
              v29 = AcpiDevicePowerProcessPhase0Dispatch[v27];
              if ( !v29 )
                break;
              _InterlockedCompareExchange((volatile signed __int32 *)v22 + 52, 1, v27);
              if ( (*(int (__fastcall **)(PVOID *))(v29 + 8LL * *((int *)v22 + 12)))(v22) < 0 )
                v22 = v25;
            }
            v22 = v25;
            if ( v27 != 1 )
              break;
            if ( !(unsigned __int8)ACPIIsPowerRequestBlocked(v26) )
              goto LABEL_102;
            v61 = (PVOID *)*v24;
            if ( *((PVOID **)*v24 + 1) != v26
              || (v62 = (PVOID **)v26[1], *v62 != v26)
              || (*v62 = v61,
                  v61[1] = v62,
                  v26[12] = &AcpiPowerPhase0List,
                  v63 = (PVOID **)qword_140090C58,
                  *(__int64 **)qword_140090C58 != &AcpiPowerBlockedOnDependencyList) )
            {
LABEL_113:
              __fastfail(3u);
            }
            *v24 = &AcpiPowerBlockedOnDependencyList;
            v26[1] = v63;
            *v63 = v26;
            qword_140090C58 = (__int64)v26;
          }
          if ( v27 )
          {
LABEL_102:
            v23 = 0;
            if ( v28 == 2 )
              ACPIDeviceCompleteRequest(v26);
          }
        }
      }
LABEL_37:
      v30 = (PVOID *)AcpiPowerPhase1List;
      if ( AcpiPowerPhase1List == &AcpiPowerPhase1List )
        goto LABEL_42;
      if ( AcpiPowerPhase0List == &AcpiPowerPhase0List )
      {
        v31 = 1;
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v55 = v30;
              if ( v30 == &AcpiPowerPhase1List )
              {
                if ( v31 )
                  ACPIInternalMovePowerList(&AcpiPowerPhase1List, &AcpiPowerPhase2List);
LABEL_42:
                if ( AcpiPowerPhase0List == &AcpiPowerPhase0List
                  && AcpiPowerPhase1List == &AcpiPowerPhase1List
                  && (__int64 *)AcpiPowerPhase2List != &AcpiPowerPhase2List )
                {
                  v51 = ACPIDevicePowerProcessGenericPhase(
                          &AcpiPowerPhase2List,
                          (__int64)&AcpiDevicePowerProcessPhase2Dispatch,
                          7u,
                          0);
                  if ( v51 >= 0 && v51 != 259 )
                    ACPIInternalMovePowerList(&AcpiPowerPhase2List, &AcpiPowerPhase3List);
                }
                goto LABEL_44;
              }
              v56 = (PVOID *)*v30;
              v57 = v30;
              v58 = _InterlockedCompareExchange((volatile signed __int32 *)v30 + 52, 1, 1);
              v59 = v58;
              if ( v58 >= 7 )
                goto LABEL_136;
              _mm_lfence();
              v60 = AcpiDevicePowerProcessPhase1Dispatch[v58];
              if ( !v60 )
                break;
              _InterlockedCompareExchange((volatile signed __int32 *)v30 + 52, 1, v58);
              if ( (*(int (__fastcall **)(PVOID *))(v60 + 8LL * *((int *)v30 + 12)))(v30) < 0 )
                v30 = v56;
            }
            v30 = v56;
            if ( v58 != 1 )
              break;
            if ( !(unsigned __int8)ACPIIsPowerRequestBlocked(v57) )
              goto LABEL_111;
            v64 = (PVOID *)*v55;
            if ( *((PVOID **)*v55 + 1) != v57 )
              goto LABEL_113;
            v65 = (PVOID **)v57[1];
            if ( *v65 != v57 )
              goto LABEL_113;
            *v65 = v64;
            v64[1] = v65;
            v57[12] = &AcpiPowerPhase1List;
            v66 = (PVOID **)qword_140090C58;
            if ( *(__int64 **)qword_140090C58 != &AcpiPowerBlockedOnDependencyList )
              goto LABEL_113;
            *v55 = &AcpiPowerBlockedOnDependencyList;
            v57[1] = v66;
            *v66 = v57;
            qword_140090C58 = (__int64)v57;
          }
          if ( v58 )
          {
LABEL_111:
            v31 = 0;
            if ( v59 == 2 )
              ACPIDeviceCompleteRequest(v57);
          }
        }
      }
LABEL_44:
      if ( AcpiPowerPhase0List == &AcpiPowerPhase0List
        && AcpiPowerPhase1List == &AcpiPowerPhase1List
        && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List
        && (__int64 *)AcpiPowerPhase3List != &AcpiPowerPhase3List )
      {
        v40 = ACPIDevicePowerProcessPhase3();
        if ( v40 >= 0 )
        {
          if ( v40 == 259 )
          {
            if ( ACPIIsPhase3ListEmptyOfUnblockedItems() )
            {
              ACPIMovePowerListUnblockedItems(&AcpiPowerPhase3List);
              v68 = (__int64 *)AcpiPowerPhase3List;
              while ( v68 != &AcpiPowerPhase3List )
              {
                v69 = v68;
                v68 = (__int64 *)*v68;
                *((_DWORD *)v69 + 14) &= 0xEEFFFFFF;
              }
            }
          }
          else
          {
            ACPIInternalMovePowerList(&AcpiPowerPhase3List, &AcpiPowerPhase4List);
          }
        }
      }
      if ( AcpiPowerPhase4List != &AcpiPowerPhase4List )
      {
        v41 = ACPIDevicePowerProcessPhase4();
        if ( v41 >= 0 && v41 != 259 )
          ACPIInternalMovePowerList(&AcpiPowerPhase4List, &AcpiPowerPhase5List);
      }
      v32 = (PVOID *)AcpiPowerPhase5List;
      if ( AcpiPowerPhase5List != &AcpiPowerPhase5List )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v33 = v32;
            if ( v32 == &AcpiPowerPhase5List )
              goto LABEL_53;
            v34 = (PVOID *)*v32;
            v35 = v32;
            v36 = _InterlockedCompareExchange((volatile signed __int32 *)v32 + 52, 1, 1);
            if ( v36 >= 9 )
              goto LABEL_136;
            _mm_lfence();
            v37 = AcpiDevicePowerProcessPhase5Dispatch[v36];
            if ( !v37 )
              break;
            _InterlockedCompareExchange((volatile signed __int32 *)v32 + 52, 1, v36);
            if ( (*(int (__fastcall **)(PVOID *))(v37 + 8LL * *((int *)v32 + 12)))(v32) < 0 )
            {
              v32 = v34;
              goto LABEL_52;
            }
          }
          v32 = v34;
          if ( v36 == 1 )
          {
            if ( (unsigned __int8)ACPIIsPowerRequestBlocked(v35) )
            {
              v52 = (PVOID *)*v33;
              if ( *((PVOID **)*v33 + 1) != v35 )
                goto LABEL_113;
              v53 = (PVOID **)v35[1];
              if ( *v53 != v35 )
                goto LABEL_113;
              *v53 = v52;
              v52[1] = v53;
              v35[12] = &AcpiPowerPhase5List;
              v54 = (PVOID **)qword_140090C58;
              if ( *(__int64 **)qword_140090C58 != &AcpiPowerBlockedOnDependencyList )
                goto LABEL_113;
              *v33 = &AcpiPowerBlockedOnDependencyList;
              v35[1] = v54;
              *v54 = v35;
              qword_140090C58 = (__int64)v35;
            }
          }
          else if ( v36 == 2 || !v36 )
          {
LABEL_52:
            ACPIDeviceCompleteRequest(v35);
          }
        }
      }
LABEL_53:
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
      v4 = AcpiPowerDpcFlags;
    }
    while ( (AcpiPowerDpcFlags & 2) != 0 );
    v5 = &AcpiPowerPhase5List;
  }
  if ( (__int64 *)AcpiPowerBlockedOnDependencyList == &AcpiPowerBlockedOnDependencyList
    && AcpiPowerPhase0List == &AcpiPowerPhase0List
    && AcpiPowerPhase1List == &AcpiPowerPhase1List
    && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List
    && (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List
    && AcpiPowerPhase4List == &AcpiPowerPhase4List
    && AcpiPowerPhase5List == &AcpiPowerPhase5List )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v5,
        10,
        51,
        (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids);
    }
    v42 = (__int64 *)AcpiPowerSynchronizeList;
    if ( (__int64 *)AcpiPowerSynchronizeList != &AcpiPowerSynchronizeList )
    {
      while ( 1 )
      {
        v43 = v42;
        v44 = v42;
        v42 = (__int64 *)*v42;
        if ( !*((_DWORD *)v43 + 12) )
        {
          v45 = *(_DWORD *)(v43[5] + 740);
          v46 = v43 + 7;
          v47 = v45 == 0;
          if ( v45 <= 0 )
            goto LABEL_85;
          if ( (*v46 & 0x2000000) != 0 )
          {
            v47 = v45 == 0;
LABEL_85:
            if ( v47 && (*v46 & 0x2000000) != 0 )
            {
              *v46 &= ~0x2000000u;
              _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
            }
            goto LABEL_88;
          }
          *v46 |= 0x2000000u;
          _InterlockedAdd(&AcpiPowerCurrentPagingPathTransitions, 1u);
        }
LABEL_88:
        _InterlockedExchange((volatile __int32 *)v44 + 52, 3);
        if ( v42 == &AcpiPowerSynchronizeList )
        {
          v48 = AcpiPowerSynchronizeList;
          if ( (__int64 *)AcpiPowerSynchronizeList != &AcpiPowerSynchronizeList )
          {
            v49 = qword_140090CE8;
            v50 = p_Entry;
            *(_QWORD *)qword_140090CE8 = &Entry;
            p_Entry = (PVOID *)v49;
            *(_QWORD *)(v48 + 8) = v50;
            *v50 = v48;
            qword_140090CE8 = (__int64)&AcpiPowerSynchronizeList;
            AcpiPowerSynchronizeList = (__int64)&AcpiPowerSynchronizeList;
          }
          break;
        }
      }
    }
  }
  AcpiPowerDpcFlags &= ~1u;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  v38 = (PVOID **)Entry;
  if ( Entry != &Entry )
  {
    do
    {
      v39 = *v38;
      ACPIDeviceCompleteRequest(v38);
      v38 = (PVOID **)v39;
    }
    while ( v39 != &Entry );
  }
}
