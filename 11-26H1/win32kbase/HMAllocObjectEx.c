/*
 * XREFs of HMAllocObjectEx @ 0x14011DE20
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x14011DC04 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14011DC94 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     HMAllocObject @ 0x14011DE00 (HMAllocObject.c)
 *     UserCreateBaseWindowHandle @ 0x1401EA460 (UserCreateBaseWindowHandle.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x140048890 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     HMHandleFromIndex @ 0x1400952F8 (HMHandleFromIndex.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140095370 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     EtwTraceUserCreateHandle @ 0x140095724 (EtwTraceUserCreateHandle.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KW4HM_OBJ_CREATE_FLAGS@@E@Z @ 0x1400B84FC (-HMAllocateUserOrIsolatedType@@YAPEAX_KW4HM_OBJ_CREATE_FLAGS@@E@Z.c)
 *     LockObjectAssignment @ 0x1400BC070 (LockObjectAssignment.c)
 *     ?HMFreeUserOrIsolatedType@@YAXW4HM_OBJ_CREATE_FLAGS@@EPEAX@Z @ 0x140134F94 (-HMFreeUserOrIsolatedType@@YAXW4HM_OBJ_CREATE_FLAGS@@EPEAX@Z.c)
 *     DesktopAlloc @ 0x14014390C (DesktopAlloc.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x140153418 (-HMGrowHandleTable@@YAHXZ.c)
 *     SharedAlloc @ 0x14018F340 (SharedAlloc.c)
 */

