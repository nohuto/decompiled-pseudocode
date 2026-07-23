/*
 * XREFs of CmpLockHashEntryShared @ 0x1409E4A90
 * Callers:
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpLockHashEntryShared(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // rbx
  signed __int64 *v6; // rbp
  void *v7; // rdx
  LegacyAutoBoost *v8; // rsi
  __int64 result; // rax
  int v10; // ett

  v4 = (unsigned int)BugCheckParameter4;
  v6 = (signed __int64 *)(*(_QWORD *)(BugCheckParameter2 + 1648)
                        + 24
                        * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1656) - 1) & ((101027
                                                                                        * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9))));
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v6, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, 0, v8, (struct _KTHREAD *)v6);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  _m_prefetchw((const void *)(BugCheckParameter2 + 4240));
  LODWORD(result) = *(_DWORD *)(BugCheckParameter2 + 4240);
  do
  {
    if ( !(_DWORD)result )
      KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 9uLL, v4);
    v10 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(BugCheckParameter2 + 4240),
                             result + 1,
                             result);
  }
  while ( v10 != (_DWORD)result );
  return result;
}
