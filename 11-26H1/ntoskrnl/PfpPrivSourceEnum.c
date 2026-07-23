/*
 * XREFs of PfpPrivSourceEnum @ 0x14091DEAC
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140A5C19C (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     SeSecurityAttributePresent @ 0x1402FF790 (SeSecurityAttributePresent.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1404AD4E0 (MmQueryProcessWorkingSetSwapPages.c)
 *     MmQuerySystemMemoryInformation @ 0x1404C6990 (MmQuerySystemMemoryInformation.c)
 *     SmStoreExistsForProcess @ 0x14050D5B8 (SmStoreExistsForProcess.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ExGetNextProcess @ 0x14091E590 (ExGetNextProcess.c)
 *     PfpPrivSourceAdd @ 0x14091E774 (PfpPrivSourceAdd.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140933444 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SmProcessQueryStoreStats @ 0x1409BC61C (SmProcessQueryStoreStats.c)
 */

__int64 __fastcall PfpPrivSourceEnum(__int64 a1, KPROCESSOR_MODE a2, _DWORD *a3)
{
  char v5; // r12
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  _DWORD *v8; // rdi
  unsigned int v9; // eax
  void *i; // rcx
  __int64 NextProcess; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  int SystemMemoryInformation; // ebx
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  char v18; // al
  _BYTE *v19; // rax
  unsigned __int64 v20; // rax
  void *j; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  struct _KLOCK_ENTRIES *v24; // r9
  ULONG_PTR v25; // rdi
  char v26; // bl
  bool v27; // al
  struct _KTHREAD *CurrentThread; // r13
  struct _KLOCK_ENTRIES *v29; // r9
  void *v30; // rdx
  LegacyAutoBoost *v31; // rbx
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  _BYTE *v34; // rcx
  char v35; // al
  _BYTE *v36; // rax
  __int64 v37; // rax
  int IsAppContainerOrIdentifyLevelContext; // eax
  __int128 v40; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-198h]
  int v42; // [rsp+50h] [rbp-188h] BYREF
  int v43; // [rsp+54h] [rbp-184h]
  int v44; // [rsp+58h] [rbp-180h]
  __int64 v45; // [rsp+60h] [rbp-178h]
  __int64 v46; // [rsp+68h] [rbp-170h]
  unsigned __int64 v47; // [rsp+70h] [rbp-168h]
  unsigned __int64 v48; // [rsp+78h] [rbp-160h]
  int SessionId; // [rsp+80h] [rbp-158h]
  _BYTE v50[20]; // [rsp+84h] [rbp-154h] BYREF
  unsigned __int64 v51; // [rsp+98h] [rbp-140h] BYREF
  unsigned __int64 v52; // [rsp+A0h] [rbp-138h]
  int v53; // [rsp+A8h] [rbp-130h]
  unsigned int v54; // [rsp+ACh] [rbp-12Ch]
  unsigned __int64 v55; // [rsp+B0h] [rbp-128h]
  _DWORD *v56; // [rsp+B8h] [rbp-120h]
  PVOID Object; // [rsp+C0h] [rbp-118h]
  __int128 v58; // [rsp+C8h] [rbp-110h] BYREF
  int v59; // [rsp+F0h] [rbp-E8h] BYREF
  int v60; // [rsp+F4h] [rbp-E4h]
  _QWORD SystemInformation[8]; // [rsp+160h] [rbp-78h] BYREF

  v56 = a3;
  memset_0(&v59, 0, 0x70uLL);
  memset_0(&v42, 0, 0x60uLL);
  memset_0(SystemInformation, 0, sizeof(SystemInformation));
  v58 = 0LL;
  v5 = 0;
  v55 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v6 = 0LL;
  Object = 0LL;
  LODWORD(v7) = 0;
  v8 = *(_DWORD **)(a1 + 16);
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 < 0x10 )
  {
    SystemMemoryInformation = -1073741789;
    goto LABEL_20;
  }
  if ( a2 )
  {
    ProbeForWrite(*(volatile void **)(a1 + 16), v9, 8u);
    RtlCopyFromUser(&v59, v8, 0x10uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v59, *(const void **)(a1 + 16), 0x10uLL);
  }
  if ( a2 )
    RtlWriteULongToUser(v8 + 2, 0);
  else
    v8[2] = 0;
  if ( v59 != 8 || (v60 & 0xFFFFFFF8) != 0 || (v60 & 3) == 3 )
  {
    SystemMemoryInformation = -1073741811;
    goto LABEL_20;
  }
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
  {
    IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL);
    SystemMemoryInformation = IsAppContainerOrIdentifyLevelContext;
    if ( IsAppContainerOrIdentifyLevelContext == -1073741659 )
    {
      v5 = 1;
      goto LABEL_13;
    }
    if ( IsAppContainerOrIdentifyLevelContext < 0 )
      goto LABEL_20;
    v5 = 0;
  }
  ++*((_QWORD *)&v40 + 1);
