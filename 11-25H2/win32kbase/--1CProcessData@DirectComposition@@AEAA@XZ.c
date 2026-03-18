/*
 * XREFs of ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1400E8B64
 * Callers:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1400E89C4 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x14004F120 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14004F5D4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14004F604 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x140057E84 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1400E8BF0 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1400E8C9C (-OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1400E8D44 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 */

void __fastcall DirectComposition::CProcessData::~CProcessData(DirectComposition::CProcessData *this)
{
  DirectComposition::CCompClockInfo *v2; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  unsigned int v4; // edx
  DirectComposition::CConnection *v5; // rsi

  if ( *((_DWORD *)this + 16) || *((_DWORD *)this + 17) )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v5 = DefaultConnection;
    if ( DefaultConnection )
    {
      if ( *((_DWORD *)this + 16) )
        DirectComposition::CConnection::EnableMMCSS(DefaultConnection, 0);
      if ( *((_DWORD *)this + 17) )
        DirectComposition::CConnection::BoostCompositorClock(v5, 0);
      DirectComposition::CConnection::Release(v5, v4);
    }
  }
  v2 = (DirectComposition::CCompClockInfo *)*((_QWORD *)this + 7);
  if ( v2 )
    DirectComposition::CCompClockInfo::Release(v2);
  DirectComposition::CChannel::OnProcessDestruction(this);
  DirectComposition::CConnection::OnProcessDestruction(this);
}
