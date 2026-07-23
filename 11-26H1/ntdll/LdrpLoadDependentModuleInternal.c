/*
 * XREFs of LdrpLoadDependentModuleInternal @ 0x180025500
 * Callers:
 *     LdrpResolveForwarder @ 0x1800238E0 (LdrpResolveForwarder.c)
 *     LdrpLoadDependentModuleA @ 0x180025230 (LdrpLoadDependentModuleA.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18002B990 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002C550 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpPreprocessDllName @ 0x180030180 (LdrpPreprocessDllName.c)
 *     LdrpRecordModuleDependency @ 0x18003B3E0 (LdrpRecordModuleDependency.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 *     LdrpQueueWork @ 0x180087FA0 (LdrpQueueWork.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800B8F40 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFreeReplacedModule @ 0x1800C4CCC (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x1800C4D50 (LdrpHandleReplacedModule.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CEF9C (LdrpFindOrPrepareEnclaveModule.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDependentModuleInternal(__int64 a1, __int64 a2, __int64 a3, int a4, PVOID *a5, _QWORD *a6)
{
  unsigned int v10; // r14d
  int v11; // ebx
  PVOID Heap_0; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned int v15; // ecx
  _QWORD *v16; // rdx
  _QWORD *SchedulerSharedDataSlot; // r9
  _QWORD *v19; // rsi
  unsigned int v21; // [rsp+44h] [rbp-1C4h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-1C0h]
  _QWORD *v23; // [rsp+50h] [rbp-1B8h]
  _QWORD *v24; // [rsp+58h] [rbp-1B0h]
  _QWORD v25[2]; // [rsp+60h] [rbp-1A8h] BYREF
  __int128 v26; // [rsp+70h] [rbp-198h]
  __int128 v27; // [rsp+80h] [rbp-188h]
  __int128 v28; // [rsp+90h] [rbp-178h]
  __int64 v29; // [rsp+A0h] [rbp-168h]
  _UNICODE_STRING v30; // [rsp+B0h] [rbp-158h] BYREF
  __int16 v31; // [rsp+C0h] [rbp-148h] BYREF
  _BYTE v32[254]; // [rsp+C2h] [rbp-146h] BYREF

  *(_DWORD *)(&v30.MaximumLength + 1) = 0;
  memset_thunk_772440563353939046(v32, 0, 0xFEuLL);
  v30.Buffer = (wchar_t *)&v31;
  *(_DWORD *)&v30.Length = 0x1000000;
  v31 = 0;
  v25[0] = 72LL;
  v25[1] = 1LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  RtlActivateActivationContextUnsafeFast(v25, *(_QWORD *)(a3 + 136));
  v10 = *(_DWORD *)(a2 + 32) & 0x1800800;
  v21 = v10;
  if ( a4 != 9 )
  {
    v11 = LdrpPreprocessDllName(a1, &v30, a3, &v21);
    if ( v11 < 0 )
      goto LABEL_36;
    v10 = v21;
  }
  if ( (v10 & 0x800000) != 0 )
  {
    v11 = LdrpFindOrPrepareEnclaveModule(
            *(_QWORD *)(a2 + 176),
            &v30,
            *(_QWORD *)(a2 + 16),
            v10,
            a3,
            a5,
            *(_QWORD *)(a2 + 40));
    goto LABEL_36;
  }
  if ( !*a6 )
  {
    Heap_0 = RtlAllocateHeap_0(LdrpHeap, NtdllBaseTag + 2621440, 0x20uLL);
    *a6 = Heap_0;
    if ( !Heap_0 )
    {
      v11 = -1073741801;
      goto LABEL_36;
    }
  }
  v11 = LdrpFindOrPrepareLoadingModule(&v30, a3, (__int64)a5, *(_QWORD *)(a2 + 40));
  if ( *a5 )
  {
    if ( (v10 & 0x400) != 0 && v11 == -1073741515 )
    {
      v14 = *((_QWORD *)*a5 + 22);
      *(_DWORD *)(v14 + 32) |= 0x4000000u;
      LOBYTE(v13) = 1;
      LdrpProcessWork(v14, v13);
      v11 = **(_DWORD **)(v14 + 40);
    }
    v15 = 0;
    v24 = 0LL;
    v22 = 0;
    v16 = 0LL;
    v23 = 0LL;
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      while ( 1 )
      {
        v22 = v15;
        if ( v15 >= 8 )
          break;
        if ( !SchedulerSharedDataSlot[v15] )
        {
          v16 = &SchedulerSharedDataSlot[v15];
          v23 = v16;
          break;
        }
        ++v15;
      }
    }
    v24 = v16;
    if ( v16 )
      *v16 = &LdrpModuleDatatableLock;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)&LdrpModuleDatatableLock, (unsigned __int64)v16);
    v19 = (_QWORD *)LdrpHandleReplacedModule(*a5);
    *(_DWORD *)(*a6 + 24LL) &= ~1u;
    *a6 = LdrpRecordModuleDependency(*(_QWORD *)(a2 + 56), v19, *a6, 0LL);
    if ( v11 == -1073741515 )
    {
      if ( (v10 & 0x400) == 0 )
      {
        LdrpQueueWork(v19[22]);
        v11 = 0;
        goto LABEL_28;
      }
    }
    else if ( v11 == -1073741267 )
    {
      v11 = 0;
      goto LABEL_28;
    }
    if ( v11 < 0 )
    {
LABEL_34:
      LdrpDereferenceModule(v19);
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( v19 != *a5 )
      {
        LdrpFreeReplacedModule(*a5);
        *a5 = v19;
      }
      goto LABEL_36;
    }
LABEL_28:
    if ( *(_DWORD *)(a2 + 108) )
    {
      if ( *a6 || *(int *)(v19[19] + 56LL) >= 2 )
        --*(_DWORD *)(a2 + 108);
    }
    else if ( *(int *)(v19[19] + 56LL) < 2 )
    {
      *(_QWORD *)(a2 + 80) = v19;
      ++*(_DWORD *)(a2 + 108);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 152LL) + 56LL) = 3;
      v11 = 259;
    }
    goto LABEL_34;
  }
LABEL_36:
  RtlDeactivateActivationContextUnsafeFast(v25);
  if ( &v31 != (__int16 *)v30.Buffer )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v30.Buffer);
  return (unsigned int)v11;
}