LABEL_13:
  for ( i = 0LL; ; i = (void *)NextProcess )
  {
    NextProcess = ExGetNextProcess(i);
    v6 = NextProcess;
    if ( !NextProcess )
      break;
    ++*((_QWORD *)&v40 + 1);
  }
  if ( *((_QWORD *)&v40 + 1) > 0xFFFFFFFFuLL || (v12 = 96LL * *((_QWORD *)&v40 + 1) + 16, v12 > 0xFFFFFFFF) )
  {
    SystemMemoryInformation = -1073741670;
  }
  else
  {
    LODWORD(v7) = 96 * DWORD2(v40) + 16;
    v13 = *(_DWORD *)(a1 + 24);
    if ( (unsigned int)v12 <= v13 )
    {
      HIDWORD(v41) = (v13 - 16) / 0x60;
      *(_QWORD *)&v40 = v8;
      if ( v5 )
        goto LABEL_36;
      v43 = -1;
      v46 = 0xFFFFFFFFLL;
      v16 = 16LL;
      v17 = v50;
      do
      {
        if ( v16 == -2147483630 )
          break;
        v18 = v17["KernelSpace" - v50];
        if ( !v18 )
          break;
        *v17++ = v18;
        --v16;
      }
      while ( v16 );
      v19 = v17 - 1;
      if ( v16 )
        v19 = v17;
      *v19 = 0;
      SystemMemoryInformation = ZwQuerySystemInformation(SystemPagedPoolInformationEx, SystemInformation, 0x40u, 0LL);
      if ( SystemMemoryInformation >= 0 )
      {
        SystemMemoryInformation = MmQuerySystemMemoryInformation((_KPROCESS **)&v58);
        if ( SystemMemoryInformation >= 0 )
        {
          v47 = SystemInformation[0] >> 12;
          v20 = v58;
          if ( (unsigned __int64)v58 <= SystemInformation[0] >> 12 )
            v20 = SystemInformation[0] >> 12;
          v48 = v20;
          SystemMemoryInformation = PfpPrivSourceAdd(&v40, &v42);
          if ( SystemMemoryInformation >= 0 )
          {
LABEL_36:
            for ( j = 0LL; ; j = (void *)v6 )
            {
              v6 = ExGetNextProcess(j);
              if ( !v6 )
                break;
              memset_0(&v42, 0, 0x60uLL);
              if ( (v60 & 4) == 0 || (*(_DWORD *)(v6 + 1532) & 1) == 0 )
              {
                v42 = 2;
                v43 = *(_DWORD *)(v6 + 464);
                v44 = *(_DWORD *)(v6 + 900);
                v45 = (*(_QWORD *)(v6 + 464) ^ *(_QWORD *)(v6 + 504)) & 0x1FFFFFFFFFFFFFFFLL;
                v46 = *(unsigned int *)(v6 + 464);
                v47 = *(_QWORD *)(v6 + 1184);
                if ( v47 > *(_QWORD *)(v6 + 1176) )
                  v52 = v47;
                else
                  v52 = *(_QWORD *)(v6 + 1176);
                v22 = *(_QWORD *)(v6 + 648);
                if ( v22 <= v47 )
                  v22 = v47;
                v48 = v22;
                SessionId = PsGetSessionIdEx(v6);
                v25 = PsReferencePrimaryTokenWithTag(v6, 0x746C6644u, v23, v24);
                v26 = SeSecurityAttributePresent(v25, (const UNICODE_STRING *)&PspSysAppIdClaim);
                ObFastDereferenceObject((signed __int64 *)(v6 + 584), v25, 0x746C6644u);
                v54 = v54 & 0xFFFFFFFE | v26 & 1;
                v27 = SmStoreExistsForProcess(v6);
                v54 = v54 & 0xFFFFFFF7 | (8 * v27);
                v54 = v54 & 0xFFFFFFEF | (*(_QWORD *)(v6 + 1648) != 0LL ? 0x10 : 0);
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                v31 = (LegacyAutoBoost *)KeAbPreAcquire(v6 + 456, 0LL, 0LL, v29);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 456), 17LL, 0LL) )
                  ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 456), 0, v31, (struct _KTHREAD *)(v6 + 456));
                if ( v31 )
                {
                  if ( (KiAbpGlobalState & 1) != 0 )
                    AutoBoost::KiAbpPostAcquire(v31, v30);
                  else
                    *((_BYTE *)v31 + 10) = 1;
                }
                v32 = *(_QWORD *)(v6 + 1584);
                PspUnlockProcessShared(v6, (__int64)CurrentThread);
                if ( v32 )
                {
                  v54 |= 2u;
                  v53 = v32 / 0x2710;
                }
                if ( *(_BYTE *)(v6 + 1210) == 2 )
                  v54 |= 4u;
                v33 = 16LL;
                v34 = v50;
                do
                {
                  if ( v33 == -2147483630 )
                    break;
                  v35 = v34[v6 - (_QWORD)v50 + 824];
                  if ( !v35 )
                    break;
                  *v34++ = v35;
                  --v33;
                }
                while ( v33 );
                v36 = v34 - 1;
                if ( v33 )
                  v36 = v34;
                *v36 = 0;
                if ( (v60 & 1) != 0 )
                {
                  MmQueryProcessWorkingSetSwapPages(v6, &v51);
                }
                else if ( (v60 & 2) != 0 && (int)SmProcessQueryStoreStats((struct _EPROCESS *)v6) >= 0 )
                {
                  v51 = v55 >> 12;
                }
                SystemMemoryInformation = PfpPrivSourceAdd(&v40, &v42);
                if ( SystemMemoryInformation < 0 )
                  goto LABEL_20;
              }
            }
            LODWORD(v7) = 96 * v41 + 16;
            SystemMemoryInformation = 0;
          }
        }
      }
    }
    else
    {
      SystemMemoryInformation = -1073741789;
    }
  }
LABEL_20:
  if ( v6 )
    ObfDereferenceObjectWithTag((PVOID)v6, 0x6E457350u);
  if ( SystemMemoryInformation == -1073741789 )
  {
    v37 = *((_QWORD *)&v40 + 1);
    if ( (unsigned __int64)(unsigned int)(v41 + 1) > *((_QWORD *)&v40 + 1) )
      v37 = (unsigned int)(v41 + 1);
    v7 = 96 * v37 + 16;
    if ( v7 > 0xFFFFFFFF )
    {
      LODWORD(v7) = 0;
      SystemMemoryInformation = -1073741670;
    }
  }
  *a3 = v7;
  return (unsigned int)SystemMemoryInformation;
}
