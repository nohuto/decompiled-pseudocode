/*
 * XREFs of LdrpLoadDependentModuleInternal @ 0x18003AF90
 * Callers:
 *     LdrpResolveForwarder @ 0x180039370 (LdrpResolveForwarder.c)
 *     LdrpLoadDependentModuleA @ 0x18003ACC0 (LdrpLoadDependentModuleA.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180041420 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180041FE0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpPreprocessDllName @ 0x180045C10 (LdrpPreprocessDllName.c)
 *     LdrpRecordModuleDependency @ 0x180050E60 (LdrpRecordModuleDependency.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpQueueWork @ 0x180067B50 (LdrpQueueWork.c)
 *     LdrpProcessWork @ 0x180087350 (LdrpProcessWork.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x1800BBA10 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpFreeReplacedModule @ 0x1800C750C (LdrpFreeReplacedModule.c)
 *     LdrpHandleReplacedModule @ 0x1800C7590 (LdrpHandleReplacedModule.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D182C (LdrpFindOrPrepareEnclaveModule.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDependentModuleInternal(char a1, __int64 a2, __int64 a3, int a4, __int64 *a5, __int64 *a6)
{
  int v10; // r14d
  int v11; // ebx
  __int64 Heap_0; // rax
  __int64 v13; // rbx
  unsigned int v14; // ecx
  _QWORD *v15; // rdx
  _QWORD *SchedulerSharedDataSlot; // r9
  __int64 v18; // rsi
  __int64 v19; // rdx
  _QWORD v21[2]; // [rsp+60h] [rbp-1A8h] BYREF
  __int128 v22; // [rsp+70h] [rbp-198h]
  __int128 v23; // [rsp+80h] [rbp-188h]
  __int128 v24; // [rsp+90h] [rbp-178h]
  __int64 v25; // [rsp+A0h] [rbp-168h]
  _DWORD v26[2]; // [rsp+B0h] [rbp-158h] BYREF
  __int16 *v27; // [rsp+B8h] [rbp-150h]
  __int16 v28; // [rsp+C0h] [rbp-148h] BYREF
  _BYTE v29[254]; // [rsp+C2h] [rbp-146h] BYREF

  v26[1] = 0;
  memset_thunk_772440563353939046(v29, 0, 0xFEuLL);
  v27 = &v28;
  v26[0] = 0x1000000;
  v28 = 0;
  v21[0] = 72LL;
  v21[1] = 1LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  RtlActivateActivationContextUnsafeFast(v21, *(_QWORD *)(a3 + 136));
  v10 = *(_DWORD *)(a2 + 32) & 0x1800800;
  if ( a4 == 9 || (v11 = LdrpPreprocessDllName(a1), v11 >= 0) )
  {
    if ( (v10 & 0x800000) != 0 )
    {
      v11 = LdrpFindOrPrepareEnclaveModule(
              *(_QWORD *)(a2 + 176),
              (unsigned int)v26,
              *(_QWORD *)(a2 + 16),
              v10,
              a3,
              (__int64)a5,
              *(_QWORD *)(a2 + 40));
      goto LABEL_35;
    }
    if ( !*a6 )
    {
      Heap_0 = RtlAllocateHeap_0(LdrpHeap, (unsigned int)(NtdllBaseTag + 2621440), 32LL);
      *a6 = Heap_0;
      if ( !Heap_0 )
      {
        v11 = -1073741801;
        goto LABEL_35;
      }
    }
    v11 = LdrpFindOrPrepareLoadingModule(
            (unsigned int)v26,
            *(_QWORD *)(a2 + 16),
            v10,
            a4,
            a3,
            (__int64)a5,
            *(_QWORD *)(a2 + 40));
    if ( *a5 )
    {
      if ( (v10 & 0x400) != 0 && v11 == -1073741515 )
      {
        v13 = *(_QWORD *)(*a5 + 176);
        *(_DWORD *)(v13 + 32) |= 0x4000000u;
        LdrpProcessWork(v13);
        v11 = **(_DWORD **)(v13 + 40);
      }
      v14 = 0;
      v15 = 0LL;
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        while ( v14 < 8 )
        {
          if ( !SchedulerSharedDataSlot[v14] )
          {
            v15 = &SchedulerSharedDataSlot[v14];
            break;
          }
          ++v14;
        }
      }
      if ( v15 )
        *v15 = &LdrpModuleDatatableLock;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpModuleDatatableLock, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(&LdrpModuleDatatableLock, (__int64)v15);
      v18 = LdrpHandleReplacedModule(*a5);
      *(_DWORD *)(*a6 + 24) &= ~1u;
      *a6 = LdrpRecordModuleDependency(*(_QWORD *)(a2 + 56), v18, *a6, 0LL);
      if ( v11 == -1073741515 )
      {
        if ( (v10 & 0x400) == 0 )
        {
          LdrpQueueWork(*(_QWORD *)(v18 + 176));
          v11 = 0;
          goto LABEL_27;
        }
      }
      else if ( v11 == -1073741267 )
      {
        v11 = 0;
        goto LABEL_27;
      }
      if ( v11 < 0 )
      {
LABEL_33:
        LdrpDereferenceModule(v18);
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock, v19);
        if ( v18 != *a5 )
        {
          LdrpFreeReplacedModule();
          *a5 = v18;
        }
        goto LABEL_35;
      }
LABEL_27:
      if ( *(_DWORD *)(a2 + 108) )
      {
        if ( *a6 || *(int *)(*(_QWORD *)(v18 + 152) + 56LL) >= 2 )
          --*(_DWORD *)(a2 + 108);
      }
      else if ( *(int *)(*(_QWORD *)(v18 + 152) + 56LL) < 2 )
      {
        *(_QWORD *)(a2 + 80) = v18;
        ++*(_DWORD *)(a2 + 108);
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 152LL) + 56LL) = 3;
        v11 = 259;
      }
      goto LABEL_33;
    }
  }
LABEL_35:
  RtlDeactivateActivationContextUnsafeFast(v21);
  if ( &v28 != v27 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v27);
  return (unsigned int)v11;
}
