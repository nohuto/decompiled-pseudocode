/*
 * XREFs of KiDispatchException @ 0x1403D63D0
 * Callers:
 *     KiRaiseException @ 0x1403D6BE0 (KiRaiseException.c)
 *     KiInitializeUserApc @ 0x14043ED48 (KiInitializeUserApc.c)
 *     KxExceptionDispatchOnExceptionStack @ 0x14072CB80 (KxExceptionDispatchOnExceptionStack.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140741680 (KiFastFailDispatch.c)
 *     PspInitializeThunkContext @ 0x1409E7B48 (PspInitializeThunkContext.c)
 *     PspFreeUserFiberShadowStack @ 0x140A045EC (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     PsPicoDispatchException @ 0x1403D4FE0 (PsPicoDispatchException.c)
 *     KiPreprocessFault @ 0x1403D5010 (KiPreprocessFault.c)
 *     KeContextFromKframes @ 0x1403D7680 (KeContextFromKframes.c)
 *     RtlDispatchException @ 0x1403D8F00 (RtlDispatchException.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D9690 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D9D30 (RtlGetExtendedContextLength2.c)
 *     RtlpCopyExtendedContext @ 0x14040BA10 (RtlpCopyExtendedContext.c)
 *     KdTrap @ 0x1404576D0 (KdTrap.c)
 *     KiSetupForInstrumentationReturn @ 0x140481CA8 (KiSetupForInstrumentationReturn.c)
 *     KePopulateContinuationContext @ 0x1404AFFC0 (KePopulateContinuationContext.c)
 *     KeWriteExceptionRecordToUser @ 0x1404B1A90 (KeWriteExceptionRecordToUser.c)
 *     KeCopyExceptionRecord @ 0x1404DF53C (KeCopyExceptionRecord.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x140535F60 (KeContextToKframes.c)
 *     KiTpHandleTrap @ 0x1405FEEB0 (KiTpHandleTrap.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x140728540 (ZwTerminateProcess.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     DbgkForwardException @ 0x1409CEF30 (DbgkForwardException.c)
 *     PsWow64GetProcessMachine @ 0x1409E8360 (PsWow64GetProcessMachine.c)
 *     KdIsThisAKdTrap @ 0x140C1CF20 (KdIsThisAKdTrap.c)
 */

