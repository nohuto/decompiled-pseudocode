/*
 * XREFs of MiCopyLargeVad @ 0x14088621C
 * Callers:
 *     MiMapChildLargePageVads @ 0x140885FAC (MiMapChildLargePageVads.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     ExUnlockUserBuffer @ 0x14040F520 (ExUnlockUserBuffer.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 */

__int64 __fastcall MiCopyLargeVad(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3)
{
  unsigned __int16 v6; // dx
  unsigned __int64 LockedVadEvent; // rax
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rdi
  int v13; // edi
  char VadFlags; // al
  int v16; // esi
  int v17; // r13d
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r8
  char *v20; // r15
  unsigned __int64 v21; // r14
  size_t v22; // rdi
  __int64 v23; // r8
  void *v24; // [rsp+30h] [rbp-39h] BYREF
  PVOID v25; // [rsp+38h] [rbp-31h] BYREF
  void *Src; // [rsp+40h] [rbp-29h] BYREF
  PVOID P; // [rsp+48h] [rbp-21h] BYREF
  _OWORD v28[3]; // [rsp+50h] [rbp-19h] BYREF

  Src = 0LL;
  P = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  memset(v28, 0, sizeof(v28));
  if ( MiLocateLockedVadEvent(a3, 0x10u) )
  {
    LockedVadEvent = MiLocateLockedVadEvent(a2, v6);
    *(_BYTE *)(v8 + 24) = *(_BYTE *)(LockedVadEvent + 24);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(LockedVadEvent + 32);
  }
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v28);
  v10 = (AutoBoost *)KeAbPreAcquire(a3 + 40, 0LL, 0LL, v9);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a3 + 40), v10, a3 + 40);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = MiMapUserLargePages(a3, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 40));
  KeAbPostRelease(a3 + 40);
  KiUnstackDetachProcess((__int64)v28, 0);
  if ( v13 < 0 )
    return (unsigned int)v13;
  VadFlags = MiReadVadFlags(a3);
  v16 = 0;
  v17 = VadFlags & 0x80;
  v18 = 4292870144LL;
  v19 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  v20 = (char *)(v19 << 12);
  v21 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) - v19 + 1) << 12;
  while ( v21 )
  {
    v22 = v18;
    if ( v21 <= v18 )
      v22 = v21;
    LOBYTE(v19) = 1;
    v16 = ExLockUserBuffer(v20, (unsigned int)v22, v19, 0LL, &Src, &P);
    if ( v16 < 0 )
      goto LABEL_17;
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v28);
    if ( v17 )
    {
      v24 = v20;
      v25 = 0LL;
      RtlCopyToUser(v20, Src, v22);
LABEL_24:
      KiUnstackDetachProcess((__int64)v28, 0);
      ExUnlockUserBuffer((struct _MDL *)P);
      v21 -= v22;
      v20 += v22;
    }
    else
    {
      LOBYTE(v23) = 1;
      v16 = ExLockUserBuffer(v20, (unsigned int)v22, v23, 1LL, &v24, &v25);
      if ( v16 >= 0 )
      {
        RtlCopyVolatileMemory(v24, Src, v22);
        ExUnlockUserBuffer((struct _MDL *)v25);
        goto LABEL_24;
      }
      KiUnstackDetachProcess((__int64)v28, 0);
      ExUnlockUserBuffer((struct _MDL *)P);
LABEL_17:
      v18 = (v22 >> 1) & 0x7FFFFFFFFFE00000LL;
      if ( v18 < 0x200000 )
        return (unsigned int)v16;
    }
  }
  return (unsigned int)v16;
}
