/*
 * XREFs of RtlpxLookupFunctionTable @ 0x180035820
 * Callers:
 *     LdrpResolveForwarder @ 0x1800238E0 (LdrpResolveForwarder.c)
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlLookupFunctionEntry @ 0x180035420 (RtlLookupFunctionEntry.c)
 *     RtlLookupFunctionTable @ 0x180035790 (RtlLookupFunctionTable.c)
 *     RtlPcToFileHeader @ 0x1800361E0 (RtlPcToFileHeader.c)
 *     RtlGuardCheckImageBase @ 0x180036950 (RtlGuardCheckImageBase.c)
 *     EtwpProviderArrivalCallback @ 0x18003F580 (EtwpProviderArrivalCallback.c)
 *     RtlGuardRestoreContext @ 0x180077EF0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1800781F0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180078420 (RtlGuardCheckExceptionHandler.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1800E1644 (RtlpLookupFunctionEntryForStackWalks.c)
 *     LdrpSnapModule @ 0x18011B2E0 (LdrpSnapModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180035D70 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlAddressInSectionTable @ 0x180076C30 (RtlAddressInSectionTable.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FC70 (ZwAlertThreadByThreadIdEx.c)
 */

char *__fastcall RtlpxLookupFunctionTable(PVOID BaseAddress, char **a2)
{
  bool v3; // zf
  char *v5; // rsi
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  char *v8; // r8
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  char *v12; // r10
  unsigned __int64 v13; // rdx
  signed __int64 v14; // rax
  char *v15; // rdx
  unsigned int k; // ecx
  char *v17; // rdi
  unsigned __int64 v19; // rdi
  char v20; // al
  char v21; // bp
  NTSTATUS v22; // eax
  PIMAGE_NT_HEADERS v23; // rcx
  int v24; // edx
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rdx
  char *v27; // rax
  char *v28; // rax
  int v29; // ecx
  int v30; // eax
  signed __int64 v31; // r8
  signed __int64 v32; // rtt
  _QWORD *v33; // rcx
  __int64 j; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  signed __int64 v37; // r8
  signed __int64 v38; // rcx
  signed __int64 v39; // rtt
  _RTL_SRWLOCK *v40; // r15
  unsigned __int64 v41; // r8
  _QWORD *v42; // r9
  __int64 v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rax
  signed __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rcx
  signed __int64 v49; // rax
  __int128 ThreadInformation; // [rsp+30h] [rbp-48h] BYREF
  __int64 v51; // [rsp+40h] [rbp-38h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+88h] [rbp+10h] BYREF

  v3 = LdrInitState == 3;
  v5 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  if ( v3 )
  {
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v8 = &SchedulerSharedDataSlot[8 * i];
        if ( !*(_QWORD *)v8 )
        {
          if ( v8 )
            *(_QWORD *)v8 = &LdrpInvertedFunctionTableSRWLock;
          break;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 17LL, 0LL) )
      RtlpAcquireSRWLockSharedContended(&LdrpInvertedFunctionTableSRWLock);
    if ( LdrpInvertedFunctionTables != 1 )
    {
      v9 = 1;
      v10 = LdrpInvertedFunctionTables - 1;
      while ( v10 >= v9 )
      {
        v11 = (v9 + v10) >> 1;
        v12 = (char *)&xmmword_1801DF450 + 24 * v11;
        v13 = *((_QWORD *)v12 + 1);
        if ( (unsigned __int64)BaseAddress < v13 )
        {
          if ( !v11 )
            break;
          v10 = v11 - 1;
        }
        else
        {
          if ( (unsigned __int64)BaseAddress < v13 + *((unsigned int *)v12 + 4) )
          {
            *(_OWORD *)a2 = *(_OWORD *)v12;
            a2[2] = (char *)*((_QWORD *)v12 + 2);
            v5 = *a2;
            break;
          }
          v9 = v11 + 1;
        }
      }
    }
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 0LL, 17LL);
    if ( v14 != 17 )
    {
      if ( (v14 & 1) == 0 )
        RtlRaiseStatus(-1073741212);
      while ( (v14 & 2) == 0 )
      {
        v31 = 0LL;
        if ( (v14 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
          v31 = v14 - 16;
        v32 = v14;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, v31, v14);
        if ( v32 == v14 )
          goto LABEL_21;
      }
      if ( (v14 & 8) != 0 )
      {
        v33 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0uLL);
        for ( j = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !j; j = v33[1] )
          v33 = (_QWORD *)*v33;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(j + 32), 0xFFFFFFFF) > 1 )
          goto LABEL_21;
        v35 = -9LL;
      }
      else
      {
        v35 = -1LL;
      }
      do
      {
        v36 = v35 + 4;
        v37 = v14 & 6;
        if ( v37 != 2 )
          v36 = v35;
        v38 = v14 + v36;
        v39 = v14;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, v38, v14);
      }
      while ( v39 != v14 );
      if ( v37 == 2 )
      {
        v40 = &LdrpInvertedFunctionTableSRWLock;
        while ( 1 )
        {
          while ( (v38 & 1) != 0 )
          {
            v49 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock,
                    v38 - 4,
                    v38);
            v3 = v38 == v49;
            v38 = v49;
            if ( v3 )
              goto LABEL_21;
          }
          v41 = v38 & 0xFFFFFFFFFFFFFFF0uLL;
          v42 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0uLL);
          v43 = *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v43 )
          {
            do
            {
              v44 = v42;
              v42 = (_QWORD *)*v42;
              v42[2] = v44;
              v43 = v42[1];
            }
            while ( !v43 );
            if ( v42 != (_QWORD *)v41 )
              *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v43;
          }
          if ( (*(_DWORD *)(v43 + 36) & 1) != 0 )
          {
            v45 = *(_QWORD *)(v43 + 16);
            if ( v45 )
              break;
          }
          v40 = 0LL;
          v46 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 0LL, v38);
          v3 = v38 == v46;
          v38 = v46;
          if ( v3 )
            goto LABEL_97;
        }
        *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v45;
        *(_QWORD *)(v43 + 16) = 0LL;
        _InterlockedAnd64((volatile signed __int64 *)&LdrpInvertedFunctionTableSRWLock, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_97:
          v47 = *(_QWORD *)(v43 + 16);
          v48 = *(_QWORD *)(v43 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v43 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v43 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v48, v40, v41);
          v43 = v47;
        }
        while ( v47 );
      }
    }
