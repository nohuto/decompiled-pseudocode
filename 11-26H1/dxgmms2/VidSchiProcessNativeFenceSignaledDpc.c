/*
 * XREFs of VidSchiProcessNativeFenceSignaledDpc @ 0x140048E74
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x140028DF4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140008BB0 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     NativeFenceUmdHandleCompareFunction @ 0x140056494 (NativeFenceUmdHandleCompareFunction.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140056FFC (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memmove @ 0x14005B8C0 (memmove.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiProcessNativeFenceSignaledDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // r13
  struct _SLIST_ENTRY *v3; // rdi
  unsigned int v4; // r14d
  struct _KEVENT *v5; // r15
  char v6; // r12
  struct _SLIST_ENTRY *v7; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v9; // rdi
  unsigned int v10; // ecx
  struct _SLIST_ENTRY *v11; // rdi
  struct _SLIST_ENTRY *v12; // rbx
  unsigned int v13; // edx
  __int64 v14; // rax
  _QWORD *v15; // rsi
  int v16; // eax
  struct _VIDSCH_SYNC_OBJECT *v17; // r9
  unsigned int i; // ebx
  struct _VIDSCH_SYNC_OBJECT *v19; // r9
  struct _SLIST_ENTRY *v20; // [rsp+38h] [rbp-89h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-81h]
  struct _SLIST_ENTRY *v22; // [rsp+48h] [rbp-79h]
  struct _KEVENT *v23; // [rsp+50h] [rbp-71h] BYREF
  _QWORD v24[2]; // [rsp+58h] [rbp-69h] BYREF
  char v25; // [rsp+68h] [rbp-59h]
  int v26; // [rsp+6Ch] [rbp-55h]
  struct _SLIST_ENTRY *v27; // [rsp+70h] [rbp-51h] BYREF
  _QWORD v28[4]; // [rsp+78h] [rbp-49h] BYREF
  __int16 v29; // [rsp+98h] [rbp-29h]
  struct _VIDSCH_SYNC_OBJECT *v30[8]; // [rsp+A8h] [rbp-19h] BYREF

  Next = ListEntry[2].Next;
  v3 = 0LL;
  v4 = 0;
  v5 = (struct _KEVENT *)*((_QWORD *)&Next[1].Next + 1);
  memset(v30, 0, sizeof(v30));
  if ( v5[295].Header.Signalling )
  {
    v3 = ListEntry[7].Next;
  }
  else
  {
    v4 = *((_DWORD *)&ListEntry[2].Next + 2);
    if ( v4 )
      memmove(v30, &ListEntry[3], 8LL * v4);
  }
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[193], ListEntry);
  v29 = 256;
  v28[0] = v5 + 84;
  AcquireSpinLock::Acquire((Acquire *)v28);
  v23 = v5;
  v25 = 0;
  v26 = 2;
  v6 = 1;
  v24[1] = v24;
  v24[0] = v24;
  if ( !v3 )
  {
    if ( !v4 )
      goto LABEL_28;
    for ( i = 0; i < v4; ++i )
    {
      v19 = v30[i];
      if ( !v19 || *((_DWORD *)v19 + 12) != 6 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 20LL, v19, v4, 0LL);
        WdLogGlobalForLineNumber = 916;
        JUMPOUT(0x1400491ACLL);
      }
      UnwaitFencesFromNativeFenceSignaledDpc((struct HwQueueStagingList *)&v23, 0LL, 0LL, v19);
    }
    goto LABEL_29;
  }
  v7 = v3[3].Next;
  Flink = v5->Header.WaitListHead.Flink;
  v27 = v3[2].Next;
  v30[1] = (struct _VIDSCH_SYNC_OBJECT *)&v27;
  v22 = v7;
  memset(&v30[2], 0, 40);
  v30[0] = (struct _VIDSCH_SYNC_OBJECT *)1;
  ((void (__fastcall *)(struct _LIST_ENTRY *, struct _VIDSCH_SYNC_OBJECT **))DxgCoreInterface[104])(Flink, v30);
  v9 = *((_QWORD *)&v7[19].Next + 1);
  v10 = *(_DWORD *)(v9 + 16);
  v11 = *(struct _SLIST_ENTRY **)v9;
  v12 = v7[20].Next;
  v13 = (unsigned int)v11 % v10;
  HIDWORD(v20) = HIDWORD(v11);
  LODWORD(v20) = (unsigned int)v11 % v10;
  v21 = v10;
  if ( v12 != v20 && HIDWORD(v12) <= HIDWORD(v20) )
  {
    if ( HIDWORD(v12) == HIDWORD(v20) )
    {
      if ( (unsigned int)v12 > v13 )
        goto LABEL_27;
    }
    else if ( HIDWORD(v12) + 1 != HIDWORD(v20) || (unsigned int)v12 < v13 )
    {
      goto LABEL_27;
    }
    v6 = 0;
    while ( 1 )
    {
      v14 = *((_QWORD *)&v7[2].Next + 1);
      LODWORD(v20) = *(_DWORD *)(*((_QWORD *)&v7[19].Next + 1) + 48 * ((unsigned int)v12 + 1LL));
      v15 = *(_QWORD **)(*(_QWORD *)(v14 + 8) + 1976LL);
      if ( !v15 )
        break;
      do
      {
        v16 = NativeFenceUmdHandleCompareFunction(&v20, v15);
        if ( v16 >= 0 )
        {
          if ( v16 <= 0 )
            break;
          v15 = (_QWORD *)v15[1];
        }
        else
        {
          v15 = (_QWORD *)*v15;
        }
      }
      while ( v15 );
      if ( !v15 )
        break;
      v17 = (struct _VIDSCH_SYNC_OBJECT *)*(v15 - 1);
      if ( !v17 || *((_DWORD *)v17 + 12) != 6 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 20LL, v17, v4, 0LL);
        WdLogGlobalForLineNumber = 916;
        break;
      }
      UnwaitFencesFromNativeFenceSignaledDpc((struct HwQueueStagingList *)&v23, 0LL, 0LL, v17);
      v7 = v22;
      LODWORD(v12) = ((int)v12 + 1) % v21;
      if ( (_DWORD)v12 == (_DWORD)v11 )
        goto LABEL_27;
    }
    v7 = v22;
    v6 = 1;
  }
LABEL_27:
  v7[20].Next = v11;
  if ( v6 )
LABEL_28:
    UnwaitFencesFromNativeFenceSignaledDpc(
      (struct HwQueueStagingList *)&v23,
      (struct _VIDSCH_GLOBAL *)v5,
      (struct _VIDSCH_NODE *)Next,
      0LL);
LABEL_29:
  VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)Next);
  HwQueueStagingList::~HwQueueStagingList(&v23);
  AcquireSpinLock::Release((AcquireSpinLock *)v28);
}
