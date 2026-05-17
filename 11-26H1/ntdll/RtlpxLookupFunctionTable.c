/*
 * XREFs of RtlpxLookupFunctionTable @ 0x18004B2A0
 * Callers:
 *     LdrpResolveForwarder @ 0x180039370 (LdrpResolveForwarder.c)
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlLookupFunctionEntry @ 0x18004AEA0 (RtlLookupFunctionEntry.c)
 *     RtlLookupFunctionTable @ 0x18004B210 (RtlLookupFunctionTable.c)
 *     RtlPcToFileHeader @ 0x18004BC60 (RtlPcToFileHeader.c)
 *     RtlGuardCheckImageBase @ 0x18004C3D0 (RtlGuardCheckImageBase.c)
 *     EtwpProviderArrivalCallback @ 0x180055000 (EtwpProviderArrivalCallback.c)
 *     RtlGuardRestoreContext @ 0x180080B50 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180080E50 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180081080 (RtlGuardCheckExceptionHandler.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1800E2DE4 (RtlpLookupFunctionEntryForStackWalks.c)
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18004B7F0 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlAddressInSectionTable @ 0x18007F890 (RtlAddressInSectionTable.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FD70 (ZwAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 v5; // rsi
  char *v6; // rdx
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  char *v9; // r8
  signed __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  char *v14; // r10
  unsigned __int64 v15; // rdx
  signed __int64 v16; // rax
  char *v17; // rdx
  unsigned int k; // ecx
  char *v19; // rdi
  unsigned __int64 v21; // rdi
  char v22; // al
  char v23; // bp
  int v24; // eax
  __int64 v25; // rcx
  int v26; // edx
  __int16 v27; // ax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  int v32; // eax
  signed __int64 v33; // r8
  signed __int64 v34; // rtt
  _QWORD *v35; // rcx
  __int64 j; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  signed __int64 v39; // r8
  signed __int64 v40; // rcx
  signed __int64 v41; // rtt
  __int64 *v42; // r15
  unsigned __int64 v43; // r8
  _QWORD *v44; // r9
  __int64 v45; // rdx
  _QWORD *v46; // rax
  __int64 v47; // rax
  signed __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rcx
  signed __int64 v51; // rax
  __int128 v52; // [rsp+30h] [rbp-48h] BYREF
  __int64 v53; // [rsp+40h] [rbp-38h]
  __int64 v54; // [rsp+88h] [rbp+10h] BYREF

  v3 = LdrInitState == 3;
  v5 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v3 )
  {
    v6 = 0LL;
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v9 = &SchedulerSharedDataSlot[8 * i];
        if ( !*(_QWORD *)v9 )
        {
          v6 = &SchedulerSharedDataSlot[8 * i];
          if ( v9 )
            *(_QWORD *)v9 = &LdrpInvertedFunctionTableSRWLock;
          break;
        }
      }
    }
    v10 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 17LL, 0LL);
    if ( v10 )
      RtlpAcquireSRWLockSharedContended(&LdrpInvertedFunctionTableSRWLock, v6, v10);
    if ( LdrpInvertedFunctionTables != 1 )
    {
      v11 = 1;
      v12 = LdrpInvertedFunctionTables - 1;
      while ( v12 >= v11 )
      {
        v13 = (v11 + v12) >> 1;
        v14 = (char *)&xmmword_1801E0450 + 24 * v13;
        v15 = *((_QWORD *)v14 + 1);
        if ( a1 < v15 )
        {
          if ( !v13 )
            break;
          v12 = v13 - 1;
        }
        else
        {
          if ( a1 < v15 + *((unsigned int *)v14 + 4) )
          {
            *(_OWORD *)a2 = *(_OWORD *)v14;
            *(_QWORD *)(a2 + 16) = *((_QWORD *)v14 + 2);
            v5 = *(_QWORD *)a2;
            break;
          }
          v11 = v13 + 1;
        }
      }
    }
    v16 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 0LL, 17LL);
    if ( v16 != 17 )
    {
      if ( (v16 & 1) == 0 )
        RtlRaiseStatus(-1073741212);
      while ( (v16 & 2) == 0 )
      {
        v33 = 0LL;
        if ( (v16 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
          v33 = v16 - 16;
        v34 = v16;
        v16 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v33, v16);
        if ( v34 == v16 )
          goto LABEL_21;
      }
      if ( (v16 & 8) != 0 )
      {
        v35 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0uLL);
        for ( j = *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !j; j = v35[1] )
          v35 = (_QWORD *)*v35;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(j + 32), 0xFFFFFFFF) > 1 )
          goto LABEL_21;
        v37 = -9LL;
      }
      else
      {
        v37 = -1LL;
      }
      do
      {
        v38 = v37 + 4;
        v39 = v16 & 6;
        if ( v39 != 2 )
          v38 = v37;
        v40 = v16 + v38;
        v41 = v16;
        v16 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v40, v16);
      }
      while ( v41 != v16 );
      if ( v39 == 2 )
      {
        v42 = &LdrpInvertedFunctionTableSRWLock;
        while ( 1 )
        {
          while ( (v40 & 1) != 0 )
          {
            v51 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, v40 - 4, v40);
            v3 = v40 == v51;
            v40 = v51;
            if ( v3 )
              goto LABEL_21;
          }
          v43 = v40 & 0xFFFFFFFFFFFFFFF0uLL;
          v44 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0uLL);
          v45 = *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v45 )
          {
            do
            {
              v46 = v44;
              v44 = (_QWORD *)*v44;
              v44[2] = v46;
              v45 = v44[1];
            }
            while ( !v45 );
            if ( v44 != (_QWORD *)v43 )
              *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v45;
          }
          if ( (*(_DWORD *)(v45 + 36) & 1) != 0 )
          {
            v47 = *(_QWORD *)(v45 + 16);
            if ( v47 )
              break;
          }
          v42 = 0LL;
          v48 = _InterlockedCompareExchange64(&LdrpInvertedFunctionTableSRWLock, 0LL, v40);
          v3 = v40 == v48;
          v40 = v48;
          if ( v3 )
            goto LABEL_97;
        }
        *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v47;
        *(_QWORD *)(v45 + 16) = 0LL;
        _InterlockedAnd64(&LdrpInvertedFunctionTableSRWLock, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_97:
          v49 = *(_QWORD *)(v45 + 16);
          v50 = *(_QWORD *)(v45 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v45 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v45 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v50, v42, v43);
          v45 = v49;
        }
        while ( v49 );
      }
    }
LABEL_21:
    v17 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( v17 )
    {
      for ( k = 0; k < 8; ++k )
      {
        v19 = &v17[8 * k];
        if ( (*(_QWORD *)v19 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpInvertedFunctionTableSRWLock & 0x7FFFFFFFFFFFFFFCLL) )
        {
          if ( v19 )
          {
            *v19 |= 2u;
            if ( v19[7] < 0 )
            {
              v52 = (unsigned __int64)((v19 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3);
              NtSetInformationThread(-2LL, 56LL, &v52, 16LL);
            }
            *(_QWORD *)v19 = 0LL;
          }
          break;
        }
      }
    }
    if ( v5 || !byte_1801E044C )
      return v5;
  }
  v53 = 0LL;
  v52 = 0LL;
  if ( (int)ZwQueryVirtualMemory(-1LL, a1, 6LL, &v52, 24LL, 0LL) < 0
    || (v21 = v52) == 0
    || (v53 & 2) != 0
    || (v53 & 1) != 0
    || a1 < (unsigned __int64)v52 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    return v5;
  }
  *(_DWORD *)(a2 + 16) = DWORD2(v52);
  *(_QWORD *)(a2 + 8) = v21;
  if ( v21 )
  {
    v54 = 0LL;
    v22 = v21 & 1;
    v23 = 1;
    v5 = 0LL;
    if ( (v21 & 2) != 0 || (v21 & 1) != 0 )
    {
      v21 &= 0xFFFFFFFFFFFFFFFCuLL;
      v23 = v22 ^ 1;
    }
    v24 = RtlImageNtHeaderEx(1, v21, 0LL, &v54);
    v25 = v54;
    v26 = v24;
    if ( !v54 )
      goto LABEL_50;
    v27 = *(_WORD *)(v54 + 24);
    if ( v27 == 267 )
    {
      if ( *(_DWORD *)(v54 + 116) > 3u )
      {
        v28 = *(unsigned int *)(v54 + 144);
        if ( !(_DWORD)v28 )
        {
          v26 = -1073741822;
          goto LABEL_50;
        }
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v54 + 148);
        if ( !v23 && (unsigned int)v28 >= *(_DWORD *)(v25 + 84) )
        {
          v30 = RtlAddressInSectionTable(v25, v21, (unsigned int)v28);
          v31 = 0;
          v5 = v30;
          if ( !v30 )
            v31 = -1073741811;
          v26 = v31;
          goto LABEL_50;
        }
        goto LABEL_49;
      }
    }
    else
    {
      if ( v27 != 523 )
      {
        *(_DWORD *)(a2 + 20) = 0;
        *(_QWORD *)a2 = 0LL;
        return v5;
      }
      if ( *(_DWORD *)(v54 + 132) > 3u )
      {
        v28 = *(unsigned int *)(v54 + 160);
        if ( !(_DWORD)v28 )
        {
          v26 = -1073741822;
          goto LABEL_50;
        }
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(v54 + 164);
        if ( !v23 && (unsigned int)v28 >= *(_DWORD *)(v25 + 84) )
        {
          v5 = RtlAddressInSectionTable(v25, v21, (unsigned int)v28);
          v32 = 0;
          if ( !v5 )
            v32 = -1073741811;
          v26 = v32;
          goto LABEL_50;
        }
LABEL_49:
        v5 = v21 + v28;
        v26 = 0;
LABEL_50:
        v29 = 0LL;
        if ( v26 >= 0 )
          v29 = v5;
        v5 = v29;
        if ( !v29 )
          *(_DWORD *)(a2 + 20) = 0;
        *(_QWORD *)a2 = v29;
        return v5;
      }
    }
    v26 = -1073741811;
    goto LABEL_50;
  }
  return v5;
}
