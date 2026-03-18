/*
 * XREFs of ?ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ @ 0x14016923C
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1400A7400 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::ReevaluateMPOCapabilities(DirectComposition::CConnection *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx

  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
  v2 = *((_QWORD *)this + 19);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2) == 2 )
  {
    v3 = *(_DWORD *)(v2 + 56);
    if ( (v3 & 0x20) == 0 )
    {
      *(_DWORD *)(v2 + 56) = v3 | 0x20;
      *(_BYTE *)(v2 + 264) |= 1u;
    }
    v4 = DirectComposition::CApplicationChannel::Commit(
           *((DirectComposition::CApplicationChannel **)this + 19),
           0LL,
           0,
           0,
           0LL,
           0LL,
           0LL,
           0);
  }
  else
  {
    v4 = -1073741790;
  }
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  return v4;
}
