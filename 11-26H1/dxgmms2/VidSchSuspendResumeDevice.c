/*
 * XREFs of VidSchSuspendResumeDevice @ 0x140007690
 * Callers:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x14000754C (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14009D04C (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14009DBF4 (-EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1401016B4 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1401017C4 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z @ 0x140101E78 (-FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x14010216C (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1401026D8 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x14011379C (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x14011A16C (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x14011A5B4 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x140007D9C (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchiUnwaitContext @ 0x14001FB00 (VidSchiUnwaitContext.c)
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     VidSchWaitForEvents @ 0x14002FB1C (VidSchWaitForEvents.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x140108A8C (VidSchSubmitGlobalCommand.c)
 */

void __fastcall VidSchSuspendResumeDevice(_KEVENT *a1, bool a2, char a3, int a4)
{
  struct _LIST_ENTRY *Blink; // r13
  struct _VIDSCH_DEVICE *v6; // rbx
  char v8; // di
  _DWORD *v9; // rdx
  int v10; // eax
  _QWORD *v11; // r12
  char v12; // cl
  _QWORD *v13; // rsi
  int v14; // ebx
  _QWORD *v15; // rdi
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  _QWORD *v19; // rcx
  char v20; // [rsp+38h] [rbp-69h]
  char v21; // [rsp+39h] [rbp-68h]
  _KEVENT Event; // [rsp+40h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v24[16]; // [rsp+78h] [rbp-29h] BYREF
  _KEVENT *p_Event; // [rsp+108h] [rbp+67h] BYREF
  char v26; // [rsp+110h] [rbp+6Fh]
  int v27; // [rsp+120h] [rbp+7Fh]

  v27 = a4;
  p_Event = a1;
  Blink = a1[1].Header.WaitListHead.Blink;
  v26 = 0;
  v6 = (struct _VIDSCH_DEVICE *)a1;
  v21 = 0;
  v8 = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)&Blink[195].Blink, 1u);
  if ( a2 )
  {
    v9 = (_DWORD *)((char *)v6 + 1664);
    ++*((_DWORD *)v6 + 416);
    if ( a3 )
      *((_BYTE *)v6 + 1668) = 1;
    goto LABEL_9;
  }
  if ( !a3 )
  {
LABEL_7:
    v9 = (_DWORD *)((char *)v6 + 1664);
    v10 = *((_DWORD *)v6 + 416);
    if ( v10 > 0 )
      *v9 = v10 - 1;
    goto LABEL_9;
  }
  if ( *((_BYTE *)v6 + 1668) )
  {
    *((_BYTE *)v6 + 1668) = 0;
    goto LABEL_7;
  }
  v21 = 1;
  v9 = (_DWORD *)((char *)v6 + 1664);
LABEL_9:
  *((_BYTE *)v6 + 8 * *((unsigned int *)v6 + 426) + 1676) = a2;
  *((_DWORD *)v6 + 2 * *((unsigned int *)v6 + 426) + 418) = *v9;
  *((_DWORD *)v6 + 426) = ((unsigned __int8)*((_DWORD *)v6 + 426) + 1) & 3;
  if ( *((_DWORD *)v6 + 490) )
    goto LABEL_44;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&Blink[126], &LockHandle);
  v11 = (_QWORD *)((char *)v6 + 80);
  v12 = 0;
  v13 = (_QWORD *)*((_QWORD *)v6 + 10);
  v20 = 0;
  if ( v13 == (_QWORD *)((char *)v6 + 80) )
    goto LABEL_38;
  v14 = v27;
  do
  {
    v15 = v13 - 3;
    v16 = *((_DWORD *)v13 + 42);
    if ( !a2 )
    {
      if ( (v16 & 0x100) != 0 && (!a3 || (v15[24] & 0x800) != 0) )
      {
        *((_DWORD *)v15 + 48) &= ~0x100u;
        *((_DWORD *)v15 + 48) &= ~0x800u;
        v12 = VidSchiUnwaitContext(v13 - 3, 4295LL) | v20;
        v20 = v12;
      }
      goto LABEL_34;
    }
    if ( (v16 & 0x100) == 0 )
    {
      v17 = *((_DWORD *)v15 + 28);
      if ( (v17 & 0x10) != 0 )
      {
        if ( v14 == 1 )
        {
          v18 = v17 >> 7;
        }
        else
        {
          if ( v14 != 2 )
          {
LABEL_21:
            if ( a3 )
              *((_DWORD *)v15 + 48) |= 0x800u;
            v19 = v13 - 3;
            if ( (((unsigned __int8)(*((_DWORD *)v15 + 48) >> 9) | *((_BYTE *)v15 + 192)) & 2) != 0 )
            {
              VidSchiUpdateContextStatus(v19, 9LL, 4246LL);
              WdLogSingleEntry2(4LL, v13 - 3, *((unsigned int *)v15 + 48));
              WdLogGlobalForLineNumber = 4250;
LABEL_28:
              v12 = v20;
              v8 = 1;
              v26 = 1;
              goto LABEL_35;
            }
            VidSchiUpdateContextStatus(v19, 10LL, 4255LL);
            if ( BYTE4(Blink[3].Blink) && v15 == *(_QWORD **)(v15[12] + 224LL) )
            {
              WdLogSingleEntry1(4LL, v13 - 3);
              WdLogGlobalForLineNumber = 4260;
              goto LABEL_28;
            }
            goto LABEL_33;
          }
          v18 = *(_DWORD *)(v15[12] + 12LL) >> 2;
        }
        if ( (v18 & 1) != 0 )
          goto LABEL_21;
      }
LABEL_33:
      v12 = v20;
    }
LABEL_34:
    v8 = v26;
LABEL_35:
    v13 = (_QWORD *)*v13;
  }
  while ( v13 != v11 );
  v6 = (struct _VIDSCH_DEVICE *)p_Event;
  if ( v12 )
  {
    Blink[93].Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)&Blink[91].Blink, 0, 0);
  }
LABEL_38:
  if ( !a2 )
    *((_BYTE *)v6 + 1656) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v8 )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v24, 0, 0x50uLL);
    LODWORD(v24[5]) = 7;
    v24[3] = VidSchiSwitchFromSuspendedDevices;
    LODWORD(v24[0]) = 0;
    v24[4] = &Event;
    v24[6] = Blink;
    VidSchSubmitGlobalCommand(Blink, v24);
    p_Event = &Event;
    VidSchWaitForEvents(Blink, 1LL, &p_Event, 0LL, 0);
  }
  if ( !v21 )
    VidSchiSuspendResumeHwContexts(v6, a2);
LABEL_44:
  ExReleaseResourceLite((PERESOURCE)&Blink[195].Blink);
}