int __fastcall KiDispatchException(NTSTATUS *a1, void *a2, __int64 a3, char a4, char a5)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 Process; // rdx
  NTSTATUS v10; // r15d
  NTSTATUS v11; // eax
  struct _KTHREAD *v12; // rax
  ULONG v13; // ecx
  ULONG64 v14; // r15
  ULONG64 v15; // rcx
  __int16 ProcessMachine; // ax
  unsigned __int64 v17; // rax
  void *v18; // rsp
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 SchedulerAssist; // rdx
  int v26; // ett
  struct _KPRCB *v27; // rcx
  char IsThisAKdTrap; // al
  char v29; // r8
  __int64 v30; // r9
  _KPROCESS *v31; // rdx
  struct _KPRCB *v32; // r8
  signed __int32 *v33; // rdx
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  void *v36; // rdx
  char *v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v41; // r8
  int v42; // ett
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  int v45; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextFlags; // [rsp+34h] [rbp+4h]
  char v47; // [rsp+38h] [rbp+8h]
  ULONG ContextLength; // [rsp+3Ch] [rbp+Ch] BYREF
  int v49; // [rsp+40h] [rbp+10h]
  void *v50; // [rsp+48h] [rbp+18h]
  unsigned __int64 v51; // [rsp+50h] [rbp+20h]
  PCONTEXT_EX ContextEx; // [rsp+58h] [rbp+28h] BYREF
  void *v53; // [rsp+60h] [rbp+30h]
  int v54; // [rsp+68h] [rbp+38h]
  struct _KTHREAD *v55; // [rsp+70h] [rbp+40h]
  void *v56; // [rsp+78h] [rbp+48h]
  NTSTATUS *v57; // [rsp+80h] [rbp+50h]
  void *v58; // [rsp+88h] [rbp+58h]
  int *v59; // [rsp+98h] [rbp+68h]
  __int64 v60; // [rsp+A0h] [rbp+70h]
  int v61; // [rsp+B0h] [rbp+80h]
  char v62[12]; // [rsp+B4h] [rbp+84h] BYREF
  void *v63; // [rsp+C8h] [rbp+98h]
  __int64 v64; // [rsp+128h] [rbp+F8h]
  _DWORD Src[5]; // [rsp+150h] [rbp+120h] BYREF
  __int64 v66; // [rsp+164h] [rbp+134h]
  int v67; // [rsp+16Ch] [rbp+13Ch]

  LOBYTE(v45) = a4;
  v50 = a2;
  v57 = a1;
  v60 = a3;
  ContextEx = 0LL;
  ContextLength = 0;
  v47 = 0;
  memset_0(v62, 0, 0x94uLL);
  CurrentThread = KeGetCurrentThread();
  v55 = CurrentThread;
  Process = (unsigned __int64)CurrentThread->ApcState.Process;
  v51 = Process;
  __incgsdword(0x87F0u);
  if ( a5 && Process && *(_QWORD *)(Process + 1600) )
  {
    v10 = *a1;
    switch ( *a1 )
    {
      case 268435458:
        *a1 = -1073741795;
        break;
      case 268435459:
        *a1 = -1073741676;
        break;
      case 268435460:
        *a1 = -1073741819;
        break;
    }
    if ( KeGetEffectiveIrql() < 2u )
    {
      if ( a4
        || ((v11 = *a1, *a1 == -1073741819) || v11 == -2147483647 || v11 == -1073741818)
        && *((_QWORD *)a1 + 5) < 0x7FFFFFFF0000uLL )
      {
        LOBYTE(BugCheckParameter4) = a4;
        LODWORD(v12) = PsPicoDispatchException((__int64)a1, (__int64)v50);
        if ( (_BYTE)v12 )
          return (int)v12;
      }
    }
    *a1 = v10;
    Process = v51;
  }
  v13 = 1048607;
  ContextFlags = 1048607;
  v14 = 0LL;
  if ( a4 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 )
    {
      v13 = 1048671;
      ContextFlags = 1048671;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v15 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800LL) != 0
          && (*(_DWORD *)(Process + 1876) & 0x4000) == 0 )
        {
          v15 &= ~0x800uLL;
        }
        v14 = v15 & 0xFFFFFFFFFFF9FFFFuLL;
        if ( *((char *)a1 + 4) >= 0 )
          v14 = v15;
        ProcessMachine = PsWow64GetProcessMachine(Process);
        v13 = ContextFlags;
        if ( ProcessMachine == 332 )
          v14 &= 0xFFFFFFFFFFF9FFFFuLL;
      }
    }
  }
  else
  {
    if ( (_BYTE)KiKernelCetEnabled )
      v13 = 1048735;
    ContextFlags = v13;
  }
  RtlGetExtendedContextLength2(v13, &ContextLength, v14);
  v17 = ContextLength + 15LL;
  if ( v17 <= ContextLength )
    v17 = 0xFFFFFFFFFFFFFF0LL;
  v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
  v59 = &v45;
  if ( (_BYTE)v45 )
    memset_0(&v45, 0, ContextLength);
  RtlInitializeExtendedContext2((PCONTEXT)&v45, ContextFlags, &ContextEx, v14);
  KeContextFromKframes(a3, v50, &v45);
  if ( *a1 == -2147483645 )
  {
    --v64;
    if ( (KiDynamicTraceMask & 2) != 0 )
    {
      --*(_QWORD *)(a3 + 360);
      LOBYTE(v20) = a5;
      LOBYTE(v19) = v45;
      if ( (unsigned __int8)KiTpHandleTrap(a1, &v45, v19, v20, (_BYTE)BugCheckParameter4) )
        goto LABEL_86;
      ++*(_QWORD *)(a3 + 360);
    }
  }
  if ( !KiPreprocessFault((ULONG_PTR)a1, (ULONG_PTR)&v45, v45) )
  {
    if ( (_BYTE)v45 )
    {
      v23 = v63;
      v53 = v63;
      v56 = v63;
      if ( (*(_DWORD *)(v51 + 1532) & 1) == 0 )
      {
        v12 = KeGetCurrentThread();
        if ( v12->ApcState.Process[1].ReadyTime && *a1 == -2147483646 && (*(_DWORD *)(a3 + 376) & 0x40000) != 0 )
        {
          _disable();
          *(_DWORD *)(a3 + 376) &= ~0x40000u;
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (unsigned __int64)CurrentPrcb->SchedulerAssist;
          if ( !SchedulerAssist )
            goto LABEL_92;
          _m_prefetchw((const void *)SchedulerAssist);
          LODWORD(v12) = *(_DWORD *)SchedulerAssist;
          do
          {
            v26 = (int)v12;
            LODWORD(v12) = _InterlockedCompareExchange(
                             (volatile signed __int32 *)SchedulerAssist,
                             (unsigned int)v12 & 0xFFDFFFFF,
                             (signed __int32)v12);
          }
          while ( v26 != (_DWORD)v12 );
          if ( ((unsigned int)v12 & 0x200000) == 0 )
            goto LABEL_92;
          v27 = CurrentPrcb;
LABEL_91:
          LODWORD(v12) = KiRemoveSystemWorkPriorityKick(v27, SchedulerAssist, CurrentPrcb, v22);
LABEL_92:
          _enable();
          return (int)v12;
        }
        if ( (v54 & 0xFFF8) == 0x20 )
        {
          if ( *a1 == -2147483645 )
          {
            *a1 = 1073741855;
          }
          else if ( *a1 == -2147483644 )
          {
            *a1 = 1073741854;
          }
          v23 = (void *)((unsigned int)v23 & 0xFFFFFFF0);
          v53 = v23;
          v56 = v23;
        }
      }
      if ( !a5 )
      {
        LOBYTE(v21) = 1;
        LOBYTE(v23) = 1;
        LODWORD(v12) = DbgkForwardException(a1, v23, v21);
        if ( !(_BYTE)v12 )
        {
          LOBYTE(v41) = 1;
          LODWORD(v12) = DbgkForwardException(a1, 0LL, v41);
          if ( !(_BYTE)v12 )
            LODWORD(v12) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *a1);
        }
        return (int)v12;
      }
      ContextLength = *a1;
      IsThisAKdTrap = KdIsThisAKdTrap(a1);
      v47 = IsThisAKdTrap;
      v31 = KeGetCurrentThread()->ApcState.Process;
      if ( !v31[1].UserTime && !KdIgnoreUmExceptions && (_DWORD)v30 != -2147483597 || IsThisAKdTrap )
      {
        if ( (unsigned __int8)KdTrap(a3, (_DWORD)v50, (_DWORD)a1, (unsigned int)&v45, v29, 0) )
          goto LABEL_86;
        v30 = ContextLength;
      }
      if ( (_DWORD)v30 == -2147483597
        || (LOBYTE(v31) = 1, LODWORD(v12) = DbgkForwardException(a1, v31, 0LL), !(_BYTE)v12) )
      {
        _disable();
        *(_DWORD *)(a3 + 376) &= ~0x100u;
        v32 = KeGetCurrentPrcb();
        v33 = (signed __int32 *)v32->SchedulerAssist;
        if ( v33 )
        {
          _m_prefetchw(v33);
          v34 = *v33;
          do
          {
            v35 = v34;
            v34 = _InterlockedCompareExchange(v33, v34 & 0xFFDFFFFF, v34);
          }
          while ( v35 != v34 );
          if ( (v34 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v32, v33, v32, v30);
        }
        _enable();
        v61 = -1073741819;
        v49 = 0;
        v36 = v53;
        v50 = v53;
        ContextLength = ContextFlags & 0x100040;
        if ( (ContextFlags & 0x100040) == 0x100040 )
        {
          v36 = (void *)(((unsigned __int64)v53 - ContextEx->XState.Length) & 0xFFFFFFFFFFFFFFC0uLL);
          v50 = v36;
        }
        v51 = ((unsigned __int64)v36 - 40) & 0xFFFFFFFFFFFFFFF0uLL;
        v58 = (void *)(v51 - 160);
        v67 = 0;
        Src[0] = -1232;
        Src[1] = (_DWORD)v53 - (v51 - 1424);
        Src[2] = -1232;
        Src[3] = 1232;
        Src[4] = (_DWORD)v36 - (v51 - 192);
        v66 = (unsigned int)((_DWORD)v53 - (_DWORD)v36);
        ProbeForWrite((volatile void *)(v51 - 1424), (SIZE_T)v53 - v51 + 1424, 0x10u);
        RtlWriteULong64ToUser(v51 + 24, v53);
        RtlWriteULong64ToUser(v51, v64);
        v37 = (char *)v58;
        KeWriteExceptionRecordToUser(v58, a1);
        if ( ContextLength == 1048640 )
          RtlCopyToUser(v50, (char *)ContextEx + ContextEx->XState.Offset, 0x40uLL);
        RtlpCopyExtendedContext(0, (_DWORD)v37 - 32, (unsigned int)Src, ContextFlags, (__int64)ContextEx, 0LL);
        RtlCopyToUser(v37 - 32, Src, 0x20uLL);
        --CurrentThread->SpecialApcDisable;
        v49 = 1;
        KePopulateContinuationContext(*(_QWORD *)(a3 + 360));
        *(_QWORD *)(a3 + 384) = v37 - 1264;
        *(_WORD *)(a3 + 368) = 51;
        *(_QWORD *)(a3 + 360) = stru_140FC11F0.AbWaitObject;
        LODWORD(v12) = KiSetupForInstrumentationReturn(a3);
        if ( CurrentThread->SpecialApcDisable++ == -1 )
        {
          v12 = (struct _KTHREAD *)&CurrentThread->152;
          if ( *(struct _KTHREAD **)&v12->Header.Lock != v12 )
            LODWORD(v12) = KiCheckForKernelApcDelivery(v39, v38);
        }
        v49 = 0;
      }
      return (int)v12;
    }
    if ( (!a5
       || !(unsigned __int8)KdTrap(a3, (_DWORD)v50, (_DWORD)a1, (unsigned int)&v45, v45, v45)
       && !RtlDispatchException((PEXCEPTION_RECORD)a1, (PCONTEXT)&v45))
      && !(unsigned __int8)KdTrap(a3, (_DWORD)v50, (_DWORD)a1, (unsigned int)&v45, 0, 1) )
    {
      KeBugCheckEx(0x1Eu, *a1, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 4), *((_QWORD *)a1 + 5));
    }
  }
