/*
 * XREFs of VidSchSubmitWaitFromCpu @ 0x1400119F0
 * Callers:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUpdateNativeFenceMonitoredValue @ 0x14002EF10 (VidSchiUpdateNativeFenceMonitoredValue.c)
 *     ??_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z @ 0x14003895C (--_GVIDSCH_CPU_WAITER@@QEAAPEAXI@Z.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400448F4 (VidSchiUnwaitNativeFenceWaiters.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall VidSchSubmitWaitFromCpu(
        unsigned int a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        const void *a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // esi
  unsigned __int64 v9; // rdi
  unsigned int i; // ecx
  _BYTE *Pool2; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r15
  char v20; // cl
  char v21; // al
  char v22; // cl
  char v23; // al
  char v24; // r13
  struct _VIDSCH_SYNC_OBJECT **v25; // rdx
  struct _VIDSCH_SYNC_OBJECT **v26; // r8
  struct _VIDSCH_SYNC_OBJECT *v27; // r10
  _QWORD *v28; // rcx
  struct _VIDSCH_SYNC_OBJECT *v29; // rdx
  PVOID v30; // rcx
  unsigned __int64 v32; // r11
  bool v33; // zf
  unsigned int *v34; // rax
  unsigned __int64 v35; // r9
  int v36; // eax
  unsigned __int64 v37; // rcx
  __int64 v38; // r9
  int v39; // eax
  __int64 *v40; // rdx
  __int64 v41; // rax
  __int64 **v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r9
  __int64 v45; // rax
  struct _VIDSCH_SYNC_OBJECT **v47; // [rsp+38h] [rbp-91h]
  struct _KEVENT *v49; // [rsp+48h] [rbp-81h] BYREF
  _QWORD v50[2]; // [rsp+50h] [rbp-79h] BYREF
  char v51; // [rsp+60h] [rbp-69h]
  int v52; // [rsp+64h] [rbp-65h]
  unsigned __int64 v53; // [rsp+68h] [rbp-61h]
  __int64 *v54; // [rsp+70h] [rbp-59h]
  __int64 v55; // [rsp+78h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-49h] BYREF
  __int16 v57; // [rsp+98h] [rbp-31h]
  PVOID P; // [rsp+A0h] [rbp-29h]
  _BYTE v59[16]; // [rsp+A8h] [rbp-21h] BYREF
  int v60; // [rsp+B8h] [rbp-11h]

  v8 = 0;
  v9 = a1;
  for ( i = 0; i < (unsigned int)v9; ++i )
  {
    v29 = a2[i];
    if ( *((_DWORD *)v29 + 12) == 5 && *((_BYTE *)v29 + 29) )
      return 3221225760LL;
  }
  P = 0LL;
  v60 = 0;
  if ( (unsigned int)v9 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 8 )
      goto LABEL_23;
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, 8 * v9, 945908054LL);
    P = Pool2;
  }
  else
  {
    Pool2 = v59;
    P = v59;
    if ( (_DWORD)v9 )
    {
      memset(v59, 0, 8 * v9);
      Pool2 = P;
    }
  }
  v60 = v9;
  if ( !Pool2 )
  {
LABEL_23:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11756;
    goto LABEL_24;
  }
  memmove(Pool2, a3, 8 * v9);
  v14 = ExAllocatePool2(64LL, 216LL, 945908054LL);
  v16 = (_QWORD *)v14;
  if ( !v14 )
  {
    WdLogSingleEntry0(3LL);
    v30 = P;
    WdLogGlobalForLineNumber = 11767;
    if ( P == v59 )
      return 3221225495LL;
    goto LABEL_38;
  }
  *(_QWORD *)(v14 + 32) = 0LL;
  *(_DWORD *)(v14 + 200) = 0;
  if ( (unsigned int)v9 > 4 )
  {
    v15 = 0xFFFFFFFFFFFFFFFFuLL % v9;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 0x28 )
      goto LABEL_43;
    *(_QWORD *)(v14 + 32) = ExAllocatePool2(64LL, 40 * v9, 945908054LL);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = v14 + 40;
    if ( (_DWORD)v9 )
      memset((void *)(v14 + 40), 0, 40 * v9);
  }
  v17 = v16[4];
  *((_DWORD *)v16 + 50) = v9;
  if ( !v17 )
  {
LABEL_43:
    VIDSCH_CPU_WAITER::`scalar deleting destructor'(v16, v15);
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11776;
LABEL_24:
    v30 = P;
    if ( P == v59 )
      return 3221225495LL;
LABEL_38:
    if ( v30 )
      ExFreePoolWithTag(v30, 0);
    return 3221225495LL;
  }
  v18 = a8;
  v19 = *((_QWORD *)*a2 + 1);
  v20 = (2 * a6) | a5 & 0xFD | v16[26] & 0xFC;
  v16[3] = a7;
  v21 = v20;
  v22 = v20 | 4;
  v23 = v21 & 0xFB;
  if ( !a8 )
  {
    v18 = a4;
    v22 = v23;
  }
  *((_BYTE *)v16 + 208) = v22;
  v16[2] = v18;
  v55 = v19 + 2016;
  v57 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 2016), &LockHandle);
  LOBYTE(v57) = 1;
  v49 = (struct _KEVENT *)v19;
  v51 = 0;
  v24 = 1;
  v52 = 1;
  v50[1] = v50;
  v50[0] = v50;
  if ( (_DWORD)v9 )
  {
    do
    {
      v25 = (struct _VIDSCH_SYNC_OBJECT **)(v17 + 40LL * v8);
      v26 = &a2[v8];
      v47 = v25;
      *v25 = *v26;
      v25[1] = *(struct _VIDSCH_SYNC_OBJECT **)&Pool2[8 * v8];
      v25[4] = (struct _VIDSCH_SYNC_OBJECT *)v16;
      v27 = *v26;
      if ( *((_DWORD *)*v26 + 12) == 6 )
      {
        v32 = *(_QWORD *)&Pool2[8 * v8];
        if ( !*((_BYTE *)v27 + 28) )
        {
          v33 = *((_DWORD *)v27 + 12) == 6;
          v53 = *(_QWORD *)(*((unsigned int *)v27 + 36) + *(_QWORD *)(*((_QWORD *)v27 + 16) + 192LL));
          if ( v33 )
          {
            v35 = *(_QWORD *)(*((unsigned int *)v27 + 20) + *(_QWORD *)(*((_QWORD *)v27 + 8) + 192LL));
          }
          else
          {
            v34 = (unsigned int *)*((_QWORD *)v27 + 9);
            if ( *((_BYTE *)v27 + 30) )
              v35 = *(_QWORD *)v34;
            else
              v35 = *v34;
          }
          v54 = (__int64 *)((char *)v27 + 72);
          if ( v32 <= v53 || v35 >= v53 )
          {
            if ( *((_BYTE *)v27 + 28) )
            {
              v37 = *(_QWORD *)(*((_QWORD *)v27 + 43) + 40LL);
            }
            else
            {
              v36 = *((_DWORD *)v27 + 12);
              if ( v36 == 2 )
              {
                v37 = *((_QWORD *)v27 + 9);
              }
              else if ( v36 == 6 )
              {
                v37 = *((_QWORD *)v27 + 25);
              }
              else
              {
                v37 = *((_QWORD *)v27 + 12);
              }
            }
            if ( v32 > v37 )
            {
              v43 = *((_QWORD *)v27 + 1);
              v44 = *((unsigned int *)v27 + 36);
              v45 = *(_QWORD *)(*((_QWORD *)v27 + 16) + 192LL);
              if ( *(_BYTE *)(v43 + 7082) )
              {
                *(_QWORD *)(v44 + v45) = v32;
              }
              else
              {
                VidSchiUpdateNativeFenceMonitoredValue(v43, *((_QWORD *)v27 + 24), v32, v45 + v44);
                v25 = v47;
                v26 = &a2[v8];
              }
            }
            else
            {
              if ( *((_BYTE *)v27 + 28) )
              {
                v38 = *(_QWORD *)(*((_QWORD *)v27 + 43) + 40LL);
              }
              else
              {
                v39 = *((_DWORD *)v27 + 12);
                if ( v39 == 2 )
                {
                  v38 = *v54;
                }
                else if ( v39 == 6 )
                {
                  v38 = *((_QWORD *)v27 + 25);
                }
                else
                {
                  v38 = *((_QWORD *)v27 + 12);
                }
              }
              WdLogSingleEntry3(3LL, v27, v32, v38);
              v25 = v47;
              v26 = &a2[v8];
              WdLogGlobalForLineNumber = 6150;
            }
          }
          else
          {
            WdLogSingleEntry4(3LL, v27, v32, v53, v35);
            v25 = v47;
            v26 = &a2[v8];
            WdLogGlobalForLineNumber = 6140;
          }
        }
        v40 = (__int64 *)(v25 + 2);
        v41 = (__int64)*v26 + 256;
        v42 = (__int64 **)*((_QWORD *)*v26 + 33);
        if ( *v42 != (__int64 *)v41 )
          goto LABEL_19;
        *v40 = v41;
        v40[1] = (__int64)v42;
        *v42 = v40;
        *(_QWORD *)(v41 + 8) = v40;
      }
      else
      {
        v24 = 0;
      }
      ++v8;
    }
    while ( v8 < (unsigned int)v9 );
  }
  v28 = *(_QWORD **)(v19 + 912);
  if ( *v28 != v19 + 904 )
LABEL_19:
    __fastfail(3u);
  v16[1] = v28;
  *v16 = v19 + 904;
  *v28 = v16;
  *(_QWORD *)(v19 + 912) = v16;
  if ( v24 )
    VidSchiUnwaitNativeFenceWaiters((HwQueueStagingList *)&v49, *a2);
  else
    VidSchiUnwaitMonitoredFences((HwQueueStagingList *)&v49, v19);
  HwQueueStagingList::~HwQueueStagingList(&v49);
  if ( (_BYTE)v57 )
  {
    if ( HIBYTE(v57) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    LOBYTE(v57) = 0;
  }
  if ( P != v59 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
