/*
 * XREFs of PfpPrivSourceEnum @ 0x14096984C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140A52EAC (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     PspUnlockProcessShared @ 0x14027CFB0 (PspUnlockProcessShared.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SeSecurityAttributePresent @ 0x1402B4AC0 (SeSecurityAttributePresent.c)
 *     PsGetSessionIdEx @ 0x14030B820 (PsGetSessionIdEx.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1404B3F10 (MmQueryProcessWorkingSetSwapPages.c)
 *     MmQuerySystemMemoryInformation @ 0x1404CD1F0 (MmQuerySystemMemoryInformation.c)
 *     SmStoreExistsForProcess @ 0x140513B48 (SmStoreExistsForProcess.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1409034B4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     ExGetNextProcess @ 0x140969F30 (ExGetNextProcess.c)
 *     PfpPrivSourceAdd @ 0x14096A114 (PfpPrivSourceAdd.c)
 *     SmProcessQueryStoreStats @ 0x14096EFCC (SmProcessQueryStoreStats.c)
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
  int SystemInformation; // ebx
  _DWORD *v15; // rdi
  __int64 v17; // rdx
  _BYTE *v18; // rcx
  char v19; // al
  _BYTE *v20; // rax
  unsigned __int64 v21; // rax
  void *j; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  struct _KLOCK_ENTRIES *v25; // r9
  ULONG_PTR v26; // rdi
  char v27; // bl
  bool v28; // al
  struct _KTHREAD *CurrentThread; // r13
  struct _KLOCK_ENTRIES *v30; // r9
  void *v31; // rdx
  LegacyAutoBoost *v32; // rbx
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  _BYTE *v35; // rcx
  char v36; // al
  _BYTE *v37; // rax
  __int64 v38; // rax
  int IsAppContainerOrIdentifyLevelContext; // eax
  char v40[8]; // [rsp+20h] [rbp-1B8h] BYREF
  _DWORD *v41; // [rsp+28h] [rbp-1B0h]
  __int128 v42; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-198h]
  int v44; // [rsp+50h] [rbp-188h] BYREF
  int v45; // [rsp+54h] [rbp-184h]
  int v46; // [rsp+58h] [rbp-180h]
  __int64 v47; // [rsp+60h] [rbp-178h]
  __int64 v48; // [rsp+68h] [rbp-170h]
  unsigned __int64 v49; // [rsp+70h] [rbp-168h]
  unsigned __int64 v50; // [rsp+78h] [rbp-160h]
  int SessionId; // [rsp+80h] [rbp-158h]
  _BYTE v52[20]; // [rsp+84h] [rbp-154h] BYREF
  unsigned __int64 v53; // [rsp+98h] [rbp-140h] BYREF
  unsigned __int64 v54; // [rsp+A0h] [rbp-138h]
  int v55; // [rsp+A8h] [rbp-130h]
  unsigned int v56; // [rsp+ACh] [rbp-12Ch]
  unsigned __int64 v57; // [rsp+B0h] [rbp-128h]
  _DWORD *v58; // [rsp+B8h] [rbp-120h]
  PVOID Object; // [rsp+C0h] [rbp-118h]
  __int128 v60; // [rsp+C8h] [rbp-110h] BYREF
  int v61; // [rsp+F0h] [rbp-E8h] BYREF
  int v62; // [rsp+F4h] [rbp-E4h]
  _QWORD v63[8]; // [rsp+160h] [rbp-78h] BYREF

  v41 = a3;
  v58 = a3;
  memset_0(&v61, 0, 0x70uLL);
  memset_0(&v44, 0, 0x60uLL);
  memset_0(v63, 0, sizeof(v63));
  v60 = 0LL;
  v5 = 0;
  v40[0] = 0;
  v57 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v6 = 0LL;
  Object = 0LL;
  LODWORD(v7) = 0;
  v8 = *(_DWORD **)(a1 + 16);
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 < 0x10 )
  {
    SystemInformation = -1073741789;
    goto LABEL_21;
  }
  if ( a2 )
  {
    ProbeForWrite(*(volatile void **)(a1 + 16), v9, 8u);
    RtlCopyFromUser(&v61, v8, 0x10uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v61, *(const void **)(a1 + 16), 0x10uLL);
  }
  if ( a2 )
    RtlWriteULongToUser(v8 + 2, 0);
  else
    v8[2] = 0;
  if ( v61 != 8 || (v62 & 0xFFFFFFF8) != 0 || (v62 & 3) == 3 )
  {
    SystemInformation = -1073741811;
    goto LABEL_21;
  }
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a2) )
  {
    IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, v40);
    SystemInformation = IsAppContainerOrIdentifyLevelContext;
    if ( IsAppContainerOrIdentifyLevelContext == -1073741659 )
    {
      v5 = 1;
      goto LABEL_14;
    }
    if ( IsAppContainerOrIdentifyLevelContext < 0 )
      goto LABEL_21;
    v5 = v40[0];
  }
  if ( !v5 )
    ++*((_QWORD *)&v42 + 1);
LABEL_14:
  for ( i = 0LL; ; i = (void *)NextProcess )
  {
    NextProcess = ExGetNextProcess(i);
    v6 = NextProcess;
    if ( !NextProcess )
      break;
    ++*((_QWORD *)&v42 + 1);
  }
  if ( *((_QWORD *)&v42 + 1) > 0xFFFFFFFFuLL || (v12 = 96LL * *((_QWORD *)&v42 + 1) + 16, v12 > 0xFFFFFFFF) )
  {
    SystemInformation = -1073741670;
  }
  else
  {
    LODWORD(v7) = 96 * DWORD2(v42) + 16;
    v13 = *(_DWORD *)(a1 + 24);
    if ( (unsigned int)v12 <= v13 )
    {
      HIDWORD(v43) = (v13 - 16) / 0x60;
      *(_QWORD *)&v42 = v8;
      if ( v5 )
        goto LABEL_37;
      v45 = -1;
      v48 = 0xFFFFFFFFLL;
      v17 = 16LL;
      v18 = v52;
      do
      {
        if ( v17 == -2147483630 )
          break;
        v19 = v18["KernelSpace" - v52];
        if ( !v19 )
          break;
        *v18++ = v19;
        --v17;
      }
      while ( v17 );
      v20 = v18 - 1;
      if ( v17 )
        v20 = v18;
      *v20 = 0;
      SystemInformation = ZwQuerySystemInformation(119LL, (__int64)v63);
      if ( SystemInformation >= 0 )
      {
        SystemInformation = MmQuerySystemMemoryInformation((_KPROCESS **)&v60);
        if ( SystemInformation >= 0 )
        {
          v49 = v63[0] >> 12;
          v21 = v60;
          if ( (unsigned __int64)v60 <= v63[0] >> 12 )
            v21 = v63[0] >> 12;
          v50 = v21;
          SystemInformation = PfpPrivSourceAdd(&v42, &v44);
          if ( SystemInformation >= 0 )
          {
LABEL_37:
            for ( j = 0LL; ; j = (void *)v6 )
            {
              v6 = ExGetNextProcess(j);
              if ( !v6 )
                break;
              memset_0(&v44, 0, 0x60uLL);
              if ( (v62 & 4) == 0 || (*(_DWORD *)(v6 + 1532) & 1) == 0 )
              {
                v44 = 2;
                v45 = *(_DWORD *)(v6 + 464);
                v46 = *(_DWORD *)(v6 + 900);
                v47 = (*(_QWORD *)(v6 + 464) ^ *(_QWORD *)(v6 + 504)) & 0x1FFFFFFFFFFFFFFFLL;
                v48 = *(unsigned int *)(v6 + 464);
                v49 = *(_QWORD *)(v6 + 1184);
                if ( v49 > *(_QWORD *)(v6 + 1176) )
                  v54 = v49;
                else
                  v54 = *(_QWORD *)(v6 + 1176);
                v23 = *(_QWORD *)(v6 + 648);
                if ( v23 <= v49 )
                  v23 = v49;
                v50 = v23;
                SessionId = PsGetSessionIdEx(v6);
                v26 = PsReferencePrimaryTokenWithTag(v6, 0x746C6644u, v24, v25);
                v27 = SeSecurityAttributePresent(v26, (const UNICODE_STRING *)&PspSysAppIdClaim);
                ObFastDereferenceObject((signed __int64 *)(v6 + 584), v26, 0x746C6644u);
                v56 = v56 & 0xFFFFFFFE | v27 & 1;
                v28 = SmStoreExistsForProcess(v6);
                v56 = v56 & 0xFFFFFFF7 | (8 * v28);
                v56 = v56 & 0xFFFFFFEF | (*(_QWORD *)(v6 + 1648) != 0LL ? 0x10 : 0);
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                v32 = (LegacyAutoBoost *)KeAbPreAcquire(v6 + 456, 0LL, 0LL, v30);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 456), 17LL, 0LL) )
                  ExfAcquirePushLockSharedEx((signed __int64 *)(v6 + 456), 0, v32, (struct _KTHREAD *)(v6 + 456));
                if ( v32 )
                {
                  if ( (KiAbpGlobalState & 1) != 0 )
                    AutoBoost::KiAbpPostAcquire(v32, v31);
                  else
                    *((_BYTE *)v32 + 10) = 1;
                }
                v33 = *(_QWORD *)(v6 + 1584);
                PspUnlockProcessShared(v6, (__int64)CurrentThread);
                if ( v33 )
                {
                  v56 |= 2u;
                  v55 = v33 / 0x2710;
                }
                if ( *(_BYTE *)(v6 + 1210) == 2 )
                  v56 |= 4u;
                v34 = 16LL;
                v35 = v52;
                do
                {
                  if ( v34 == -2147483630 )
                    break;
                  v36 = v35[v6 - (_QWORD)v52 + 824];
                  if ( !v36 )
                    break;
                  *v35++ = v36;
                  --v34;
                }
                while ( v34 );
                v37 = v35 - 1;
                if ( v34 )
                  v37 = v35;
                *v37 = 0;
                if ( (v62 & 1) != 0 )
                {
                  MmQueryProcessWorkingSetSwapPages(v6, &v53);
                }
                else if ( (v62 & 2) != 0 && (int)SmProcessQueryStoreStats((struct _EPROCESS *)v6) >= 0 )
                {
                  v53 = v57 >> 12;
                }
                SystemInformation = PfpPrivSourceAdd(&v42, &v44);
                if ( SystemInformation < 0 )
                  goto LABEL_21;
              }
            }
            LODWORD(v7) = 96 * v43 + 16;
            SystemInformation = 0;
          }
        }
      }
    }
    else
    {
      SystemInformation = -1073741789;
    }
  }
LABEL_21:
  v15 = v41;
  if ( v6 )
    ObfDereferenceObjectWithTag((PVOID)v6, 0x6E457350u);
  if ( SystemInformation == -1073741789 )
  {
    v38 = *((_QWORD *)&v42 + 1);
    if ( (unsigned __int64)(unsigned int)(v43 + 1) > *((_QWORD *)&v42 + 1) )
      v38 = (unsigned int)(v43 + 1);
    v7 = 96 * v38 + 16;
    if ( v7 > 0xFFFFFFFF )
    {
      LODWORD(v7) = 0;
      SystemInformation = -1073741670;
    }
  }
  *v15 = v7;
  return (unsigned int)SystemInformation;
}
