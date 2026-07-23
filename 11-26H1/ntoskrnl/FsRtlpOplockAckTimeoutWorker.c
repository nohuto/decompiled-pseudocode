/*
 * XREFs of FsRtlpOplockAckTimeoutWorker @ 0x1405B9E10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall FsRtlpOplockAckTimeoutWorker(PVOID Entry)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // [rsp+30h] [rbp-39h] BYREF
  __int64 v7; // [rsp+38h] [rbp-31h] BYREF
  __int64 v8; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  char *v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  __int64 *v15; // [rsp+90h] [rbp+27h]
  __int64 v16; // [rsp+98h] [rbp+2Fh]
  __int64 *v17; // [rsp+A0h] [rbp+37h]
  __int64 v18; // [rsp+A8h] [rbp+3Fh]

  memset_0(&v10, 0, 0x48uLL);
  v13 = (char *)*((_QWORD *)Entry + 21);
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v10.Ptr) = 18;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(*((_QWORD *)Entry + 20) + 152LL));
  v3 = *((_BYTE *)Entry + 181);
  if ( !v3 )
    FsRtlpOplockCleanup(*((_QWORD *)Entry + 20), (__int64)&v10, 1);
  ObfDereferenceObjectWithTag(*((PVOID *)Entry + 21), 0x746C6644u);
  v4 = *((_QWORD *)Entry + 20);
  *((_QWORD *)Entry + 21) = 0LL;
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v4 + 152));
  KeLeaveCriticalRegion();
  if ( (unsigned int)dword_140E06B30 > 5 && tlgKeywordOn((__int64)&dword_140E06B30, 0x400000000000LL) )
  {
    v7 = 1LL;
    v11 = &v7;
    v12 = 8LL;
    v13 = &v6;
    v8 = g_OplockAckTimeoutMs;
    v15 = &v8;
    v17 = &v9;
    v6 = v3;
    v14 = 1LL;
    v16 = 8LL;
    v9 = 0x1000000LL;
    v18 = 8LL;
    tlgWriteAgg((__int64)&dword_140E06B30, (unsigned __int8 *)&byte_140045850, v5, 6u, &v10);
  }
  ExFreeToNPagedLookasideList(&g_OplockAckTimeoutLookaside, Entry);
}
