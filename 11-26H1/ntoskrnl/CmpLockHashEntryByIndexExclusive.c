/*
 * XREFs of CmpLockHashEntryByIndexExclusive @ 0x140775428
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140ADE3F8 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x1408CECF0 (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockHashEntryByIndexExclusive(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v5; // r14
  unsigned __int64 *v6; // rdi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbx
  __int64 result; // rax

  v5 = (unsigned int)BugCheckParameter4;
  v6 = (unsigned __int64 *)(*(_QWORD *)(BugCheckParameter2 + 1648) + 24LL * (unsigned int)BugCheckParameter4);
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)v6, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v6[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xBuLL, v5);
  return result;
}
