/*
 * XREFs of ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x14022A1A8
 * Callers:
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x14010F354 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     NtDCompositionCreateConnection @ 0x140228DB0 (NtDCompositionCreateConnection.c)
 *     NtDCompositionDestroyConnection @ 0x140228F40 (NtDCompositionDestroyConnection.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1400A6790 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x140163454 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::DestroyHandle(struct HDCOMPOSITIONCONNECTION__ *a1)
{
  DirectComposition::CConnection *v2; // rsi
  struct DirectComposition::CProcessData *v3; // rax
  struct DirectComposition::CProcessData *v4; // rdi
  unsigned int v5; // ebx

  v2 = 0LL;
  v3 = DirectComposition::CProcessData::Current((__int64)a1);
  v4 = v3;
  if ( v3 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)v3 + 4));
    if ( *((_QWORD *)v4 + 3) && a1 == *((struct HDCOMPOSITIONCONNECTION__ **)v4 + 2) )
    {
      v2 = (DirectComposition::CConnection *)*((_QWORD *)v4 + 3);
      *((_QWORD *)v4 + 3) = 0LL;
      v5 = 0;
    }
    else
    {
      v5 = -1073741790;
    }
    ExReleaseResourceLite(*((PERESOURCE *)v4 + 4));
    KeLeaveCriticalRegion();
    if ( v2 )
    {
      DirectComposition::CConnection::Disconnect(v2);
      DirectComposition::CConnection::Release(v2);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v5;
}