__int64 __fastcall HMAllocObjectEx(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // r15
  void *v6; // rdi
  __int64 v8; // r12
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  unsigned __int16 v15; // si
  __int64 v16; // rdx
  __int64 UserSessionState; // rbp
  int v18; // r8d
  __int64 v19; // rcx
  __int64 *v20; // rbx
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int16 v26; // bp
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // rbx
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // r14
  __int64 v41; // r15
  int v42; // edx
  int v43; // r8d
  int v44; // edx
  int v45; // r8d
  int v46; // edx
  __int64 v47; // rax
  int v48; // r8d
  __int64 *v49; // rcx
  __int64 v50; // rcx
  unsigned int v51; // eax
  __int64 v52; // rax
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  unsigned int v56; // ebx
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  int v63; // ebx
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  int EtwUserHandleType; // ebx
  unsigned int v68; // eax
  __int64 result; // rax
  __int64 v70; // [rsp+28h] [rbp-50h]
  PERESOURCE v71; // [rsp+30h] [rbp-48h] BYREF
  __int64 v72; // [rsp+38h] [rbp-40h]
  int v74; // [rsp+90h] [rbp+18h]

  v5 = a4;
  v6 = 0LL;
  v72 = 0LL;
  v74 = 0;
  v8 = (unsigned __int8)a3;
  v71 = *(PERESOURCE *)(W32GetUserSessionState(a1, a2, a3) + 42360);
  LockRefactorStagingAssertOwned(&v71, v10, v11);
  v15 = *((_WORD *)&gahti + 12 * v8 + 6);
  if ( (v15 & 3) != 0 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 1) != 0 )
      return 0LL;
    v13 = *(_QWORD *)(a1 + 456);
    v72 = v13;
    if ( *(_DWORD *)(v13 + 68) >= gUserProcessHandleQuota )
      goto LABEL_11;
  }
  UserSessionState = W32GetUserSessionState(v13, v12, v14);
  LODWORD(v19) = 0;
  while ( 1 )
  {
    if ( (_BYTE)v8 != 1 )
    {
      v20 = (__int64 *)(UserSessionState + 19736);
      v71 = (PERESOURCE)(UserSessionState + 19736);
      if ( *(_QWORD *)(UserSessionState + 19736) )
        break;
    }
    v20 = (__int64 *)(UserSessionState + 19728);
    v71 = (PERESOURCE)(UserSessionState + 19728);
    if ( *(_QWORD *)(UserSessionState + 19728) )
      break;
    v21 = HMGrowHandleTable();
    LODWORD(v19) = 0;
    if ( !v21 )
      goto LABEL_11;
  }
  if ( !v20 )
  {
LABEL_11:
    v22 = 1158;
LABEL_64:
    UserSetLastError(v22);
    return 0LL;
  }
  if ( (v15 & 0x10) != 0 && a2 )
  {
    v6 = HMAllocateUserOrIsolatedType(v5, v15, v8);
    if ( v6 )
    {
      v23 = DesktopAlloc(a2, *((unsigned int *)&gahti + 6 * v8 + 4), ((_DWORD)v8 << 16) | 5u);
      *((_QWORD *)v6 + 5) = v23;
      if ( v23 )
      {
        LockObjectAssignment((void **)v6 + 3, (void *)a2);
        v25 = *((_QWORD *)v6 + 5);
        *((_QWORD *)v6 + 4) = v6;
        v19 = v25 - *(_QWORD *)(a2 + 136);
        *((_QWORD *)v6 + 6) = v19;
      }
      else
      {
        LOBYTE(v24) = v8;
        HMFreeUserOrIsolatedType(v15, v24, v6);
        v6 = 0LL;
      }
    }
    v26 = v15 & 0x40;
  }
  else
  {
    v26 = v15 & 0x40;
    if ( (v15 & 0x40) != 0 )
    {
      if ( *((_DWORD *)&gahti + 6 * v8 + 4) )
      {
        v6 = HMAllocateUserOrIsolatedType(v5, v15, v8);
        if ( v6 )
        {
          v27 = SharedAlloc(*((unsigned int *)&gahti + 6 * v8 + 4));
          *((_QWORD *)v6 + 5) = v27;
          if ( v27 )
          {
            *((_QWORD *)v6 + 3) = 0LL;
            *((_QWORD *)v6 + 4) = 0LL;
            v19 = *(_QWORD *)(W32GetUserSessionState(v29, v28, v30) + 19896);
            *((_QWORD *)v6 + 6) = *((_QWORD *)v6 + 5) - v19;
          }
          else
          {
            GreDeleteFastMutex((char *)v6, v28, v30, v31);
            v6 = 0LL;
          }
        }
      }
    }
    else
    {
      if ( a2 || (v74 = 1, (v15 & 0x20) == 0) )
        v74 = 0;
      v6 = HMAllocateUserOrIsolatedType(v5, v15, v8);
      if ( !v6 )
        goto LABEL_63;
      if ( (_BYTE)v8 == 1 )
      {
        v32 = Win32AllocPoolWithQuotaZInitImpl(
                v19,
                *((unsigned int *)&gahti + 6 * v8 + 4),
                *((_DWORD *)&gahti + 6 * v8 + 2));
        *((_QWORD *)v6 + 5) = v32;
        if ( !v32 )
        {
          LOBYTE(v16) = 1;
          HMFreeUserOrIsolatedType(v15, v16, v6);
          v6 = 0LL;
        }
      }
      v26 = 0;
      if ( (v15 & 0x100) != 0 )
      {
        LockObjectAssignment((void **)v6 + 3, (void *)a2);
        *((_QWORD *)v6 + 4) = v6;
      }
    }
  }
  if ( !v6 )
  {
LABEL_63:
    v22 = 8;
    goto LABEL_64;
  }
  v33 = *v20;
  v70 = *v20;
  v34 = *(_QWORD *)(W32GetUserSessionState(v19, v16, v18) + 19920) + 32 * v33;
  v38 = W32GetUserSessionState(v36, v35, v37);
  v39 = (int)v71;
  v40 = 5 * v33;
  v41 = *(_QWORD *)(v38 + 19864);
  v71->SystemResourcesList.Flink = *(struct _LIST_ENTRY **)(v41 + 8 * v40);
  if ( (unsigned int)v70 > *(_DWORD *)(W32GetUserSessionState(v39, v42, v43) + 19848) )
    *(_DWORD *)(W32GetUserSessionState(v70, v44, v45) + 19848) = v70;
  v46 = 0;
  *(_BYTE *)(v34 + 24) = v8;
  *(_QWORD *)(v41 + 8 * v40) = v6;
  *(_QWORD *)(v41 + 8 * v40 + 24) = 0LL;
  *(_QWORD *)(v41 + 8 * v40 + 32) = _InterlockedIncrement64(&HandleSequenceNumber);
  if ( v26 )
  {
    *(_QWORD *)v34 = *((_QWORD *)v6 + 6);
  }
  else if ( (v15 & 0x10) != 0 && a2 )
  {
    *(_QWORD *)v34 = *((_QWORD *)v6 + 6);
    *(_QWORD *)(v34 + 16) = ***(_QWORD ***)(a2 + 8);
  }
  else
  {
    *(_QWORD *)v34 = 0LL;
  }
  if ( v74 )
    *(_BYTE *)(v34 + 25) |= 0x40u;
  if ( a5 )
    *(_BYTE *)(v34 + 25) |= 0x80u;
  if ( (v15 & 2) != 0 )
  {
    *((_QWORD *)v6 + 2) = 0LL;
    *(_QWORD *)(v41 + 8 * v40 + 8) = *(_QWORD *)(a1 + 456);
    *(_QWORD *)(v34 + 8) = PsGetProcessId(**(PEPROCESS **)(a1 + 456));
    if ( (v15 & 4) != 0 )
      *((_QWORD *)v6 + 3) = *(_QWORD *)(a1 + 456);
  }
  else if ( (v15 & 1) != 0 )
  {
    *(_QWORD *)(v41 + 8 * v40 + 8) = a1;
    *(_QWORD *)(v34 + 8) = PsGetThreadId(*(PETHREAD *)a1);
    *((_QWORD *)v6 + 2) = *(_QWORD *)(v41 + 8 * v40 + 8);
  }
  v47 = HMHandleFromIndex(v70, v46, v45);
  *(_QWORD *)v6 = v47;
  if ( *((_DWORD *)&gahti + 6 * v8 + 4) )
  {
    v49 = (__int64 *)*((_QWORD *)v6 + 5);
    *v49 = v47;
    v49[1] = *((_QWORD *)v6 + 6);
  }
  v50 = v72;
  if ( v72 )
  {
    v51 = *(_DWORD *)(v72 + 68) + 1;
    *(_DWORD *)(v72 + 68) = v51;
    if ( v51 > *(_DWORD *)(v50 + 72) )
      *(_DWORD *)(v50 + 72) = v51;
  }
  v52 = W32GetUserSessionState(v50, 3 * (int)v8, v48);
  ++*(_DWORD *)(v52 + 19852);
  v56 = *(_DWORD *)(W32GetUserSessionState(v54, v53, v55) + 19852);
  if ( v56 > *(_DWORD *)(W32GetUserSessionState(v58, v57, v59) + 19856) )
  {
    v63 = *(_DWORD *)(W32GetUserSessionState(v61, v60, v62) + 19852);
    *(_DWORD *)(W32GetUserSessionState(v65, v64, v66) + 19856) = v63;
  }
  EtwUserHandleType = GetEtwUserHandleType(v8);
  if ( (v15 & 3) != 0 )
    v68 = (unsigned int)PsGetProcessId(**(PEPROCESS **)(a1 + 456)) & 0xFFFFFFFC;
  else
    v68 = 0;
  EtwTraceUserCreateHandle(*(_QWORD *)v6, EtwUserHandleType, v68);
  result = *(_QWORD *)(v41 + 8 * v40);
  *(_QWORD *)(v41 + 8 * v40 + 16) = 0LL;
  return result;
}