LABEL_21:
    v15 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( v15 )
    {
      for ( k = 0; k < 8; ++k )
      {
        v17 = &v15[8 * k];
        if ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpInvertedFunctionTableSRWLock & 0x7FFFFFFFFFFFFFFCLL) )
        {
          if ( v17 )
          {
            *v17 |= 2u;
            if ( v17[7] < 0 )
            {
              ThreadInformation = (unsigned __int64)((v17 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3);
              NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, &ThreadInformation, 0x10u);
            }
            *(_QWORD *)v17 = 0LL;
          }
          break;
        }
      }
    }
    if ( v5 || !byte_1801DF44C )
      return v5;
  }
  v51 = 0LL;
  ThreadInformation = 0LL;
  if ( ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         &ThreadInformation,
         0x18uLL,
         0LL) < 0
    || (v19 = ThreadInformation) == 0
    || (v51 & 2) != 0
    || (v51 & 1) != 0
    || (unsigned __int64)BaseAddress < (unsigned __int64)ThreadInformation )
  {
    a2[1] = 0LL;
    return v5;
  }
  *((_DWORD *)a2 + 4) = DWORD2(ThreadInformation);
  a2[1] = (char *)v19;
  if ( v19 )
  {
    OutHeaders = 0LL;
    v20 = v19 & 1;
    v21 = 1;
    v5 = 0LL;
    if ( (v19 & 2) != 0 || (v19 & 1) != 0 )
    {
      v19 &= 0xFFFFFFFFFFFFFFFCuLL;
      v21 = v20 ^ 1;
    }
    v22 = RtlImageNtHeaderEx(1u, (PVOID)v19, 0LL, &OutHeaders);
    v23 = OutHeaders;
    v24 = v22;
    if ( !OutHeaders )
      goto LABEL_50;
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      if ( HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) > 3 )
      {
        VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[1].VirtualAddress;
        if ( !(_DWORD)VirtualAddress )
        {
          v24 = -1073741822;
          goto LABEL_50;
        }
        *((_DWORD *)a2 + 5) = OutHeaders->OptionalHeader.DataDirectory[1].Size;
        if ( !v21 && (unsigned int)VirtualAddress >= v23->OptionalHeader.SizeOfHeaders )
        {
          v28 = (char *)RtlAddressInSectionTable(v23, (PVOID)v19, VirtualAddress);
          v29 = 0;
          v5 = v28;
          if ( !v28 )
            v29 = -1073741811;
          v24 = v29;
          goto LABEL_50;
        }
        goto LABEL_49;
      }
    }
    else
    {
      if ( Magic != 523 )
      {
        *((_DWORD *)a2 + 5) = 0;
        *a2 = 0LL;
        return v5;
      }
      if ( OutHeaders->OptionalHeader.NumberOfRvaAndSizes > 3 )
      {
        VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[3].VirtualAddress;
        if ( !(_DWORD)VirtualAddress )
        {
          v24 = -1073741822;
          goto LABEL_50;
        }
        *((_DWORD *)a2 + 5) = OutHeaders->OptionalHeader.DataDirectory[3].Size;
        if ( !v21 && (unsigned int)VirtualAddress >= v23->OptionalHeader.SizeOfHeaders )
        {
          v5 = (char *)RtlAddressInSectionTable(v23, (PVOID)v19, VirtualAddress);
          v30 = 0;
          if ( !v5 )
            v30 = -1073741811;
          v24 = v30;
          goto LABEL_50;
        }
LABEL_49:
        v5 = (char *)(v19 + VirtualAddress);
        v24 = 0;
LABEL_50:
        v27 = 0LL;
        if ( v24 >= 0 )
          v27 = v5;
        v5 = v27;
        if ( !v27 )
          *((_DWORD *)a2 + 5) = 0;
        *a2 = v27;
        return v5;
      }
    }
    v24 = -1073741811;
    goto LABEL_50;
  }
  return v5;
}
