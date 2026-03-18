/*
 * XREFs of ACPIDeviceCompleteRequest @ 0x140019A30
 * Callers:
 *     ACPIDevicePowerProcessGenericPhase @ 0x140018E98 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerDpc @ 0x140019030 (ACPIDevicePowerDpc.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x14001AB44 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessInvalid @ 0x14005D160 (ACPIDevicePowerProcessInvalid.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x14001B834 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIPowerScheduleDpc @ 0x140027488 (ACPIPowerScheduleDpc.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x140032B58 (ACPIDereferenceWaitWakePowerRequest.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIDeviceCompleteRequest(_QWORD *Entry)
{
  __int64 v1; // rdi
  const char *v2; // rax
  void (__fastcall *v3)(__int64, _QWORD, _QWORD); // rbp
  char v4; // r8
  const char *v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  _QWORD **v9; // rsi
  _QWORD *v10; // rax
  _QWORD **v11; // rsi
  _QWORD *v12; // rdx
  int v13; // eax
  int v14; // ecx
  KIRQL v15; // al
  _QWORD *v16; // rdx
  KIRQL v17; // r8
  PVOID *v18; // rcx
  _QWORD **v19; // rdx
  PVOID *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // r8
  _QWORD *v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rcx
  KIRQL v32; // si
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // [rsp+48h] [rbp-10h]

  v1 = Entry[5];
  v2 = byte_140075A82;
  v3 = (void (__fastcall *)(__int64, _QWORD, _QWORD))Entry[24];
  v4 = 0;
  v6 = byte_140075A82;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v38 = (__int64)v6;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      10,
      18,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      (char)Entry,
      *((_DWORD *)Entry + 64),
      v4,
      (__int64)v2,
      v38);
  }
  v8 = *((_DWORD *)Entry + 12);
  if ( !v8 || v8 == 2 )
  {
    v9 = (_QWORD **)(Entry + 8);
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 == v9 )
        break;
      v27 = v10 - 2;
      v28 = *(v10 - 2);
      if ( *(_QWORD **)(v28 + 8) != v10 - 2 )
        goto LABEL_26;
      v29 = (_QWORD *)*(v10 - 1);
      if ( (_QWORD *)*v29 != v27 )
        goto LABEL_26;
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      v27[1] = v27;
      *v27 = v27;
      v30 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 )
        goto LABEL_26;
      v31 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v31 != v10 )
        goto LABEL_26;
      *v31 = v30;
      *(_QWORD *)(v30 + 8) = v31;
      v10[1] = v10;
      *v10 = v10;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v27);
    }
    v11 = (_QWORD **)(Entry + 10);
    while ( 1 )
    {
      v12 = *v11;
      if ( *v11 == v11 )
        break;
      v22 = *v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 )
        goto LABEL_26;
      v23 = (_QWORD *)v12[1];
      if ( (_QWORD *)*v23 != v12 )
        goto LABEL_26;
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      v24 = v12 + 2;
      v12[1] = v12;
      *v12 = v12;
      v25 = v12[2];
      if ( *(_QWORD **)(v25 + 8) != v12 + 2 )
        goto LABEL_26;
      v26 = (_QWORD *)v12[3];
      if ( (_QWORD *)*v26 != v24 )
        goto LABEL_26;
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      v12[3] = v24;
      *v24 = v24;
      ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v12);
    }
    v13 = *(_DWORD *)(v1 + 384);
    if ( v13 )
    {
      if ( !*((_BYTE *)Entry + 52) && *((int *)Entry + 64) < 0 )
      {
        v32 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
        Entry[13] = *(unsigned int *)(v1 + 384);
        *((_BYTE *)Entry + 52) = 1;
        v33 = *Entry;
        if ( *(_QWORD **)(*Entry + 8LL) == Entry )
        {
          v34 = (_QWORD *)Entry[1];
          if ( (_QWORD *)*v34 == Entry )
          {
            *v34 = v33;
            *(_QWORD *)(v33 + 8) = v34;
            v35 = (_QWORD *)qword_140090C48;
            if ( *(__int64 **)qword_140090C48 == &AcpiPowerQueueList )
            {
              *Entry = &AcpiPowerQueueList;
              Entry[1] = v35;
              *v35 = Entry;
              qword_140090C48 = (__int64)Entry;
              ACPIPowerScheduleDpc();
              KeReleaseSpinLock(&AcpiPowerQueueLock, v32);
              return;
            }
          }
        }
        goto LABEL_26;
      }
      if ( v13 < *((_DWORD *)Entry + 26) )
        *((_DWORD *)Entry + 64) = 0;
    }
    v14 = *((_DWORD *)Entry + 14);
    if ( (v14 & 0x2000000) != 0 )
    {
      *((_DWORD *)Entry + 14) = v14 & 0xFDFFFFFF;
      _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
    }
  }
  if ( v3 )
    v3(v1, Entry[25], *((unsigned int *)Entry + 64));
  v15 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v16 = (_QWORD *)*Entry;
  v17 = v15;
  if ( *(_QWORD **)(*Entry + 8LL) != Entry )
    goto LABEL_26;
  v18 = (PVOID *)Entry[1];
  if ( *v18 != Entry )
    goto LABEL_26;
  *v18 = v16;
  v16[1] = v18;
  v19 = (_QWORD **)Entry[2];
  if ( v19[1] != Entry + 2 )
    goto LABEL_26;
  v20 = (PVOID *)Entry[3];
  if ( *v20 != Entry + 2 )
    goto LABEL_26;
  *v20 = v19;
  v19[1] = v20;
  if ( *((_DWORD *)Entry + 12) == 4 )
    goto LABEL_24;
  v21 = *(_QWORD *)(v1 + 584);
  if ( v21 == v1 + 584 )
  {
    *(_QWORD *)(v1 + 576) = 0LL;
    goto LABEL_24;
  }
  v36 = (_QWORD *)(v21 - 16);
  v37 = (_QWORD *)qword_140090C48;
  if ( *(__int64 **)qword_140090C48 != &AcpiPowerQueueList )
LABEL_26:
    __fastfail(3u);
  *v36 = &AcpiPowerQueueList;
  v36[1] = v37;
  *v37 = v36;
  qword_140090C48 = (__int64)v36;
  *(_QWORD *)(v1 + 576) = v36;
LABEL_24:
  KeReleaseSpinLock(&AcpiPowerQueueLock, v17);
  if ( *((_DWORD *)Entry + 12) == 2 )
    ACPIDereferenceWaitWakePowerRequest(Entry);
  else
    ExFreeToNPagedLookasideList(&RequestLookAsideList, Entry);
}
