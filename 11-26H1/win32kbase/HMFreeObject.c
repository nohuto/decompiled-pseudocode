/*
 * XREFs of HMFreeObject @ 0x1401187F0
 * Callers:
 *     DestroyMonitor @ 0x1401181C0 (DestroyMonitor.c)
 *     DestroyKL @ 0x140118548 (DestroyKL.c)
 *     HMDestroyObject @ 0x1401186A0 (HMDestroyObject.c)
 *     DestroyKF @ 0x140118D3C (DestroyKF.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14011DC94 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     UserCreateBaseWindowHandle @ 0x1401EA460 (UserCreateBaseWindowHandle.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x140048890 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400491B4 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     _HMPheFromObjectWorker @ 0x140071E30 (_HMPheFromObjectWorker.c)
 *     _HMPkheFromObjectWorker @ 0x140094FC8 (_HMPkheFromObjectWorker.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140095370 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     EtwTraceUserDestroyHandle @ 0x140118DB8 (EtwTraceUserDestroyHandle.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x140118E28 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HMFreeUserOrIsolatedType@@YAXW4HM_OBJ_CREATE_FLAGS@@EPEAX@Z @ 0x140134F94 (-HMFreeUserOrIsolatedType@@YAXW4HM_OBJ_CREATE_FLAGS@@EPEAX@Z.c)
 *     Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline @ 0x14016E984 (Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline.c)
 *     HMCleanupObjectSecurity @ 0x14017E734 (HMCleanupObjectSecurity.c)
 *     SharedFree @ 0x14018CFA0 (SharedFree.c)
 *     HMCleanupGrantedHandle @ 0x14018D960 (HMCleanupGrantedHandle.c)
 *     ?HMDoubleFree@@YAXPEAX@Z @ 0x14018FCD0 (-HMDoubleFree@@YAXPEAX@Z.c)
 *     ?CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z @ 0x1401B34C0 (-CheckForDoubleFree@@YAXPEAU_HANDLEENTRY@@PEAU_HEAD@@@Z.c)
 *     Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline @ 0x1401B34F8 (Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z @ 0x1401CF4C4 (-RemoveHandle@Win32JobObject@@YAXPEAXPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall HMFreeObject(struct _HEAD *a1, int a2, int a3)
{
  __int64 v4; // r15
  int v5; // r8d
  int v6; // edx
  int v7; // r8d
  ULONG_PTR v8; // rbx
  int v9; // edx
  int v10; // r8d
  Win32JobObject ***BugCheckParameter4; // rsi
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // rax
  unsigned __int16 v18; // bp
  Win32JobObject **v19; // r14
  __int64 UserSessionState; // rax
  unsigned int EtwUserHandleType; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  struct _HANDLEENTRY *v24; // r8
  __int64 v25; // r9
  char v26; // al
  Win32JobObject *v27; // rcx
  int v28; // edx
  int v29; // r8d
  __int16 v30; // ax
  _QWORD *v31; // rax
  Win32JobObject **v32; // rcx
  int v33; // r8d
  __int64 v34; // rbx
  int v35; // edx
  int v36; // r8d
  _QWORD **v38; // rdx
  _QWORD *v39; // rcx
  struct _HEAD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // edx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  struct _ERESOURCE *v49; // rcx
  bool v50; // zf
  __int64 v51; // rdx
  struct _HEAD *v52; // r8
  __int64 v53; // rdx
  void *v54; // rcx
  PERESOURCE v55; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v55 = *(PERESOURCE *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 42360);
  LockRefactorStagingAssertOwned(&v55, (int)v55, v5);
  v8 = HMPheFromObjectWorker(a1, v6, v7);
  BugCheckParameter4 = (Win32JobObject ***)HMPkheFromObjectWorker(a1, v9, v10);
  if ( !(unsigned int)Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (unsigned int)Feature_Servicing_HMDoubleFree_resilience__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *BugCheckParameter4 != (Win32JobObject **)a1 )
      {
        LODWORD(v55) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2525LL);
      }
      if ( (HIWORD(*(_DWORD *)a1) & 0x7FFF) != *(_WORD *)(v8 + 26) )
      {
        LODWORD(v55) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2526LL);
      }
    }
    if ( BugCheckParameter4[3] )
    {
      LOBYTE(v41) = *(_BYTE *)(v8 + 24);
      HMCleanupObjectSecurity(BugCheckParameter4, v41);
      GreDeleteFastMutex((char *)BugCheckParameter4[3], v42, v43, v44);
    }
  }
  if ( *((_DWORD *)a1 + 2) )
  {
    v45 = *(unsigned __int8 *)(v8 + 24);
    if ( v45 > 0xC )
    {
      if ( v45 == 13 )
      {
        LODWORD(v55) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2562LL);
        goto LABEL_3;
      }
    }
    else if ( v45 <= 5 && !*(_BYTE *)(v8 + 24) )
    {
      goto LABEL_3;
    }
    KeBugCheckEx(0x164u, 0x1CuLL, (ULONG_PTR)a1, *((unsigned int *)a1 + 2), *(unsigned __int8 *)(v8 + 24));
  }
LABEL_3:
  if ( (unsigned int)Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline() )
  {
    CheckForDoubleFree((struct _HANDLEENTRY *)v8, a1);
    if ( *BugCheckParameter4 != (Win32JobObject **)a1 )
      KeBugCheckEx(0x164u, 0x1FuLL, (ULONG_PTR)a1, v8, (ULONG_PTR)BugCheckParameter4);
  }
  else if ( !*(_BYTE *)(v8 + 24) )
  {
    HMDoubleFree((ULONG_PTR)a1);
  }
  if ( BugCheckParameter4[2] )
  {
    LODWORD(v55) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2631LL);
  }
  if ( *(_BYTE *)(v8 + 24) == 16 )
  {
    v38 = (_QWORD **)(W32GetUserSessionState(v13, v12, v14) + 57536);
    v39 = *v38;
    while ( v39 != v38 )
    {
      v40 = (struct _HEAD *)(v39 - 9);
      v39 = (_QWORD *)*v39;
      if ( v40 == a1 )
        KeBugCheckEx(0x164u, 0x1FuLL, (ULONG_PTR)a1, v8, (ULONG_PTR)BugCheckParameter4);
    }
  }
  if ( (unsigned int)Feature_HandleManagerHardening__private_IsEnabledDeviceUsageNoInline() && BugCheckParameter4[3] )
  {
    LOBYTE(v15) = *(_BYTE *)(v8 + 24);
    HMCleanupObjectSecurity(BugCheckParameter4, v15);
    GreDeleteFastMutex((char *)BugCheckParameter4[3], v46, v47, v48);
  }
  v17 = *(unsigned __int8 *)(v8 + 24);
  v18 = *((_WORD *)&unk_14025552C + 12 * v17);
  if ( (v18 & 2) != 0 )
  {
    v19 = BugCheckParameter4[1];
  }
  else
  {
    if ( (v18 & 1) == 0 )
    {
      v19 = 0LL;
      goto LABEL_13;
    }
    v19 = (Win32JobObject **)BugCheckParameter4[1][57];
  }
  if ( v19 )
    --*((_DWORD *)v19 + 17);
LABEL_13:
  UserSessionState = W32GetUserSessionState(3 * (int)v17, v15, v16);
  --*(_DWORD *)(UserSessionState + 19852);
  if ( v19 )
    PsGetProcessId(*v19);
  EtwUserHandleType = GetEtwUserHandleType(*(_BYTE *)(v8 + 24));
  EtwTraceUserDestroyHandle(**BugCheckParameter4, EtwUserHandleType, v22);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    Win32JobObject::RemoveHandle(**BugCheckParameter4, (void *)v8, v24);
  }
  else if ( (*(_BYTE *)(v8 + 25) & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(**BugCheckParameter4);
    *(_BYTE *)(v8 + 25) &= ~0x20u;
  }
  if ( (v18 & 0x10) != 0 )
  {
    v49 = (struct _ERESOURCE *)*((_QWORD *)a1 + 3);
    *((_QWORD *)a1 + 3) = 0LL;
    v50 = (*(_BYTE *)(v8 + 25) & 0x40) == 0;
    v55 = v49;
    if ( v50 )
    {
      v52 = (struct _HEAD *)*((_QWORD *)a1 + 5);
      if ( !v52 || v52 == a1 )
      {
        RtlFreeHeap(v49[1].SharedWaiters, 0, a1);
        goto LABEL_65;
      }
      RtlFreeHeap(v49[1].SharedWaiters, 0, v52);
    }
    else
    {
      GreDeleteFastMutex(*((char **)a1 + 5), v23, (__int64)v24, v25);
    }
    LOBYTE(v51) = *(_BYTE *)(v8 + 24);
    HMFreeUserOrIsolatedType(v18, v51, a1);
LABEL_65:
    DeferrableUnlockObjectAssignment<tagDESKTOP>(&v55, v53);
    goto LABEL_22;
  }
  if ( (v18 & 0x40) != 0 )
  {
    v54 = (void *)*((_QWORD *)a1 + 5);
    if ( !v54 )
    {
      SharedFree(a1);
      goto LABEL_22;
    }
    SharedFree(v54);
  }
  else
  {
    v26 = *(_BYTE *)(v8 + 24);
    if ( v26 == 19 )
    {
      v27 = (*BugCheckParameter4)[4];
LABEL_21:
      ObfDereferenceObject(v27);
      goto LABEL_22;
    }
    if ( v26 == 22 )
    {
      v4 = (__int64)(*BugCheckParameter4)[2];
      v27 = *(Win32JobObject **)(v4 + 32);
      goto LABEL_21;
    }
    if ( (v18 & 0x100) != 0 )
    {
      v55 = (PERESOURCE)*((_QWORD *)a1 + 3);
      DeferrableUnlockObjectAssignment<tagDESKTOP>(&v55, v23);
    }
  }
  LOBYTE(v23) = *(_BYTE *)(v8 + 24);
  HMFreeUserOrIsolatedType(v18, v23, a1);
LABEL_22:
  v30 = (*(_WORD *)(v8 + 26) + 1) & 0x7FFF;
  if ( v30 == 0x7FFF )
    v30 = 1;
  *(_OWORD *)v8 = 0LL;
  *(_OWORD *)(v8 + 16) = 0LL;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  *((_OWORD *)BugCheckParameter4 + 1) = 0LL;
  BugCheckParameter4[4] = 0LL;
  *(_WORD *)(v8 + 26) = v30;
  v31 = (_QWORD *)W32GetUserSessionState(0, v28, v29);
  v34 = (__int64)(v8 - v31[2490]) >> 5;
  if ( (v34 & 1) != 0 )
  {
    v32 = (Win32JobObject **)v31[2467];
    *BugCheckParameter4 = v32;
    v31[2467] = v34;
  }
  else
  {
    *BugCheckParameter4 = (Win32JobObject **)v31[2466];
    v31[2466] = v34;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState((_DWORD)v32, (_DWORD)v31, v33) + 19792) && v4 )
    HMUnlockObject(v4, v35, v36);
  return 1LL;
}
