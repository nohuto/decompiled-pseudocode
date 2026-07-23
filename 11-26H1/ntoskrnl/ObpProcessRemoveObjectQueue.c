/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x140A66D00
 * Callers:
 *     <none>
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeInsertQueueDpc @ 0x1403087F0 (KeInsertQueueDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     ObpDeregisterObject @ 0x14077CC7C (ObpDeregisterObject.c)
 *     ObpRemoveObjectRoutine @ 0x1408FF6D0 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140A67000 (ObpHandleRevocationBlockRemoveObject.c)
 */

NTSTATUS ObpProcessRemoveObjectQueue()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  __int64 v5; // rdi
  NTSTATUS result; // eax
  int v7; // r8d
  PVOID **p_p_Object; // r11
  int v9; // r10d
  unsigned int v10; // edi
  __int64 v11; // rbx
  unsigned int v12; // ebp
  int v13; // r9d
  int *v14; // rsi
  int v15; // edx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-58h] BYREF
  _SINGLE_LIST_ENTRY *p_IoSelfBoostsEntry; // [rsp+20h] [rbp-38h]
  PVOID *p_Object; // [rsp+28h] [rbp-30h] BYREF

  if ( !qword_140EF41B0 )
  {
    v17 = __rdtsc();
    LODWORD(v17) = 41929663 * ((((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) >> 4);
    qword_140EF41B0 = (unsigned int)v17;
    if ( !(_DWORD)v17 )
      qword_140EF41B0 = 1LL;
    v18 = __rdtsc();
    qword_140EF41B8 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v18) << 32) | (unsigned int)v18) >> 4)) ^ 0xC51LL;
    qword_140EF41C0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_140EF41C0 )
  {
    p_IoSelfBoostsEntry = &stru_140FC11F0.IoSelfBoostsEntry;
    p_Object = &stru_140FC11F0.WaitBlock[3].Object;
    if ( !qword_140EF41C8 )
    {
      if ( !stru_140FC11F0.ThreadFlags2 )
        goto LABEL_18;
      qword_140EF41C8 = (unsigned int)KiTableInformation;
    }
    if ( stru_140FC11F0.ThreadFlags2 && (_BYTE)KdDebuggerNotPresent )
    {
      v7 = 0;
      p_p_Object = &p_Object;
      v9 = 2;
      do
      {
        v10 = 0;
        v11 = (__int64)**p_p_Object;
        v12 = *((_DWORD *)*p_p_Object + 4);
        v13 = v7 + v11 + (unsigned int)*p_p_Object;
        if ( v12 )
        {
          v14 = (int *)**p_p_Object;
          do
          {
            v15 = *v14;
            ++v10;
            v16 = *v14++;
            v13 = v10 * ((v15 + *(_DWORD *)((v16 >> 4) + v11)) ^ v13);
          }
          while ( v10 < v12 );
        }
        --p_p_Object;
        v7 += 2 * v13;
        --v9;
      }
      while ( v9 );
      if ( v7 != qword_140EF41C8 )
      {
        if ( qword_140EF4180 )
          goto LABEL_20;
        qword_140EF4180 = (unsigned int)__ROR4__(1085440, 204);
        xmmword_140EF4188 = 0LL;
        qword_140EF4198 = 266LL;
        qword_140EF41A0 = v11;
      }
    }
LABEL_18:
    if ( !qword_140EF4180 )
    {
LABEL_19:
      qword_140EF41C0 = MEMORY[0xFFFFF78000000008]
                      + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                      - MEMORY[0xFFFFF780000003B0]
                      + 288000000000LL;
      goto LABEL_3;
    }
LABEL_20:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, _QWORD *, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(
        &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
        (PKDEFERRED_ROUTINE)KiSchedulerDpc,
        &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
    qword_140EF41A8 = 3834048LL;
    KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    goto LABEL_19;
  }
  do
  {
LABEL_3:
    v0 = _InterlockedExchange64(&ObpRemoveObjectList, 1LL);
    do
    {
      v1 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v0);
      if ( v1 )
        ObpHandleRevocationBlockRemoveObject(v1);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v0, v2, v3, v4);
      v5 = *(_QWORD *)(v0 + 8);
      LOBYTE(v2) = 1;
      ObpRemoveObjectRoutine(v0, v2);
      v0 = v5;
    }
    while ( v5 && v5 != 1 );
  }
  while ( ObpRemoveObjectList != 1 || _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL) != 1 );
  _InterlockedOr(v19, 0);
  result = ObpRemoveObjectWait;
  if ( ObpRemoveObjectWait )
    return ExfUnblockPushLock(&ObpRemoveObjectWait, 0LL);
  return result;
}
