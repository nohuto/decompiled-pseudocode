/*
 * XREFs of ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180033ADC
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800611CC (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x180016A90 (CemRcTableFindOrInsertEx.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CempLockInitialize @ 0x180034D44 (CempLockInitialize.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampWakeContextStart@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800639C0 (-HampWakeContextStart@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800646E8 (-HampWakeManagerAcquireLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180064A80 (-HampWakeManagerReleaseLockShared@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampWakeContextFindOrCreate(
        struct _HAM_WAKE_REFERENCE_MANAGER *a1,
        __int64 a2,
        void *a3,
        struct _CEM_RC_OBJECT **a4)
{
  struct _CEM_RC_OBJECT *Heap; // rdi
  int v9; // r13d
  NTSTATUS v10; // ebx
  PULONG ReturnLength; // [rsp+20h] [rbp-59h]
  ULONG v13; // [rsp+40h] [rbp-39h] BYREF
  struct _CEM_RC_OBJECT *v14; // [rsp+48h] [rbp-31h] BYREF
  __int128 v15; // [rsp+50h] [rbp-29h] BYREF
  _OWORD JobInformation[2]; // [rsp+60h] [rbp-19h] BYREF
  int v17; // [rsp+80h] [rbp+7h]

  v14 = 0LL;
  v15 = 0LL;
  Heap = (struct _CEM_RC_OBJECT *)HampAllocateHeap(0xC0uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  v13 = 0;
  v17 = 0;
  memset(JobInformation, 0, sizeof(JobInformation));
  NtQueryInformationJobObject(
    a3,
    MaxJobObjectInfoClass|JobObjectBasicLimitInformation|0x10,
    JobInformation,
    0x24u,
    &v13);
  memset_0((char *)Heap + 40, 0, 0x98uLL);
  *(_QWORD *)Heap = 0LL;
  *((_QWORD *)Heap + 1) = 0LL;
  *((_QWORD *)Heap + 3) = 1LL;
  *((_QWORD *)Heap + 2) = -1LL;
  *((_QWORD *)Heap + 4) = (char *)a1 + 32;
  CempLockInitialize((char *)Heap + 40);
  *((_QWORD *)Heap + 8) = 0LL;
  *((_QWORD *)Heap + 9) = 0LL;
  v9 = v17;
  *((_QWORD *)Heap + 10) = -1LL;
  *((_BYTE *)Heap + 184) &= 0xCFu;
  *((_BYTE *)Heap + 184) |= 0x40u;
  *((_QWORD *)Heap + 7) = a1;
  *((_QWORD *)Heap + 21) = a2;
  *((_DWORD *)Heap + 44) = v9;
  *((_QWORD *)Heap + 11) = -1LL;
  *((_OWORD *)Heap + 8) = 0LL;
  *((_OWORD *)Heap + 9) = 0LL;
  *((_QWORD *)Heap + 20) = 0LL;
  v10 = NtDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, a3, (HANDLE)0xFFFFFFFFFFFFFFFFLL, (PHANDLE)Heap + 14, 0, 0, 2u);
  if ( v10 < 0
    || (v10 = TpAllocWork((char *)Heap + 96, HampWakeContextWorker, Heap, 0LL), v10 < 0)
    || (v10 = TpAllocTimer((char *)Heap + 104, HampWakeContextTimerCallback, Heap, 0LL), v10 < 0) )
  {
    if ( v10 < 0 )
      goto LABEL_10;
  }
  HampWakeManagerAcquireLockShared(a1);
  if ( (*((_BYTE *)a1 + 104) & 1) != 0 )
  {
    v10 = -1073741077;
    HampWakeManagerReleaseLockShared(a1);
    goto LABEL_10;
  }
  *(_QWORD *)&v15 = a2;
  DWORD2(v15) = v9;
  CemRcTableFindOrInsertEx(
    (__int64)a1 + 32,
    (__int64)&v15,
    (__int64 (__fastcall *)(__int64, unsigned __int64))HampWakeContextTreeCompareByHostId,
    (unsigned __int64)Heap,
    (__int64)ReturnLength,
    (unsigned __int64 *)&v14);
  HampWakeManagerReleaseLockShared(a1);
  if ( v14 != Heap )
  {
    *a4 = v14;
    v10 = 0;
    goto LABEL_10;
  }
  v10 = HampWakeContextStart(Heap);
  if ( v10 < 0 )
  {
LABEL_10:
    CemRcObjectDereference(Heap);
    return (unsigned int)v10;
  }
  *a4 = Heap;
  return 0;
}
