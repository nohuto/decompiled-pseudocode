/*
 * XREFs of ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004D2D8
 * Callers:
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1401E917C (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402B003C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     DxgkShareObjectsInternal @ 0x1403136A0 (DxgkShareObjectsInternal.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1403DBCBC (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x14040DFBC (DxgkpAcquireKeyedMutexFromHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGKEYEDMUTEX::AcquireReference(DXGKEYEDMUTEX *this)
{
  if ( _InterlockedIncrement64((volatile signed __int64 *)this + 3) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 975;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NewReferenceCount > 0", 975LL, 0LL, 0LL, 0LL, 0LL);
  }
}
