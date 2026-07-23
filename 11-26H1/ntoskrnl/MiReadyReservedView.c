/*
 * XREFs of MiReadyReservedView @ 0x140525FF8
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402C4A60 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1402C6BA0 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiReadyReservedView(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  char v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  signed __int32 v11[8]; // [rsp+0h] [rbp-148h] BYREF
  _DWORD v12[4]; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v13[208]; // [rsp+40h] [rbp-108h] BYREF

  memset_0(v13, 0, 0xC8uLL);
  v4 = a1 + 22592;
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = MiLockWorkingSetShared(v4, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL);
  MiLockPageTableInternal(v4, v6, 0);
  v8 = *(_QWORD *)v5;
  if ( *(_QWORD *)v5 )
  {
    if ( qword_140E2D8C0 )
    {
      if ( (v8 & 0x10) != 0 )
        v8 &= ~0x10uLL;
      else
        v8 &= qword_140E2D8C8;
    }
    v9 = v8 >> 31;
    do
    {
      _InterlockedOr(v11, 0);
      if ( (unsigned int)(KiTbFlushTimeStamp - v9) > 2 || (v9 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v9) >= 2 )
        break;
      if ( (KiTbFlushTimeStamp & 1) == 0 )
      {
        MiInitializeTbFlushList((__int64)v13, v4, 20, 8, 1);
        MiInsertTbFlushEntry((__int64)v13, a2, 64LL, 0);
        MiFlushTbList((__int64)v13);
        break;
      }
      v12[0] = 0;
      _InterlockedOr(v11, 0);
      while ( _bittest(&KiTbFlushTimeStamp, 0) )
        KeYieldProcessorEx(v12);
    }
    while ( (v9 & 1) != 0 );
    *(_QWORD *)v5 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  MiUnlockPageTableInternal(v4, v6);
  LOBYTE(v10) = v7;
  MiUnlockWorkingSetShared(v4, v10);
}
