/*
 * XREFs of ObpAuditObjectAccess @ 0x14091F14C
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x140929520 (ObReferenceFileObjectForWrite.c)
 *     NtWriteFile @ 0x14092B660 (NtWriteFile.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     OBJECT_HEADER_TO_AUDIT_INFO @ 0x14043ECF0 (OBJECT_HEADER_TO_AUDIT_INFO.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     ExpGetHandleExtraInfo @ 0x1409084AC (ExpGetHandleExtraInfo.c)
 *     SeOperationAuditAlarm @ 0x14091F2B0 (SeOperationAuditAlarm.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 */

char __fastcall ObpAuditObjectAccess(__int64 a1, __int64 a2, signed __int64 *a3, __int64 a4, int a5)
{
  int v7; // r12d
  _DWORD *HandleExtraInfo; // r14
  struct _KTHREAD *CurrentThread; // rbp
  char v11; // bl
  signed __int64 v12; // r8
  __int64 *v13; // rax
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // r10
  signed __int32 v18[12]; // [rsp+0h] [rbp-58h] BYREF

  v7 = a2;
  if ( !*(_DWORD *)(a1 + 4) )
    return 1;
  HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo((unsigned int *)a1, a2);
  if ( !HandleExtraInfo )
    return 1;
  CurrentThread = KeGetCurrentThread();
  v11 = 1;
  --CurrentThread->KernelApcDisable;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(a3);
      v12 = *a3;
      if ( (*a3 & 1) != 0 )
        break;
      if ( !v12 )
      {
        v11 = 0;
        goto LABEL_13;
      }
      ExpBlockOnLockedHandleEntry(a1, a3, v12);
    }
  }
  while ( v12 != _InterlockedCompareExchange64(a3, v12 - 1, v12) );
  _m_prefetchw(HandleExtraInfo);
  if ( a4 == ExGetHandlePointer(a3) )
  {
    if ( (a5 & *HandleExtraInfo) != 0 )
    {
      *HandleExtraInfo &= ~a5;
      v13 = (__int64 *)OBJECT_HEADER_TO_AUDIT_INFO(a4);
      if ( v13 )
        v16 = *v13;
      SeOperationAuditAlarm(
        v14,
        a4 + 48,
        v7,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a4 + 24) ^ (unsigned __int64)BYTE1(a4)]
      + 16,
        v15,
        v18[10],
        v16);
    }
  }
  else
  {
    v11 = 0;
  }
  _InterlockedIncrement64(a3);
  _InterlockedOr(v18, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
LABEL_13:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v11;
}
