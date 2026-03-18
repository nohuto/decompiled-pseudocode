/*
 * XREFs of ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140006C44
 * Callers:
 *     VidSchSignalSyncObjectsFromCpu @ 0x1400069F0 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?VidMmReferenceDisplayingAllocation@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DISPLAYING_ALLOCATION@@_K2@Z @ 0x140006B2C (-VidMmReferenceDisplayingAllocation@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DISPLAYING_ALLOCATIO.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A798 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14001F7AC (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x14002F828 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidMmUnreferencePrimaryAllocation@@YAXPEAVHwQueueStagingList@@PEAUVIDMM_ALLOC@@_N2_K3PEAI@Z @ 0x140039F80 (-VidMmUnreferencePrimaryAllocation@@YAXPEAVHwQueueStagingList@@PEAUVIDMM_ALLOC@@_N2_K3PEAI@Z.c)
 *     ?VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_VIDSCH_FLIP_STATUS@@PEAVHwQueueStagingList@@@Z @ 0x140049C10 (-VidSchiSignalRuntimeFenceForCompletedFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_E.c)
 * Callees:
 *     McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer @ 0x140011498 (McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     ??1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ @ 0x1400129BC (--1TraceDxgkSignalSynchronizationObjectArrays@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x14003D1DC (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400448F4 (VidSchiUnwaitNativeFenceWaiters.c)
 *     VidSchiUpdateNativeFenceCurrentValue @ 0x140049328 (VidSchiUpdateNativeFenceCurrentValue.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall VidSchiSignalSyncObjectsFromCpu(
        struct HwQueueStagingList *a1,
        unsigned int a2,
        struct _VIDSCH_SYNC_OBJECT **a3,
        struct _D3DDDICB_SIGNALFLAGS a4,
        const unsigned __int64 *a5,
        struct VIDSCH_HW_QUEUE **a6)
{
  const unsigned __int64 *v6; // r15
  unsigned int v7; // r12d
  struct _VIDSCH_SYNC_OBJECT **v8; // r13
  unsigned __int64 v9; // rdi
  int v10; // ebx
  __int64 i; // r14
  char v12; // si
  signed __int64 v13; // r13
  const unsigned __int64 *v14; // r12
  unsigned __int64 v15; // r14
  __int64 v16; // rcx
  int v17; // edx
  unsigned int *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rsi
  int v21; // edx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r10
  _QWORD *v25; // rcx
  __int64 v26; // rcx
  _BYTE *Pool2; // rax
  struct _VIDSCH_SYNC_OBJECT *v28; // rcx
  char *v29; // rcx
  _BYTE *v30; // rax
  __int64 v32; // r10
  struct _VIDSCH_SYNC_OBJECT **v33; // rdx
  unsigned __int64 v34; // r11
  signed __int64 v35; // r9
  __int64 v36; // rcx
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  int v40; // eax
  unsigned __int64 v41; // rcx
  char v42; // cl
  int v43; // ecx
  int v44; // r8d
  __int64 v45; // r15
  unsigned __int64 v46; // r8
  __int64 v47; // r11
  __int64 v48; // rcx
  __int64 v49; // rdx
  unsigned __int64 v50; // rbx
  HwQueueStagingList *v51; // rdi
  __int64 v52; // [rsp+20h] [rbp-E0h]
  char v53; // [rsp+50h] [rbp-B0h]
  _QWORD v54[2]; // [rsp+58h] [rbp-A8h] BYREF
  HwQueueStagingList *v55; // [rsp+68h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _VIDSCH_SYNC_OBJECT **v57; // [rsp+88h] [rbp-78h]
  const unsigned __int64 *v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  _BYTE *v60; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v61[16]; // [rsp+A8h] [rbp-58h] BYREF
  int v62; // [rsp+B8h] [rbp-48h]
  _BYTE *v63; // [rsp+C0h] [rbp-40h]
  char *v64; // [rsp+C8h] [rbp-38h]
  char v65[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v66; // [rsp+D8h] [rbp-28h]
  char *v67; // [rsp+E0h] [rbp-20h]
  _BYTE *v68; // [rsp+E8h] [rbp-18h]
  _BYTE v69[16]; // [rsp+F0h] [rbp-10h] BYREF
  int v70; // [rsp+100h] [rbp+0h]
  _BYTE *v71; // [rsp+108h] [rbp+8h]

  v6 = a5;
  v7 = 0;
  v57 = a3;
  v8 = a3;
  v9 = a2;
  v55 = a1;
  v58 = a5;
  v54[1] = a6;
  v59 = 0LL;
  v10 = *(_BYTE *)&a4.0 & 4;
  if ( (*(_BYTE *)&a4.0 & 4) == 0 )
  {
    for ( i = 0LL; (unsigned int)i < (unsigned int)v9; i = (unsigned int)(i + 1) )
    {
      v28 = v8[i];
      if ( !*((_BYTE *)v28 + 29) && (*((_DWORD *)v28 + 13) & 0x7FFFFFFF) != 0x10 )
      {
        v39 = a5[i];
        LOBYTE(a3) = *((_BYTE *)v28 + 30);
        if ( *((_BYTE *)v28 + 28) )
        {
          v41 = *(_QWORD *)(*((_QWORD *)v28 + 43) + 40LL);
        }
        else
        {
          v40 = *((_DWORD *)v28 + 12);
          if ( v40 == 2 )
          {
            v41 = *((_QWORD *)v28 + 9);
          }
          else if ( v40 == 6 )
          {
            v41 = *((_QWORD *)v28 + 25);
          }
          else
          {
            v41 = *((_QWORD *)v28 + 12);
          }
        }
        if ( (_BYTE)a3 )
        {
          if ( v39 < v41 )
          {
            WdLogSingleEntry2(3LL, v39, v41);
            WdLogGlobalForLineNumber = 6019;
LABEL_93:
            v7 = -1073741811;
            WdLogSingleEntry2(1LL, a5[i], -1073741811LL);
            v52 = a5[i];
            WdLogGlobalForLineNumber = 11612;
            DxgkLogInternalTriageEvent(
              v43,
              0x40000,
              v44,
              (unsigned int)L"Invalid monitored fence value 0x%I64x, returning 0x%I64x",
              v52,
              -1073741811LL,
              0LL,
              0LL);
            return v7;
          }
          if ( v39 == v41 )
          {
            WdLogSingleEntry1(3LL, v39);
            WdLogGlobalForLineNumber = 6028;
          }
        }
        else
        {
          if ( (int)v41 - (int)v39 > 0 )
          {
            WdLogSingleEntry2(3LL, (unsigned int)v39, (unsigned int)v41);
            WdLogGlobalForLineNumber = 6038;
            goto LABEL_93;
          }
          if ( (_DWORD)v41 == (_DWORD)v39 )
          {
            WdLogSingleEntry1(3LL, (unsigned int)v39);
            WdLogGlobalForLineNumber = 6047;
          }
        }
      }
    }
  }
  v12 = 1;
  v53 = 1;
  if ( !(_DWORD)v9 )
    goto LABEL_29;
  v54[0] = v9;
  v13 = (char *)v8 - (char *)a5;
  v14 = a5;
  v15 = v9;
  do
  {
    v16 = *(const unsigned __int64 *)((char *)v14 + v13);
    v17 = *(_DWORD *)(v16 + 48);
    if ( !*(_BYTE *)(v16 + 29) )
    {
      if ( v17 == 6 )
      {
        v19 = *(_QWORD *)(*(unsigned int *)(v16 + 80) + *(_QWORD *)(*(_QWORD *)(v16 + 64) + 192LL));
      }
      else
      {
        v18 = *(unsigned int **)(v16 + 72);
        if ( *(_BYTE *)(v16 + 30) )
          v19 = *(_QWORD *)v18;
        else
          v19 = *v18;
      }
      WdLogSingleEntry3(4LL, *(const unsigned __int64 *)((char *)v14 + v13), v19, *v14);
      v20 = *(const unsigned __int64 *)((char *)v14 + v13);
      WdLogGlobalForLineNumber = 11650;
      v21 = *(_DWORD *)(v20 + 48);
      if ( v21 == 6 )
      {
        v37 = *v14;
        if ( !*(_BYTE *)(v20 + 28) )
        {
          *(_QWORD *)(v20 + 200) = v37;
          v15 = v54[0];
LABEL_19:
          v24 = *(const unsigned __int64 *)((char *)v14 + v13);
          a3 = (struct _VIDSCH_SYNC_OBJECT **)*v14;
          if ( *(_DWORD *)(v24 + 48) == 6 )
          {
            if ( v10
              || (unsigned __int64)a3 > *(_QWORD *)(*(unsigned int *)(v24 + 80)
                                                  + *(_QWORD *)(*(_QWORD *)(v24 + 64) + 192LL)) )
            {
              v47 = *(_QWORD *)(v24 + 8);
              v48 = *(unsigned int *)(v24 + 80);
              v49 = *(_QWORD *)(*(_QWORD *)(v24 + 64) + 192LL);
              if ( *(_BYTE *)(v47 + 7082) )
              {
                *(_QWORD *)(v48 + v49) = a3;
              }
              else
              {
                LODWORD(v54[0]) = 0;
                VidSchiUpdateNativeFenceCurrentValue(v47, *(_QWORD *)(v24 + 192), (_DWORD)a3, v48 + v49, (__int64)v54);
              }
            }
          }
          else
          {
            v25 = *(_QWORD **)(v24 + 72);
            if ( *(_BYTE *)(v24 + 30) )
            {
              if ( v10 || (unsigned __int64)a3 > *v25 )
                *v25 = a3;
            }
            else if ( v10 || *(_DWORD *)v25 - (int)a3 < 0 )
            {
              *(_DWORD *)v25 = (_DWORD)a3;
            }
          }
          v26 = *(const unsigned __int64 *)((char *)v14 + v13);
          if ( *(_BYTE *)(v26 + 28) )
            VidSchiPropagateCrossAdapterSignal(*(_QWORD *)(v26 + 8), *(const unsigned __int64 *)((char *)v14 + v13));
          v12 = v53;
          goto LABEL_27;
        }
      }
      else
      {
        v53 = 0;
        if ( !*(_BYTE *)(v20 + 28) )
        {
          if ( !*(_BYTE *)(v20 + 31) || v10 )
          {
            v38 = *v14;
            if ( v21 == 2 )
              *(_QWORD *)(v20 + 72) = v38;
            else
              *(_QWORD *)(v20 + 96) = v38;
          }
          else
          {
            v22 = *v14;
            v23 = 72LL;
            if ( v21 != 2 )
              v23 = 96LL;
            if ( *(_QWORD *)(v23 + v20) < v22 )
            {
              if ( v21 == 2 )
                *(_QWORD *)(v20 + 72) = v22;
              else
                *(_QWORD *)(v20 + 96) = v22;
            }
          }
          goto LABEL_19;
        }
        v37 = *v14;
      }
      v45 = *(_QWORD *)(v20 + 344);
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v45 + 8), &LockHandle);
      v46 = *(_QWORD *)(v45 + 40);
      if ( v46 >= v37 )
      {
        WdLogSingleEntry3(3LL, *(_QWORD *)(v20 + 16), v46, v37);
        WdLogGlobalForLineNumber = 6247;
      }
      else
      {
        *(_QWORD *)(v45 + 40) = v37;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v15 = v54[0];
      goto LABEL_19;
    }
    v42 = 0;
    if ( v17 == 6 )
      v42 = v12;
    v12 = v42;
    v53 = v42;
LABEL_27:
    ++v14;
    v54[0] = --v15;
  }
  while ( v15 );
  v8 = v57;
  v6 = v58;
  v7 = v59;
LABEL_29:
  if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
  {
    v60 = 0LL;
    v62 = 0;
    v64 = 0LL;
    v66 = 0;
    v68 = 0LL;
    v70 = 0;
    if ( (unsigned int)v9 <= 2 )
    {
      Pool2 = v61;
      v60 = v61;
      if ( (_DWORD)v9 )
      {
        memset(v61, 0, 8 * v9);
        Pool2 = v60;
      }
LABEL_38:
      v62 = v9;
      v63 = Pool2;
      if ( (unsigned int)v9 > 2 )
        goto LABEL_60;
      v29 = v65;
      v64 = v65;
      if ( (_DWORD)v9 )
      {
        memset(v65, 0, 4 * v9);
        v29 = v64;
      }
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v9 >= 8 )
      {
        Pool2 = (_BYTE *)ExAllocatePool2(64LL, 8 * v9, 945908054LL);
        v60 = Pool2;
        goto LABEL_38;
      }
      v63 = 0LL;
LABEL_60:
      if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 4 )
      {
        v29 = 0LL;
        v67 = 0LL;
        goto LABEL_63;
      }
      v29 = (char *)ExAllocatePool2(64LL, 4 * v9, 945908054LL);
      v64 = v29;
    }
    v66 = v9;
    v67 = v29;
    if ( (unsigned int)v9 <= 2 )
    {
      v30 = v69;
      v68 = v69;
      if ( (_DWORD)v9 )
      {
        memset(v69, 0, 8 * v9);
        v30 = v68;
        goto LABEL_44;
      }
      goto LABEL_45;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 >= 8 )
    {
      v30 = (_BYTE *)ExAllocatePool2(64LL, 8 * v9, 945908054LL);
      v68 = v30;
LABEL_44:
      v29 = v67;
LABEL_45:
      v70 = v9;
    }
    else
    {
LABEL_63:
      v30 = 0LL;
    }
    v71 = v30;
    if ( v63 && v29 && v30 && (_DWORD)v9 )
    {
      v32 = 0LL;
      a3 = (struct _VIDSCH_SYNC_OBJECT **)((char *)v6 - (char *)v8);
      v33 = v8;
      v34 = v9;
      do
      {
        v35 = (char *)v33 - (char *)v8;
        *(_QWORD *)&v63[(char *)v33 - (char *)v8] = *((_QWORD *)*v33 + 2);
        *(_DWORD *)&v67[v32] = *((unsigned __int8 *)*v33 + 29);
        if ( v6 )
          v36 = *(__int64 *)((char *)a3 + (_QWORD)v33);
        else
          v36 = 0LL;
        v32 += 4LL;
        ++v33;
        *(_QWORD *)&v71[v35] = v36;
        --v34;
      }
      while ( v34 );
      v30 = v71;
      v29 = v67;
    }
    if ( v63 && v29 && v30 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0qPR0PR0XR0TR0_EtwWriteTransfer(
        (_DWORD)v29,
        (unsigned int)&EventVidSchiSignalSynchronizationObjectFromCpu,
        (_DWORD)a3,
        v9,
        (__int64)v8,
        (__int64)v63,
        (__int64)v30,
        (__int64)v29);
    TraceDxgkSignalSynchronizationObjectArrays::~TraceDxgkSignalSynchronizationObjectArrays((TraceDxgkSignalSynchronizationObjectArrays *)&v60);
  }
  if ( v12 )
  {
    if ( (_DWORD)v9 )
    {
      v50 = v9;
      v51 = v55;
      do
      {
        VidSchiUnwaitNativeFenceWaiters(v51, *v8++);
        --v50;
      }
      while ( v50 );
    }
  }
  else
  {
    VidSchiUnwaitMonitoredFences(v55);
  }
  return v7;
}
