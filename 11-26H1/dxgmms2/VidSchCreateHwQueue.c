/*
 * XREFs of VidSchCreateHwQueue @ 0x14004A8B0
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     VidSchTerminateHwQueue @ 0x140005B00 (VidSchTerminateHwQueue.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x14002CD84 (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiInterlockedInsertTailList @ 0x14002E870 (VidSchiInterlockedInsertTailList.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140039044 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EE84 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     VidSchiCreateNativeFenceLog @ 0x1400476F8 (VidSchiCreateNativeFenceLog.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x140106870 (VidSchiEnsureRootPageTableUpdated.c)
 */

__int64 __fastcall VidSchCreateHwQueue(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v5; // r13
  int NativeFenceLog; // edi
  int v9; // esi
  __int64 v10; // rax
  bool v11; // si
  char v12; // r12
  __int64 Pool2; // rax
  __int64 v14; // rbx
  __int64 result; // rax
  int v16; // eax
  bool v17; // al
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  bool v26; // al
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // eax
  int v30; // r14d
  __int64 v31; // r15
  __int64 v32; // rax
  struct _VIDSCH_QUEUE_PACKET *v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int64 v38; // [rsp+48h] [rbp-38h] BYREF
  int v39; // [rsp+50h] [rbp-30h]
  int v40; // [rsp+54h] [rbp-2Ch]
  __int64 v41; // [rsp+58h] [rbp-28h]
  __int128 v42; // [rsp+60h] [rbp-20h]
  __int64 v43; // [rsp+70h] [rbp-10h]
  __int64 v44; // [rsp+78h] [rbp-8h]
  __int64 v46; // [rsp+C8h] [rbp+48h]
  bool v48; // [rsp+E0h] [rbp+60h]

  v5 = *(_QWORD *)(a2 + 8);
  NativeFenceLog = 0;
  if ( a3 )
    v9 = *(_DWORD *)(a3 + 4);
  else
    v9 = *(_DWORD *)(a5 + 4);
  v10 = a3;
  v11 = (v9 & 8) != 0;
  if ( !a3 )
    v10 = a5;
  v12 = *(_BYTE *)(v10 + 4) & 1;
  v46 = *(_QWORD *)(v5 + 40);
  v48 = a5 != 0;
  Pool2 = ExAllocatePool2(64LL, 328LL, 1684105558LL);
  v14 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 2419;
    return result;
  }
  *(_DWORD *)Pool2 = 1684105558;
  *(_QWORD *)(Pool2 + 48) = a1;
  *(_QWORD *)(Pool2 + 128) = KeGetCurrentThread();
  v16 = *(_DWORD *)(a2 + 56);
  *(_QWORD *)(v14 + 40) = a2;
  v17 = (v16 & 0x20) != 0 || (*(_DWORD *)(v5 + 56) & 4) != 0 || v12;
  v18 = *(_QWORD *)(a2 + 24);
  *(_BYTE *)(v14 + 144) = v17;
  *(_BYTE *)(v14 + 272) = v48;
  *(_BYTE *)(v14 + 146) = v11;
  if ( v18 )
  {
    v19 = *(_DWORD *)(v18 + 144) - 12;
    if ( !v19
      || (v20 = v19 - 1) == 0
      || (v21 = v20 - 1) == 0
      || (v22 = v21 - 2) == 0
      || (v23 = v22 - 1) == 0
      || v23 == 4 )
    {
      *(_BYTE *)(v14 + 147) = 1;
    }
  }
  *(_QWORD *)(v14 + 168) = v14 + 160;
  *(_QWORD *)(v14 + 160) = v14 + 160;
  *(_QWORD *)(v14 + 208) = v14 + 160;
  *(_QWORD *)(v14 + 224) = v14 + 216;
  *(_QWORD *)(v14 + 216) = v14 + 216;
  *(_QWORD *)(v14 + 248) = v14 + 240;
  *(_QWORD *)(v14 + 240) = v14 + 240;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v14 + 120)) == 1 )
    VidSchiIncrementHwContextReference(*(struct VIDSCH_HW_CONTEXT **)(v14 + 40));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v46 + 2016), &LockHandle);
  v24 = *(_QWORD **)(a2 + 304);
  v25 = (_QWORD *)(v14 + 8);
  if ( *v24 != a2 + 296 )
    __fastfail(3u);
  *v25 = a2 + 296;
  *(_QWORD *)(v14 + 16) = v24;
  *v24 = v25;
  *(_QWORD *)(a2 + 304) = v25;
  v26 = !*(_BYTE *)(v14 + 144) && *(_DWORD *)(a2 + 104);
  *(_BYTE *)(v14 + 145) = v26;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a1 )
  {
    *(_QWORD *)(v14 + 112) = *(_QWORD *)(a1 + 32);
  }
  else if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    v27 = *(_QWORD *)(a2 + 48);
    v28 = *(_QWORD *)(v46 + 8);
    v39 = *(_DWORD *)(a3 + 4);
    v41 = *(_QWORD *)(a3 + 16);
    v40 = *(_DWORD *)(a3 + 8);
    v43 = *(_QWORD *)(a3 + 40);
    v42 = 0LL;
    v44 = 0LL;
    v38 = 0LL;
    NativeFenceLog = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))DxgCoreInterface[22])(v28, v27, &v38);
    if ( NativeFenceLog < 0 )
      goto LABEL_55;
    *(_QWORD *)(v14 + 112) = v38;
  }
  else
  {
    *(_QWORD *)(v14 + 112) = 0LL;
  }
  if ( !*(_BYTE *)(v14 + 272) && *(_BYTE *)(v46 + 7082) != 1 && !v11
    || (NativeFenceLog = VidSchiCreateNativeFenceLog(v14), NativeFenceLog >= 0) )
  {
    if ( *(_BYTE *)(v14 + 272) )
      VidSchiEnsureRootPageTableUpdated(*(void **)(v14 + 40));
    v29 = 1136;
    if ( (unsigned int)(*(_DWORD *)(v46 + 160) * (72 * *(_DWORD *)(v46 + 84) + 224) + 8 * (*(_DWORD *)(v46 + 84) + 113)) > 0x470 )
      v29 = *(_DWORD *)(v46 + 160) * (72 * *(_DWORD *)(v46 + 84) + 224) + 8 * (*(_DWORD *)(v46 + 84) + 113);
    v30 = 0;
    v31 = v29;
    do
    {
      v32 = ExAllocatePool2(64LL, v31, 895576406LL);
      v33 = (struct _VIDSCH_QUEUE_PACKET *)v32;
      if ( !v32 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 2619;
        NativeFenceLog = -1073741801;
        goto LABEL_55;
      }
      VidSchiInterlockedInsertTailList(
        (KSPIN_LOCK *)(v46 + 2024),
        v14 + 240,
        (_QWORD *)(v32 + 8),
        (_DWORD *)(v14 + 256));
      VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v14, v33);
      ++v30;
    }
    while ( v30 < 5 );
    if ( !a1 && bTracingEnabled )
    {
      v35 = *(_QWORD *)(v14 + 40);
      v36 = *(_QWORD *)(v35 + 24);
      if ( !v36 || (*(_DWORD *)(v35 + 56) & 0x40) != 0 )
        v36 = *(_QWORD *)(v14 + 40);
      if ( (byte_14008A201 & 8) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(v35, &EventCreateHwQueue, v34, v36, 0LL, v14);
    }
    *a4 = v14;
    return (unsigned int)NativeFenceLog;
  }
LABEL_55:
  VidSchTerminateHwQueue((struct VIDSCH_HW_QUEUE *)v14);
  *a4 = 0LL;
  return (unsigned int)NativeFenceLog;
}
