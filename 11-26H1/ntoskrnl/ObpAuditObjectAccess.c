/*
 * XREFs of ObpAuditObjectAccess @ 0x1409FA54C
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x1408F9590 (ObReferenceFileObjectForWrite.c)
 *     NtWriteFile @ 0x1408FB6D0 (NtWriteFile.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     OBJECT_HEADER_TO_AUDIT_INFO @ 0x1404461F0 (OBJECT_HEADER_TO_AUDIT_INFO.c)
 *     ExGetHandlePointer @ 0x140457590 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpGetHandleExtraInfo @ 0x14092C97C (ExpGetHandleExtraInfo.c)
 *     SeOperationAuditAlarm @ 0x1409FA6B0 (SeOperationAuditAlarm.c)
 */

char __fastcall ObpAuditObjectAccess(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, unsigned int a5)
{
  int v7; // r12d
  __int64 v9; // rdx
  _DWORD *HandleExtraInfo; // r14
  struct _KTHREAD *CurrentThread; // rbp
  char v12; // bl
  __int64 v13; // r8
  __int64 *v14; // rax
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // r10
  signed __int32 v19[12]; // [rsp+0h] [rbp-58h] BYREF

  v7 = a2;
  if ( !*(_DWORD *)(a1 + 4) )
    return 1;
  HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo((unsigned int *)a1, a2);
  if ( !HandleExtraInfo )
    return 1;
  CurrentThread = KeGetCurrentThread();
  v12 = 1;
  --CurrentThread->KernelApcDisable;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(a3);
      v13 = *a3;
      if ( (*a3 & 1) != 0 )
        break;
      if ( !v13 )
      {
        v12 = 0;
        goto LABEL_13;
      }
      ExpBlockOnLockedHandleEntry(a1, a3, v13);
    }
  }
  while ( v13 != _InterlockedCompareExchange64(a3, v13 - 1, v13) );
  _m_prefetchw(HandleExtraInfo);
  if ( a4 == ExGetHandlePointer(a3) )
  {
    v13 = a5 & *HandleExtraInfo;
    if ( (a5 & *HandleExtraInfo) != 0 )
    {
      *HandleExtraInfo &= ~a5;
      v14 = (__int64 *)OBJECT_HEADER_TO_AUDIT_INFO(a4);
      if ( v14 )
        v17 = *v14;
      SeOperationAuditAlarm(
        v15,
        a4 + 48,
        v7,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a4 + 24) ^ (unsigned __int64)BYTE1(a4)]
      + 16,
        v16,
        v19[10],
        v17);
    }
  }
  else
  {
    v12 = 0;
  }
  _InterlockedIncrement64(a3);
  _InterlockedOr(v19, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
LABEL_13:
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v13);
  return v12;
}
