/*
 * XREFs of SmpHandleConnectionRequest @ 0x1400060A0
 * Callers:
 *     SmpApiCallback @ 0x140005930 (SmpApiCallback.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpReleaseControlBlock @ 0x140003C60 (SmpReleaseControlBlock.c)
 *     SmpInternalLogFailure @ 0x140005424 (SmpInternalLogFailure.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140005530 (SmpSearchKnownSubSysDatabase.c)
 *     SmpDereferenceKnownSubSys @ 0x140005F60 (SmpDereferenceKnownSubSys.c)
 *     SmpUnlockKnownSubSysList @ 0x1400073F0 (SmpUnlockKnownSubSysList.c)
 *     SmpLookupControlBlock @ 0x140007480 (SmpLookupControlBlock.c)
 *     SmpCreateKnownSubSys @ 0x140007520 (SmpCreateKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x1400075E8 (SmpDestroyControlBlock.c)
 *     SmpGetProcessId @ 0x1400078F0 (SmpGetProcessId.c)
 *     SmpReadySubSys @ 0x140007950 (SmpReadySubSys.c)
 *     SmpCheckSubSysStatus @ 0x14000B500 (SmpCheckSubSysStatus.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpDeleteSubSys @ 0x140018FEC (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x140019224 (SmpWaitForStatusChange.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

void __fastcall SmpHandleConnectionRequest(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile signed __int32 *v4; // rdi
  char v5; // r14
  HANDLE *v6; // r13
  volatile signed __int32 *KnownSubSys; // rsi
  int v8; // r15d
  char v9; // r12
  HANDLE v10; // rbx
  NTSTATUS v11; // edi
  volatile signed __int32 *v12; // r10
  unsigned int v13; // eax
  volatile signed __int32 *v14; // rbx
  __int64 v15; // r14
  _QWORD **v16; // rdi
  _QWORD *i; // rax
  char v18; // al
  char v19; // r8
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r8
  _QWORD **v25; // rdx
  _QWORD *v26; // rax
  unsigned int v27; // r9d
  volatile signed __int32 *v28; // r14
  __int64 v29; // rcx
  _QWORD *j; // rdx
  _DWORD *v31; // r10
  _QWORD *v32; // rdx
  _DWORD *v33; // r8
  _QWORD *v34; // rdx
  _QWORD *k; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rdx
  _QWORD *v39; // rcx
  char *Heap; // rax
  int *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r8
  HANDLE v44; // rax
  __int64 v45; // rax
  __int64 v46; // r14
  int v47; // eax
  _QWORD *v48; // rbx
  const WCHAR *v49; // rdx
  signed int v50; // eax
  char v51; // [rsp+60h] [rbp-A0h]
  char v52; // [rsp+61h] [rbp-9Fh]
  char v53; // [rsp+62h] [rbp-9Eh]
  char v54; // [rsp+63h] [rbp-9Dh]
  unsigned int v55; // [rsp+64h] [rbp-9Ch]
  _QWORD **ProcessInformation; // [rsp+68h] [rbp-98h] BYREF
  HANDLE ProcessHandle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h] BYREF
  __int64 v59; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v60; // [rsp+88h] [rbp-78h]
  _QWORD *v61; // [rsp+90h] [rbp-70h]
  __int64 v62; // [rsp+A0h] [rbp-60h]
  _DWORD v63[2]; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+B8h] [rbp-48h]
  __int64 v66; // [rsp+C0h] [rbp-40h]
  __int64 v67; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v68[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-20h]
  __int64 v70; // [rsp+E8h] [rbp-18h]
  struct _UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v72; // [rsp+100h] [rbp+0h]
  __int128 v73; // [rsp+110h] [rbp+10h]
  __int128 v74; // [rsp+120h] [rbp+20h]
  _DWORD v75[3]; // [rsp+130h] [rbp+30h] BYREF
  int v76; // [rsp+13Ch] [rbp+3Ch]
  __int64 v77; // [rsp+140h] [rbp+40h]
  __int64 v78; // [rsp+148h] [rbp+48h]
  __int128 v79; // [rsp+150h] [rbp+50h]
  __int128 v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+170h] [rbp+70h]
  _BYTE v82[200]; // [rsp+180h] [rbp+80h] BYREF
  __int64 ProcessId; // [rsp+248h] [rbp+148h]
  __int64 v84; // [rsp+250h] [rbp+150h]
  __int64 v85; // [rsp+258h] [rbp+158h]

  v58 = a3;
  v4 = 0LL;
  LODWORD(v60) = 0;
  v59 = 0LL;
  *(_QWORD *)&v74 = 0LL;
  DWORD2(v74) = 0;
  v5 = 0;
  v54 = 0;
  v6 = 0LL;
  v53 = 0;
  KnownSubSys = 0LL;
  v69 = a2;
  v62 = a2 + 40;
  v8 = 0;
  v9 = 1;
  v70 = a1;
  v67 = 0LL;
  DestinationString = 0LL;
  ProcessHandle = 0LL;
  v72 = 0LL;
  v63[1] = 0;
  v73 = 0LL;
  LODWORD(v65) = 0;
  v51 = 0;
  v61 = (_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a2 + 8) != SmpUniqueProcessId && !a4 )
  {
    LODWORD(v72) = 48;
    *((_QWORD *)&v72 + 1) = 0LL;
    DWORD2(v73) = 0;
    *(_QWORD *)&v73 = 0LL;
    v74 = 0LL;
    if ( (int)NtAlpcOpenSenderProcess(&ProcessHandle, a1, a2) < 0 )
    {
      ProcessHandle = 0LL;
      v9 = 0;
      goto LABEL_80;
    }
    v10 = ProcessHandle;
    LODWORD(ProcessInformation) = 0;
    v11 = NtQueryInformationProcess(ProcessHandle, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
    if ( v11 >= 0 )
    {
      v13 = (unsigned int)ProcessInformation;
      v12 = 0LL;
    }
    else
    {
      memset_0(v82, 0, sizeof(v82));
      v85 = 0LL;
      ProcessId = SmpGetProcessId(v10);
      v84 = 0LL;
      SmpInternalLogFailure((__int64)"SmpGetProcessMuSessionId", 140, v11, (__int64)v82);
      v13 = (unsigned int)v12;
    }
    v14 = v12;
    v55 = v13;
    v63[0] = (_DWORD)v12;
    v64 = v12;
    v66 = *v61;
    v15 = 24LL * (v13 & 0x1F);
    v65 = v66;
    v16 = (_QWORD **)(v15 + SmpKnownSubSysTable);
    v68[0] = 1LL;
    v68[1] = v15 + SmpKnownSubSysTable;
    RtlAcquireSRWLockShared(v15 + SmpKnownSubSysTable + 16);
    for ( i = *v16; i != v16; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i - 2) == v55 )
      {
        if ( *(i - 3) == v66 )
          v14 = (volatile signed __int32 *)(i - 9);
        if ( v14 )
        {
          _InterlockedIncrement(v14);
          SmpUnlockKnownSubSysList(v68);
LABEL_15:
          v18 = 0;
          goto LABEL_16;
        }
      }
    }
    SmpUnlockKnownSubSysList(v68);
    if ( v14 )
      goto LABEL_15;
    v21 = SmpLookupControlBlock(v55);
    v6 = (HANDLE *)v21;
    if ( !v21 )
      goto LABEL_15;
    v22 = *(_QWORD *)(v21 + 16);
    if ( *(_QWORD *)(v22 + 8) == *v61 )
    {
      KnownSubSys = (volatile signed __int32 *)SmpCreateKnownSubSys(1LL);
      v60 = (_QWORD *)(v15 + SmpKnownSubSysTable);
      v64 = (volatile signed __int32 *)&v59;
      LODWORD(v59) = 0;
      RtlAcquireSRWLockExclusive(v15 + SmpKnownSubSysTable + 16, v23, v24);
      v25 = (_QWORD **)v60;
      ProcessInformation = (_QWORD **)v60;
LABEL_25:
      v26 = *v25;
      v27 = v55;
      while ( v26 != v25 )
      {
        if ( *((_DWORD *)v26 - 2) == v55 )
        {
          v28 = (volatile signed __int32 *)(v26 - 9);
          if ( v26 == (_QWORD *)72 )
            break;
          while ( 1 )
          {
            if ( (v28[2] & 1) != 0 )
            {
              if ( !(unsigned int)SmpCheckSubSysStatus(v28) )
              {
                _InterlockedIncrement(v28);
                SmpWaitForStatusChange(v29, 0LL, &v59);
                if ( (v28[2] & 4) != 0 )
                {
                  SmpDereferenceKnownSubSys(v28);
                  v25 = ProcessInformation;
                  goto LABEL_25;
                }
                SmpDereferenceKnownSubSys(v28);
                v25 = ProcessInformation;
                v27 = v55;
              }
              v26 = (_QWORD *)*((_QWORD *)v28 + 9);
            }
            else
            {
              v26 = (_QWORD *)*v26;
            }
            if ( v26 != v25 )
            {
              v28 = (volatile signed __int32 *)(v26 - 9);
              if ( *((_DWORD *)v26 - 2) == v27 )
                continue;
            }
            goto LABEL_38;
          }
        }
        v26 = (_QWORD *)*v26;
      }
LABEL_38:
      if ( !*(_DWORD *)v22 && *(_QWORD *)(v22 + 8) == *v61 )
      {
        v14 = 0LL;
        for ( j = (_QWORD *)*v60; j != v60; j = (_QWORD *)*j )
        {
          if ( *((_DWORD *)j - 2) == v27 )
          {
            if ( *(j - 3) == v66 )
              v14 = (volatile signed __int32 *)(j - 9);
            if ( v14 )
            {
              _InterlockedIncrement(v14);
              SmpLogFailure("SmpHandleConnectionRequest", 1023LL, 0LL);
              v9 = 0;
              goto LABEL_65;
            }
          }
        }
        v31 = (_DWORD *)v62;
        v63[0] = 1;
        v32 = (_QWORD *)*v60;
        v14 = 0LL;
        while ( v32 != v60 )
        {
          if ( *((_DWORD *)v32 - 2) == v27 )
          {
            if ( *((_DWORD *)v32 - 12) == *(_DWORD *)v62 )
              v14 = (volatile signed __int32 *)(v32 - 9);
            if ( v14 )
            {
              _InterlockedIncrement(v14);
              SmpLogFailure("SmpHandleConnectionRequest", 1033LL, 0LL);
              v9 = 0;
              goto LABEL_65;
            }
          }
          v32 = (_QWORD *)*v32;
        }
        if ( KnownSubSys )
        {
          *((_DWORD *)KnownSubSys + 16) = v27;
          v33 = KnownSubSys + 16;
          v14 = KnownSubSys;
          *((_QWORD *)KnownSubSys + 4) = ProcessHandle;
          *((_DWORD *)KnownSubSys + 6) = *v31;
          KnownSubSys = 0LL;
          v34 = v60;
          ProcessHandle = 0LL;
          ++*v14;
          for ( k = (_QWORD *)v34[1]; k != v34; k = (_QWORD *)k[1] )
          {
            if ( *((_DWORD *)k - 2) == *v33 )
              break;
          }
          v36 = *k;
          v37 = v14 + 18;
          v38 = *(_QWORD **)(v36 + 8);
          if ( *v38 != v36 )
            __fastfail(3u);
          *v37 = v36;
          *((_QWORD *)v14 + 10) = v38;
          *v38 = v37;
          *(_QWORD *)(v36 + 8) = v37;
          v51 = 1;
        }
        else
        {
          SmpLogFailure("SmpHandleConnectionRequest", 1043LL, 0LL);
          v9 = 0;
        }
      }
LABEL_65:
      v39 = v60 + 2;
      if ( (_DWORD)v59 == 1 )
        RtlReleaseSRWLockShared(v39);
      else
        RtlReleaseSRWLockExclusive(v39);
      v18 = v51;
    }
    else
    {
      if ( *(_QWORD *)(v21 + 56) != *v61 )
        goto LABEL_15;
      v8 = 8;
      v18 = 1;
    }
LABEL_16:
    v52 = v18;
    v19 = v18;
    v51 = v18;
    v20 = v8;
    LODWORD(ProcessInformation) = v8;
    v4 = v14;
    if ( v14 )
    {
      v51 = v18;
      if ( !v9 )
      {
LABEL_80:
        v41 = 0LL;
        goto LABEL_87;
      }
      if ( (v14[2] & 1) == 0 )
      {
        v63[0] = 1;
        v64 = 0LL;
        LODWORD(v65) = *(_DWORD *)v62;
        KnownSubSys = SmpSearchKnownSubSysDatabase(v55, (__int64)v63);
        if ( KnownSubSys )
        {
          v9 = 0;
          SmpLogFailure("SmpHandleConnectionRequest", 1107LL, 0LL);
          v51 = v52;
          goto LABEL_80;
        }
        v19 = v52;
        v20 = v8;
      }
      _m_prefetchw((const void *)(v14 + 2));
      v51 = v19;
      v8 = v20;
      if ( (_InterlockedOr(v14 + 2, 2u) & 2) != 0 )
      {
        v9 = 0;
        SmpLogFailure("SmpHandleConnectionRequest", 1127LL, 0LL);
        LOBYTE(v8) = (_BYTE)ProcessInformation;
        v51 = v52;
        goto LABEL_80;
      }
    }
    else if ( !v9 )
    {
      goto LABEL_80;
    }
    v5 = v19;
  }
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x28uLL);
  v41 = (int *)Heap;
  if ( Heap )
  {
    RtlInitializeSRWLock(Heap + 24);
    v41[2] = 0;
    if ( v4 )
    {
      *((_QWORD *)v41 + 4) = v4;
      v8 |= 0x10u;
    }
    else
    {
      v44 = ProcessHandle;
      if ( v8 )
        v44 = v6;
      *((_QWORD *)v41 + 4) = v44;
    }
    v45 = v58;
    *v41 = v8;
    *(_DWORD *)(v45 + 4) |= 0x20000000u;
    *((_QWORD *)v41 + 2) = 0LL;
    RtlAcquireSRWLockExclusive(v41 + 6, v42, v43);
    v53 = 1;
  }
  else
  {
    v9 = 0;
    if ( v5 )
      v54 = 1;
  }
LABEL_87:
  v46 = v58;
  v47 = NtAlpcAcceptConnectPort(&v67, v70, 0LL, 0LL, 0LL, v41, v69, v58, v9);
  if ( !v9 )
    goto LABEL_105;
  if ( v47 >= 0 )
  {
    v41[1] = *(_DWORD *)(AlpcGetMessageAttribute(v46, 0x20000000LL) + 16);
    *((_QWORD *)v41 + 2) = v67;
    RtlReleaseSRWLockExclusive(v41 + 6);
    if ( v4 )
    {
      v48 = (_QWORD *)v62;
      v58 = 0LL;
      HIWORD(v76) = 0;
      v49 = (const WCHAR *)(v62 + 4);
      v78 = 0LL;
      v79 = 0LL;
      v80 = 0LL;
      v81 = 0LL;
      *(_WORD *)(v62 + 242) = 0;
      RtlInitUnicodeStringEx(&DestinationString, v49);
      v75[0] = 0;
      v76 = 257;
      v78 = 0LL;
      v79 = 0LL;
      v80 = 0LL;
      v81 = 0LL;
      v75[1] = 12;
      v75[2] = 1;
      v77 = 288LL;
      v50 = NtAlpcConnectPort(&v58, &DestinationString, 0LL, v75, 0x20000, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( v50 >= 0 )
        *((_QWORD *)v4 + 5) = v58;
      else
        SmpLogFailureString((__int64)"SmpHandleConnectionRequest", 0x4EDu, (__int64)DestinationString.Buffer, v50);
      if ( v6 )
        NtSetEvent(v6[5], 0LL);
      if ( (v4[2] & 1) != 0 )
        v48 = v61;
      SmpReadySubSys(v4, v48);
      v4 = 0LL;
    }
    else if ( (v8 & 8) != 0 )
    {
      v6 = 0LL;
    }
    else if ( ProcessHandle )
    {
      ProcessHandle = 0LL;
    }
    goto LABEL_105;
  }
  if ( v53 )
    RtlReleaseSRWLockExclusive(v41 + 6);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v41);
  if ( !v51 )
  {
LABEL_105:
    if ( !v54 )
      goto LABEL_109;
  }
  if ( v4 )
    SmpDeleteSubSys((PVOID)v4);
  SmpDestroyControlBlock(v6);
LABEL_109:
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  if ( v4 )
    SmpDereferenceKnownSubSys(v4);
  if ( KnownSubSys )
    SmpDereferenceKnownSubSys(KnownSubSys);
  if ( v6 )
    SmpReleaseControlBlock((char *)v6);
}
