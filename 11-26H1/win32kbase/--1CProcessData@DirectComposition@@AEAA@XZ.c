/*
 * XREFs of ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x14010F2C8
 * Callers:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x14010F098 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1400A9050 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1400A96C0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x1400A97E0 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x14010F354 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x14010F410 (-OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x14010F4B8 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x14012B768 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

void __fastcall DirectComposition::CProcessData::~CProcessData(DirectComposition::CProcessData *this)
{
  DirectComposition::CCompClockInfo *v2; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v4; // rsi

  if ( *((_DWORD *)this + 16) || *((_DWORD *)this + 17) )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)this);
    v4 = DefaultConnection;
    if ( DefaultConnection )
    {
      if ( *((_DWORD *)this + 16) )
        DirectComposition::CConnection::EnableMMCSS(DefaultConnection, 0);
      if ( *((_DWORD *)this + 17) )
        DirectComposition::CConnection::BoostCompositorClock(v4, 0);
      DirectComposition::CConnection::Release(v4);
    }
  }
  v2 = (DirectComposition::CCompClockInfo *)*((_QWORD *)this + 7);
  if ( v2 )
    DirectComposition::CCompClockInfo::Release(v2);
  DirectComposition::CChannel::OnProcessDestruction(this);
  DirectComposition::CConnection::OnProcessDestruction(this);
}
