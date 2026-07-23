/*
 * XREFs of ObCaptureObjectStateForDuplication @ 0x1409BB2E4
 * Callers:
 *     AlpcpCaptureHandleAttributeInternal @ 0x1409BADB4 (AlpcpCaptureHandleAttributeInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ObpIncrPointerCount @ 0x14042E6C0 (ObpIncrPointerCount.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     ExpGetHandleExtraInfo @ 0x1409084AC (ExpGetHandleExtraInfo.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     ExMapHandleToPointer @ 0x14092A190 (ExMapHandleToPointer.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObCaptureObjectStateForDuplication(
        struct _EX_RUNDOWN_REF *Object,
        unsigned __int64 a2,
        int a3,
        char a4,
        char a5,
        __int64 a6)
{
  int v6; // esi
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 *v13; // r14
  volatile signed __int64 *HandlePointer; // r10
  unsigned int v15; // edx
  int v16; // r12d
  __int64 *HandleExtraInfo; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rbp
  int v22; // eax
  int v23; // r8d
  _DWORD *v24; // rax
  int v25; // ebx
  signed __int32 v27[8]; // [rsp+0h] [rbp-88h] BYREF
  int v28; // [rsp+40h] [rbp-48h]
  int v29; // [rsp+44h] [rbp-44h] BYREF
  int v30; // [rsp+48h] [rbp-40h]
  __int64 v31; // [rsp+50h] [rbp-38h]
  volatile signed __int64 *v32; // [rsp+58h] [rbp-30h]
  int v34; // [rsp+A8h] [rbp+20h]

  v6 = a3;
  v30 = a4 & 2;
  if ( (a4 & 2) == 0 && (a3 & 0xCE00000) != 0 )
    return 3221225506LL;
  v9 = ObReferenceProcessHandleTable(Object);
  if ( !v9 )
    return 3221225738LL;
  CurrentThread = KeGetCurrentThread();
  v11 = a2;
  if ( (a2 & 0x80000000) != 0LL )
  {
    if ( a2 == -1LL )
    {
      v28 = 0;
      v18 = 0LL;
      v16 = 0x1FFFFF;
      v31 = 0LL;
      ObpTraceObjectReferenceIfActive((__int64)&Object[-6], 1, 0x7544624Fu);
      ObpIncrPointerCount((volatile signed __int64 *)&Object[-6]);
      CurrentThread = (struct _KTHREAD *)Object;
      goto LABEL_14;
    }
    if ( a2 == -2LL )
    {
      v28 = 0;
      v18 = 0LL;
      v16 = 0x1FFFFF;
      v31 = 0LL;
      ObpTraceObjectReferenceIfActive((__int64)&CurrentThread[-1].SchedulerAssistLastYieldBoostTime, 1, 0x7544624Fu);
      ObpIncrPointerCount(&CurrentThread[-1].SchedulerAssistLastYieldBoostTime);
      goto LABEL_14;
    }
    if ( a5 )
    {
LABEL_34:
      ExReleaseRundownProtection_0(Object + 61);
      return 3221225480LL;
    }
    v9 = ObpKernelHandleTable;
    v11 = a2 ^ 0xFFFFFFFF80000000uLL;
  }
  --CurrentThread->KernelApcDisable;
  v12 = ExMapHandleToPointer(v9, v11);
  v13 = v12;
  if ( !v12 )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_34;
  }
  HandlePointer = (volatile signed __int64 *)ExGetHandlePointer(v12);
  v15 = *((_DWORD *)v13 + 2);
  v32 = HandlePointer;
  v16 = v15 & 0x1FFFFFF;
  if ( *(_DWORD *)(v9 + 4)
    && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo((unsigned int *)v9, v11),
        v15 = *((_DWORD *)v13 + 2),
        HandleExtraInfo) )
  {
    v18 = *HandleExtraInfo;
  }
  else
  {
    v18 = 0LL;
  }
  v19 = ((__int64)*(unsigned int *)v13 >> 17) & 7;
  v31 = v18;
  v20 = v19 | 8;
  if ( (v15 & 0x2000000) == 0 )
    v20 = v19;
  v28 = v20;
  ObpIncrPointerCount(HandlePointer);
  _InterlockedIncrement64(v13);
  _InterlockedOr(v27, 0);
  if ( *(_QWORD *)(v9 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v9 + 48), 0LL);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v21 = (__int64)v32;
  ObpTraceObjectReferenceIfActive((__int64)v32, 1, 0x7544624Fu);
  CurrentThread = (struct _KTHREAD *)(v21 + 48);
LABEL_14:
  if ( (v28 & 4) != 0 )
  {
    LODWORD(v31) = 0;
    v18 = v31;
  }
  if ( v30 )
    v6 = v16;
  v22 = v28 & 0xC;
  v23 = v22 | 8;
  *(_QWORD *)(a6 + 28) = v18;
  if ( (a4 & 8) == 0 )
    v23 = v22;
  v34 = v23;
  v24 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(CurrentThread[-1].Padding[2]) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)CurrentThread - 48) >> 8)];
  if ( (v6 & 0xF0000000) != 0 )
  {
    if ( v6 < 0 )
      v6 |= v24[19];
    if ( (v6 & 0x40000000) != 0 )
      v6 |= v24[20];
    if ( (v6 & 0x20000000) != 0 )
      v6 |= v24[21];
    if ( (v6 & 0x10000000) != 0 )
      v6 |= v24[22];
    v6 &= 0xFFFFFFFu;
  }
  v29 = v6 & (v24[23] | 0x1000000);
  if ( (~v16 & v29) != 0 )
  {
    ExReleaseRundownProtection_0(Object + 61);
    ObfDereferenceObjectWithTag(CurrentThread, 0x7544624Fu);
    return 3221225506LL;
  }
  v25 = ObpIncrementHandleCountEx(
          2u,
          (__int64)&v29,
          (struct _KPROCESS *)Object,
          (struct _KLOCK_ENTRIES *)CurrentThread,
          a5,
          v23,
          0LL);
  ExReleaseRundownProtection_0(Object + 61);
  if ( v25 < 0 )
  {
    ObfDereferenceObjectWithTag(CurrentThread, 0x7544624Fu);
  }
  else
  {
    *(_DWORD *)(a6 + 24) = v29;
    *(_QWORD *)(a6 + 8) = a2;
    *(_DWORD *)(a6 + 36) = v34;
    ObfReferenceObjectWithTag(Object, 0x7544624Fu);
    *(_QWORD *)a6 = Object;
    *(_QWORD *)(a6 + 16) = CurrentThread;
  }
  return (unsigned int)v25;
}
