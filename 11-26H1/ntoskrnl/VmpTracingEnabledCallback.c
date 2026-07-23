/*
 * XREFs of VmpTracingEnabledCallback @ 0x140B22330
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 */

LIST_ENTRY *__fastcall VmpTracingEnabledCallback(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  LIST_ENTRY *result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  LIST_ENTRY *v8; // rdi
  struct _EX_RUNDOWN_REF *p_Blink; // r14
  struct _KLOCK_ENTRIES *v10; // r9
  struct _LIST_ENTRY *Flink; // r13
  struct _KTHREAD *CurrentThread; // rax
  void *v13; // rdx
  LegacyAutoBoost *v14; // rbx
  void *InitialStack; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v17; // r8
  struct _LIST_ENTRY *v18; // rax
  unsigned __int64 v19; // rbx
  void *v20; // r14
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r8
  __int64 *i; // r14
  void *v26; // r12
  unsigned int v27; // eax
  struct _LIST_ENTRY *v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r8
  _QWORD **v32; // rcx
  unsigned __int64 v33; // rax
  _QWORD *j; // rcx
  int v35; // [rsp+20h] [rbp-E0h]
  int v36; // [rsp+28h] [rbp-D8h]
  unsigned int ProcessId; // [rsp+40h] [rbp-C0h] BYREF
  struct _LIST_ENTRY *v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  struct _LIST_ENTRY *v43; // [rsp+70h] [rbp-90h] BYREF
  struct _LIST_ENTRY *v44; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v45[3]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *p_ProcessId; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  __int64 *v49; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v50; // [rsp+E8h] [rbp-18h]
  __int64 *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  __int64 *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  __int64 *v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  __int64 *v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  unsigned int *v59; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+138h] [rbp+38h]
  struct _LIST_ENTRY **v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+148h] [rbp+48h]

  result = (LIST_ENTRY *)(unsigned int)(a2 - 1);
  memset(v45, 0, sizeof(v45));
  if ( (unsigned int)result <= 1 && (char)a4 < 0 )
  {
    result = PsGetNextProcess(0LL, a2, a3, a4);
    v8 = result;
    if ( result )
    {
      while ( 1 )
      {
        if ( !v8[103].Flink )
          goto LABEL_7;
        p_Blink = (struct _EX_RUNDOWN_REF *)&v8[30].Blink;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v8[30].Blink) )
          goto LABEL_7;
        KiStackAttachProcess((_KPROCESS *)v8, 0, (__int64)v45);
        Flink = v8[103].Flink;
        if ( Flink )
          break;
LABEL_44:
        KiUnstackDetachProcess((__int64)v45, 0);
        ExReleaseRundownProtection_0(p_Blink);
LABEL_7:
        result = PsGetNextProcess(v8, v5, v6, v7);
        v8 = result;
        if ( !result )
          return result;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v14 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&Flink[8].Blink, 0LL, 0LL, v10);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Flink[8].Blink, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)&Flink[8].Blink, 0, v14, (struct _KTHREAD *)&Flink[8].Blink);
      if ( v14 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v14, v13);
        else
          *((_BYTE *)v14 + 10) = 1;
      }
      InitialStack = stru_140F06A28.InitialStack;
      if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 128LL) )
      {
        ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v8);
        v48 = 4LL;
        p_ProcessId = &ProcessId;
        tlgCreate1Sz_char((__int64)&v49, (const CHAR *)&v8[51].Blink);
        Blink = Flink[7].Blink;
        v51 = (__int64 *)&v38;
        v38 = Blink;
        v52 = 8LL;
        tlgWriteEx_EtwWriteEx((__int64)InitialStack, (unsigned __int8 *)&byte_1400546D5, v17, 0, v35, v36, 5u, v46);
      }
      v18 = Flink[2].Flink;
      if ( ((unsigned __int8)v18 & 1) != 0 )
      {
        if ( v18 == (struct _LIST_ENTRY *)1 )
        {
LABEL_41:
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Flink[8].Blink, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)&Flink[8].Blink);
          KeAbPostRelease((unsigned __int64)&Flink[8].Blink);
          KeLeaveCriticalRegion();
          goto LABEL_44;
        }
        v19 = (unsigned __int64)v18 ^ ((unsigned __int64)&Flink[1].Blink | 1);
      }
      else
      {
        v19 = (unsigned __int64)Flink[2].Flink;
      }
      if ( v19 )
      {
        do
        {
          v20 = stru_140F06A28.InitialStack;
          if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 128LL) )
          {
            v21 = (unsigned int)PsGetProcessId((PEPROCESS)v8);
            v22 = *(_QWORD *)(v19 + 24);
            ProcessId = v21;
            v39 = v22;
            p_ProcessId = &ProcessId;
            v49 = &v39;
            v40 = *(_QWORD *)(v19 + 32);
            v51 = &v40;
            v41 = v40 - v22 + 1;
            v48 = 4LL;
            v53 = &v41;
            v42 = *(_QWORD *)(v19 + 56);
            v55 = &v42;
            v23 = *(_DWORD *)(v19 + 72) & 1;
            v50 = 8LL;
            LODWORD(v38) = v23;
            v57 = (__int64 *)&v38;
            v43 = Flink[7].Blink;
            v59 = (unsigned int *)&v43;
            v52 = 8LL;
            v54 = 8LL;
            v56 = 8LL;
            v58 = 4LL;
            v60 = 8LL;
            tlgWriteEx_EtwWriteEx((__int64)v20, (unsigned __int8 *)&byte_140054505, v24, 0, v35, v36, 9u, v46);
          }
          for ( i = *(__int64 **)(v19 + 40); i != (__int64 *)(v19 + 40); i = (__int64 *)*i )
          {
            v26 = stru_140F06A28.InitialStack;
            if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u
              && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 128LL) )
            {
              v27 = (unsigned int)PsGetProcessId((PEPROCESS)v8);
              v28 = (struct _LIST_ENTRY *)i[6];
              v29 = i[7];
              LODWORD(v38) = v27;
              p_ProcessId = (unsigned int *)&v38;
              v49 = (__int64 *)&v43;
              v51 = &v42;
              v41 = *(_QWORD *)(v19 + 24);
              v53 = &v41;
              v40 = *(_QWORD *)(v19 + 32);
              v55 = &v40;
              v57 = &v39;
              v30 = i[8] & 1;
              v42 = v29;
              ProcessId = v30;
              v43 = v28;
              v39 = v29 - (_QWORD)v28 + 1;
              v59 = &ProcessId;
              v44 = Flink[7].Blink;
              v61 = &v44;
              v48 = 4LL;
              v50 = 8LL;
              v52 = 8LL;
              v54 = 8LL;
              v56 = 8LL;
              v58 = 8LL;
              v60 = 4LL;
              v62 = 8LL;
              tlgWriteEx_EtwWriteEx((__int64)v26, (unsigned __int8 *)&dword_1400542D4, v31, 0, v35, v36, 0xAu, v46);
            }
          }
          v32 = *(_QWORD ***)(v19 + 8);
          v33 = v19;
          if ( v32 )
          {
            v19 = *(_QWORD *)(v19 + 8);
            for ( j = *v32; j; j = (_QWORD *)*j )
              v19 = (unsigned __int64)j;
          }
          else
          {
            while ( 1 )
            {
              v19 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v19 || *(_QWORD *)v19 == v33 )
                break;
              v33 = v19;
            }
          }
        }
        while ( v19 );
        p_Blink = (struct _EX_RUNDOWN_REF *)&v8[30].Blink;
      }
      goto LABEL_41;
    }
  }
  return result;
}
