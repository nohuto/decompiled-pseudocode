/*
 * XREFs of HMFreeObject @ 0x1400F67F0
 * Callers:
 *     DestroyKF @ 0x1400F6304 (DestroyKF.c)
 *     DestroyMonitor @ 0x1400F63A0 (DestroyMonitor.c)
 *     DestroyKL @ 0x1400F6658 (DestroyKL.c)
 *     HMDestroyObject @ 0x1400F6780 (HMDestroyObject.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14010D3A8 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     UserCreateBaseWindowHandle @ 0x1401C18D0 (UserCreateBaseWindowHandle.c)
 * Callees:
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x14001E25C (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x14003AEB0 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     _HMPheFromObjectWorker @ 0x14003B3B0 (_HMPheFromObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x14003C844 (EtwTraceUserDestroyHandle.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x14003E824 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400BAD54 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     _HMPkheFromObjectWorker @ 0x1400E3FE8 (_HMPkheFromObjectWorker.c)
 *     HMCleanupObjectSecurity @ 0x1401495DC (HMCleanupObjectSecurity.c)
 *     SharedFree @ 0x14014E360 (SharedFree.c)
 *     HMCleanupGrantedHandle @ 0x14014EE04 (HMCleanupGrantedHandle.c)
 *     ?HMDoubleFree@@YAXPEAX@Z @ 0x140150BB0 (-HMDoubleFree@@YAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z @ 0x1401A4FB0 (-CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z.c)
 *     Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline @ 0x1401A5210 (Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline @ 0x1401A5264 (Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z @ 0x1401AD354 (-RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall HMFreeObject(unsigned int *a1, __int64 a2)
{
  Win32JobObject *v3; // r15
  __int64 v4; // rdx
  ULONG_PTR v5; // rbx
  __int64 v6; // rdx
  Win32JobObject ***BugCheckParameter4; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edx
  __int64 v11; // rdx
  unsigned int *v12; // rcx
  _QWORD **v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int16 v17; // bp
  Win32JobObject **v18; // r14
  __int64 UserSessionState; // rax
  char EtwUserHandleType; // al
  char v21; // r8
  struct _HANDLEENTRY *v22; // r8
  _BYTE *v23; // r14
  __int64 v24; // rcx
  bool v25; // zf
  unsigned int *v26; // r8
  __int64 v27; // rdx
  void *v28; // rcx
  char v29; // al
  Win32JobObject *v30; // rcx
  __int16 v31; // ax
  _QWORD *v32; // rax
  Win32JobObject **v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  _QWORD *v37; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v37 = *(_QWORD **)(W32GetUserSessionState(a1, a2) + 42336);
  LockRefactorStagingAssertOwned((const struct tagDomLock *)&v37, (__int64)v37);
  v5 = HMPheFromObjectWorker((int *)a1, v4);
  BugCheckParameter4 = (Win32JobObject ***)HMPkheFromObjectWorker((int *)a1, v6);
  if ( !(unsigned int)((__int64 (*)(void))Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline)() )
  {
    if ( (unsigned int)Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *BugCheckParameter4 != (Win32JobObject **)a1 )
      {
        LODWORD(v37) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2504LL);
      }
      if ( (HIWORD(*a1) & 0x7FFF) != *(_WORD *)(v5 + 26) )
      {
        LODWORD(v37) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2505LL);
      }
    }
    if ( BugCheckParameter4[3] )
    {
      LOBYTE(v9) = *(_BYTE *)(v5 + 24);
      HMCleanupObjectSecurity(BugCheckParameter4, v9);
      GreDeleteFastMutex((char *)BugCheckParameter4[3]);
    }
  }
  if ( a1[2] )
  {
    v10 = *(unsigned __int8 *)(v5 + 24);
    if ( v10 > 0xC )
    {
      if ( v10 != 13 )
        goto LABEL_13;
      LODWORD(v37) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2541LL);
    }
    else if ( v10 > 5 || (v8 = *(unsigned __int8 *)(v5 + 24), *(_BYTE *)(v5 + 24)) )
    {
LABEL_13:
      KeBugCheckEx(0x164u, 0x1CuLL, (ULONG_PTR)a1, a1[2], *(unsigned __int8 *)(v5 + 24));
    }
  }
  if ( (unsigned int)Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline(v8) )
  {
    CheckForDoubleFree((struct _HANDLEENTRY *)v5, (struct _HEAD *)a1);
    if ( *BugCheckParameter4 != (Win32JobObject **)a1 )
LABEL_72:
      KeBugCheckEx(0x164u, 0x1FuLL, (ULONG_PTR)a1, v5, (ULONG_PTR)BugCheckParameter4);
  }
  else if ( !*(_BYTE *)(v5 + 24) )
  {
    HMDoubleFree((ULONG_PTR)a1);
  }
  if ( BugCheckParameter4[2] )
  {
    LODWORD(v37) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2610LL);
  }
  if ( *(_BYTE *)(v5 + 24) == 16 )
  {
    v13 = (_QWORD **)(W32GetUserSessionState(v12, v11) + 57544);
    v14 = *v13;
    while ( v14 != v13 )
    {
      v12 = (unsigned int *)(v14 - 9);
      v14 = (_QWORD *)*v14;
      if ( v12 == a1 )
        goto LABEL_72;
    }
  }
  if ( (unsigned int)Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline(v12) && BugCheckParameter4[3] )
  {
    LOBYTE(v15) = *(_BYTE *)(v5 + 24);
    HMCleanupObjectSecurity(BugCheckParameter4, v15);
    GreDeleteFastMutex((char *)BugCheckParameter4[3]);
  }
  v16 = *(unsigned __int8 *)(v5 + 24);
  v17 = *((_WORD *)&unk_14024703C + 12 * v16);
  if ( (v17 & 2) != 0 )
  {
    v18 = BugCheckParameter4[1];
  }
  else
  {
    if ( (v17 & 1) == 0 )
    {
      v18 = 0LL;
      goto LABEL_36;
    }
    v18 = (Win32JobObject **)BugCheckParameter4[1][58];
  }
  if ( v18 )
    --*((_DWORD *)v18 + 17);
LABEL_36:
  UserSessionState = W32GetUserSessionState(3 * v16, v15);
  --*(_DWORD *)(UserSessionState + 19820);
  if ( v18 )
    PsGetProcessId(*v18);
  EtwUserHandleType = GetEtwUserHandleType(*(_BYTE *)(v5 + 24));
  EtwTraceUserDestroyHandle((int)**BugCheckParameter4, EtwUserHandleType, v21);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    Win32JobObject::RemoveHandle(**BugCheckParameter4, (void *)v5, v22);
    v23 = (_BYTE *)(v5 + 25);
  }
  else
  {
    v23 = (_BYTE *)(v5 + 25);
    if ( (*(_BYTE *)(v5 + 25) & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(**BugCheckParameter4);
      *v23 &= ~0x20u;
    }
  }
  if ( (v17 & 0x10) != 0 )
  {
    v24 = *((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 3) = 0LL;
    v25 = (*v23 & 0x40) == 0;
    v37 = (_QWORD *)v24;
    if ( v25 )
    {
      v26 = (unsigned int *)*((_QWORD *)a1 + 5);
      if ( !v26 || v26 == a1 )
      {
        RtlFreeHeap(*(PVOID *)(v24 + 136), 0, a1);
        goto LABEL_50;
      }
      RtlFreeHeap(*(PVOID *)(v24 + 136), 0, v26);
    }
    else
    {
      GreDeleteFastMutex(*((char **)a1 + 5));
    }
    HMFreeUserOrIsolatedType(v17, *(_BYTE *)(v5 + 24), a1);
LABEL_50:
    DeferrableUnlockObjectAssignment<tagDESKTOP>(&v37);
    goto LABEL_63;
  }
  if ( (v17 & 0x40) != 0 )
  {
    v28 = (void *)*((_QWORD *)a1 + 5);
    if ( !v28 )
    {
      SharedFree(a1);
      goto LABEL_63;
    }
    SharedFree(v28);
    goto LABEL_59;
  }
  v29 = *(_BYTE *)(v5 + 24);
  if ( v29 == 19 )
  {
    v30 = (*BugCheckParameter4)[4];
  }
  else
  {
    if ( v29 != 22 )
    {
      if ( (v17 & 0x100) != 0 )
      {
        v37 = (_QWORD *)*((_QWORD *)a1 + 3);
        DeferrableUnlockObjectAssignment<tagDESKTOP>(&v37);
      }
LABEL_59:
      HMFreeUserOrIsolatedType(v17, *(_BYTE *)(v5 + 24), a1);
      goto LABEL_63;
    }
    v3 = (*BugCheckParameter4)[2];
    v30 = (Win32JobObject *)*((_QWORD *)v3 + 4);
  }
  ObfDereferenceObject(v30);
LABEL_63:
  v31 = (*(_WORD *)(v5 + 26) + 1) & 0x7FFF;
  if ( v31 == 0x7FFF )
    v31 = 1;
  *(_OWORD *)v5 = 0LL;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  *((_OWORD *)BugCheckParameter4 + 1) = 0LL;
  BugCheckParameter4[4] = 0LL;
  *(_WORD *)(v5 + 26) = v31;
  v32 = (_QWORD *)W32GetUserSessionState(0LL, v27);
  v34 = (__int64)(v5 - v32[2486]) >> 5;
  if ( (v34 & 1) != 0 )
  {
    v33 = (Win32JobObject **)v32[2463];
    *BugCheckParameter4 = v33;
    v32[2463] = v34;
  }
  else
  {
    *BugCheckParameter4 = (Win32JobObject **)v32[2462];
    v32[2462] = v34;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v33, v32) + 19760) && v3 )
    HMUnlockObject((int *)v3, v35);
  return 1LL;
}
