/*
 * XREFs of ?ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ @ 0x14014F4F0
 * Callers:
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x14004F890 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x14004FD44 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::ReevaluateDDA(DirectComposition::CConnection *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx

  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
  v2 = *((_QWORD *)this + 19);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2) == 2 )
  {
    v3 = *(_DWORD *)(v2 + 56);
    if ( (v3 & 0x10) == 0 )
    {
      *(_DWORD *)(v2 + 56) = v3 | 0x10;
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
  DirectComposition::CChannel::Unlock(*((PERESOURCE **)this + 19));
  return v4;
}
