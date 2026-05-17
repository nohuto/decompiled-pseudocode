/*
 * XREFs of LdrpReleaseDllPath @ 0x180051400
 * Callers:
 *     LdrLoadDll @ 0x180043A10 (LdrLoadDll.c)
 *     LdrGetDllHandle @ 0x180050FC0 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x1800511B0 (LdrGetDllHandleEx.c)
 *     LdrpLoadWow64 @ 0x180086710 (LdrpLoadWow64.c)
 *     LdrpCorInitialize @ 0x1800BE60C (LdrpCorInitialize.c)
 *     LdrpGetDelayloadExportDll @ 0x1800C57B0 (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveProcedureAddress @ 0x1800C5A40 (LdrpResolveProcedureAddress.c)
 *     LdrpLoadShimEngine @ 0x1800C6518 (LdrpLoadShimEngine.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1801180E0 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitShimEngine @ 0x18011831C (LdrpInitShimEngine.c)
 *     LdrpMapDllSearchPath @ 0x18011C9D0 (LdrpMapDllSearchPath.c)
 *     LdrpInitializeImportRedirection @ 0x18011D004 (LdrpInitializeImportRedirection.c)
 *     LdrLoadEnclaveModule @ 0x1801394E0 (LdrLoadEnclaveModule.c)
 *     LdrpLoadPatchImage @ 0x18015BE70 (LdrpLoadPatchImage.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x18015FD70 (ZwAlertThreadByThreadIdEx.c)
 */

void __fastcall LdrpReleaseDllPath(__int64 a1)
{
  _QWORD *SchedulerSharedDataSlot; // rdx
  __int64 v2; // rdi
  unsigned int i; // eax
  bool v5; // zf
  signed __int64 v6; // rax
  char *v7; // rdx
  unsigned int j; // ecx
  char *v9; // rbx
  __int64 v10; // rcx
  signed __int64 v11; // rdx
  signed __int64 v12; // rcx
  signed __int64 v13; // rtt
  __int64 *v14; // rbp
  _QWORD *v15; // r8
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rax
  signed __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  signed __int64 v22; // rax
  _QWORD v23[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 124) )
  {
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    v2 = *(_QWORD *)a1 - 128LL;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        if ( !SchedulerSharedDataSlot[i] )
        {
          SchedulerSharedDataSlot[i] = &RtlpCachedPathLock;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlpCachedPathLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&RtlpCachedPathLock, (__int64)SchedulerSharedDataSlot);
    v5 = (*(_QWORD *)(v2 + 80))-- == 1LL;
    if ( !v5 )
      v2 = 0LL;
    v6 = _InterlockedCompareExchange64(&RtlpCachedPathLock, 0LL, 1LL);
    if ( v6 != 1 )
    {
      do
      {
        v10 = 3LL;
        v11 = v6 & 6;
        if ( v11 != 2 )
          v10 = -1LL;
        v12 = v6 + v10;
        v13 = v6;
        v6 = _InterlockedCompareExchange64(&RtlpCachedPathLock, v12, v6);
      }
      while ( v13 != v6 );
      if ( v11 == 2 )
      {
        v14 = &RtlpCachedPathLock;
        while ( 1 )
        {
          while ( (v12 & 1) != 0 )
          {
            v22 = _InterlockedCompareExchange64(&RtlpCachedPathLock, v12 - 4, v12);
            v5 = v12 == v22;
            v12 = v22;
            if ( v5 )
              goto LABEL_10;
          }
          v15 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL);
          v16 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
          if ( !v16 )
          {
            do
            {
              v17 = v15;
              v15 = (_QWORD *)*v15;
              v15[2] = v17;
              v16 = v15[1];
            }
            while ( !v16 );
            if ( v15 != (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0uLL) )
              *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v16;
          }
          if ( (*(_DWORD *)(v16 + 36) & 1) != 0 )
          {
            v18 = *(_QWORD *)(v16 + 16);
            if ( v18 )
              break;
          }
          v14 = 0LL;
          v19 = _InterlockedCompareExchange64(&RtlpCachedPathLock, 0LL, v12);
          v5 = v12 == v19;
          v12 = v19;
          if ( v5 )
            goto LABEL_40;
        }
        *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v18;
        *(_QWORD *)(v16 + 16) = 0LL;
        _InterlockedAnd64(&RtlpCachedPathLock, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_40:
          v20 = *(_QWORD *)(v16 + 16);
          v21 = *(_QWORD *)(v16 + 24);
          _interlockedbittestandset((volatile signed __int32 *)(v16 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v16 + 36), 1u) )
            ZwAlertThreadByThreadIdEx(v21, v14, v15);
          v16 = v20;
        }
        while ( v20 );
      }
    }
LABEL_10:
    v7 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( v7 )
    {
      for ( j = 0; j < 8; ++j )
      {
        v9 = &v7[8 * j];
        if ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&RtlpCachedPathLock & 0x7FFFFFFFFFFFFFFCLL) )
        {
          if ( v9 )
          {
            *v9 |= 2u;
            if ( v9[7] < 0 )
            {
              v23[1] = 0LL;
              v23[0] = (v9 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
              NtSetInformationThread(-2LL, 56LL, v23, 16LL);
            }
            *(_QWORD *)v9 = 0LL;
          }
          break;
        }
      }
    }
    if ( v2 )
      RtlFreeHeap_0();
  }
}
