/*
 * XREFs of ObCaptureObjectStateForDuplication @ 0x140971174
 * Callers:
 *     AlpcpCaptureHandleAttributeInternal @ 0x140970C44 (AlpcpCaptureHandleAttributeInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ObpIncrPointerCount @ 0x14043BE10 (ObpIncrPointerCount.c)
 *     ExGetHandlePointer @ 0x140457590 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x1408FA200 (ExMapHandleToPointer.c)
 *     ExpGetHandleExtraInfo @ 0x14092C97C (ExpGetHandleExtraInfo.c)
 *     ObpIncrementHandleCountEx @ 0x14092E8D0 (ObpIncrementHandleCountEx.c)
 *     ObReferenceProcessHandleTable @ 0x1409717D0 (ObReferenceProcessHandleTable.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // r14
  volatile signed __int64 *HandlePointer; // r10
  unsigned int v17; // edx
  int v18; // r12d
  __int64 *HandleExtraInfo; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rbp
  int v26; // eax
  int v27; // r8d
  _DWORD *v28; // rax
  int v29; // ebx
  signed __int32 v31[8]; // [rsp+0h] [rbp-88h] BYREF
  int v32; // [rsp+40h] [rbp-48h]
  int v33; // [rsp+44h] [rbp-44h] BYREF
  int v34; // [rsp+48h] [rbp-40h]
  __int64 v35; // [rsp+50h] [rbp-38h]
  volatile signed __int64 *v36; // [rsp+58h] [rbp-30h]
  int v38; // [rsp+A8h] [rbp+20h]

  v6 = a3;
  v34 = a4 & 2;
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
      v32 = 0;
      v20 = 0LL;
      v18 = 0x1FFFFF;
      v35 = 0LL;
      ObpTraceObjectReferenceIfActive((__int64)&Object[-6], 1, 0x7544624Fu);
      ObpIncrPointerCount((volatile signed __int64 *)&Object[-6]);
      CurrentThread = (struct _KTHREAD *)Object;
      goto LABEL_14;
    }
    if ( a2 == -2LL )
    {
      v32 = 0;
      v20 = 0LL;
      v18 = 0x1FFFFF;
      v35 = 0LL;
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
  v15 = v12;
  if ( !v12 )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v14);
    goto LABEL_34;
  }
  HandlePointer = (volatile signed __int64 *)ExGetHandlePointer(v12);
  v17 = *((_DWORD *)v15 + 2);
  v36 = HandlePointer;
  v18 = v17 & 0x1FFFFFF;
  if ( *(_DWORD *)(v9 + 4)
    && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo((unsigned int *)v9, v11),
        v17 = *((_DWORD *)v15 + 2),
        HandleExtraInfo) )
  {
    v20 = *HandleExtraInfo;
  }
  else
  {
    v20 = 0LL;
  }
  v21 = ((__int64)*(unsigned int *)v15 >> 17) & 7;
  v35 = v20;
  v22 = v21 | 8;
  if ( (v17 & 0x2000000) == 0 )
    v22 = v21;
  v32 = v22;
  ObpIncrPointerCount(HandlePointer);
  _InterlockedIncrement64(v15);
  _InterlockedOr(v31, 0);
  if ( *(_QWORD *)(v9 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v9 + 48), 0LL);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v23, v24);
  v25 = (__int64)v36;
  ObpTraceObjectReferenceIfActive((__int64)v36, 1, 0x7544624Fu);
  CurrentThread = (struct _KTHREAD *)(v25 + 48);
LABEL_14:
  if ( (v32 & 4) != 0 )
  {
    LODWORD(v35) = 0;
    v20 = v35;
  }
  if ( v34 )
    v6 = v18;
  v26 = v32 & 0xC;
  v27 = v26 | 8;
  *(_QWORD *)(a6 + 28) = v20;
  if ( (a4 & 8) == 0 )
    v27 = v26;
  v38 = v27;
  v28 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(CurrentThread[-1].Padding[2]) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)CurrentThread - 48) >> 8)];
  if ( (v6 & 0xF0000000) != 0 )
  {
    if ( v6 < 0 )
      v6 |= v28[19];
    if ( (v6 & 0x40000000) != 0 )
      v6 |= v28[20];
    if ( (v6 & 0x20000000) != 0 )
      v6 |= v28[21];
    if ( (v6 & 0x10000000) != 0 )
      v6 |= v28[22];
    v6 &= 0xFFFFFFFu;
  }
  v33 = v6 & (v28[23] | 0x1000000);
  if ( (~v18 & v33) != 0 )
  {
    ExReleaseRundownProtection_0(Object + 61);
    ObfDereferenceObjectWithTag(CurrentThread, 0x7544624Fu);
    return 3221225506LL;
  }
  v29 = ObpIncrementHandleCountEx(
          2u,
          (__int64)&v33,
          (struct _KPROCESS *)Object,
          (struct _KLOCK_ENTRIES *)CurrentThread,
          a5,
          v27,
          0LL);
  ExReleaseRundownProtection_0(Object + 61);
  if ( v29 < 0 )
  {
    ObfDereferenceObjectWithTag(CurrentThread, 0x7544624Fu);
  }
  else
  {
    *(_DWORD *)(a6 + 24) = v33;
    *(_QWORD *)(a6 + 8) = a2;
    *(_DWORD *)(a6 + 36) = v38;
    ObfReferenceObjectWithTag(Object, 0x7544624Fu);
    *(_QWORD *)a6 = Object;
    *(_QWORD *)(a6 + 16) = CurrentThread;
  }
  return (unsigned int)v29;
}
