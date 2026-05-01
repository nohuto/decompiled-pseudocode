/*
 * XREFs of ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180115BE8
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180115950 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x1802C3B64 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800EBDE0 (-MemoryFree@@YAXPEAX@Z.c)
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180115D20 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180115E74 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x1802D744C (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::FeatureStateData::RecordUsage(PSRWLOCK SRWLock)
{
  _BYTE v2[48]; // [rsp+20h] [rbp-C8h] BYREF
  void *v3; // [rsp+50h] [rbp-98h]
  _BYTE v4[48]; // [rsp+60h] [rbp-88h] BYREF
  void *v5; // [rsp+90h] [rbp-58h]
  _BYTE v6[48]; // [rsp+A0h] [rbp-48h] BYREF
  void *v7; // [rsp+D0h] [rbp-18h]

  wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)v2);
  AcquireSRWLockExclusive(SRWLock);
  if ( LOBYTE(SRWLock[8].Ptr) )
    wil::details_abi::RawUsageIndex::Swap(
      (wil::details_abi::RawUsageIndex *)v2,
      (struct wil::details_abi::RawUsageIndex *)&SRWLock[1]);
  if ( LOBYTE(SRWLock[16].Ptr) )
    wil::details_abi::RawUsageIndex::Swap(
      (wil::details_abi::RawUsageIndex *)v4,
      (struct wil::details_abi::RawUsageIndex *)&SRWLock[9]);
  if ( LOBYTE(SRWLock[24].Ptr) )
    wil::details_abi::RawUsageIndex::Swap(
      (wil::details_abi::RawUsageIndex *)v6,
      (struct wil::details_abi::RawUsageIndex *)&SRWLock[17]);
  ReleaseSRWLockExclusive(SRWLock);
  wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)v2);
  if ( v7 )
    MemoryFree(v7);
  if ( v5 )
    MemoryFree(v5);
  if ( v3 )
    MemoryFree(v3);
}