LABEL_86:
  LOBYTE(BugCheckParameter4) = v45;
  LODWORD(v12) = KeContextToKframes(a3, (_DWORD)v50, (unsigned int)&v45, (_DWORD)v53, BugCheckParameter4);
  if ( v47 )
  {
    _disable();
    LODWORD(v12) = KiSetupForInstrumentationReturn(a3);
    v27 = KeGetCurrentPrcb();
    CurrentPrcb = (struct _KPRCB *)v27->SchedulerAssist;
    if ( !CurrentPrcb )
      goto LABEL_92;
    _m_prefetchw(CurrentPrcb);
    LODWORD(v12) = CurrentPrcb->MxCsr;
    do
    {
      SchedulerAssist = (unsigned int)v12;
      LODWORD(SchedulerAssist) = (unsigned int)v12 & 0xFFDFFFFF;
      v42 = (int)v12;
      LODWORD(v12) = _InterlockedCompareExchange(
                       (volatile signed __int32 *)CurrentPrcb,
                       (unsigned int)v12 & 0xFFDFFFFF,
                       (signed __int32)v12);
    }
    while ( v42 != (_DWORD)v12 );
    if ( ((unsigned int)v12 & 0x200000) == 0 )
      goto LABEL_92;
    goto LABEL_91;
  }
  return (int)v12;
}
