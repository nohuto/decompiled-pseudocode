/*
 * XREFs of ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x140057E84
 * Callers:
 *     NtDCompositionEnableMMCSS @ 0x140058170 (NtDCompositionEnableMMCSS.c)
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x1400E8B64 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F56C (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F5A0 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x14004FD44 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140050200 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x140057CC4 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ApiSetEditionEnableSessionForMMCSS @ 0x140057FA4 (ApiSetEditionEnableSessionForMMCSS.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x140058004 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::EnableMMCSS(DirectComposition::CConnection *this, int a2)
{
  unsigned int v4; // esi
  bool v5; // bp
  int v6; // eax
  int v7; // ecx
  bool v8; // zf
  char v9; // bl

  v4 = 0;
  v5 = 0;
  DirectComposition::CCriticalSection::AcquireShared(*((PERESOURCE *)this + 2));
  ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
  *((_BYTE *)this + 208) = 1;
  v6 = *((_DWORD *)this + 61);
  if ( a2 )
  {
    if ( v6 == -1 )
    {
      v4 = -1073741823;
      v7 = -1;
      goto LABEL_7;
    }
    v7 = v6 + 1;
    v8 = v6 == 0;
  }
  else
  {
    if ( !v6 )
    {
      v4 = -1073741823;
      goto LABEL_10;
    }
    v7 = v6 - 1;
    v8 = v6 == 1;
  }
  v5 = v8;
  *((_DWORD *)this + 61) = v7;
LABEL_7:
  if ( v5 )
  {
    v9 = v7 != 0;
    ApiSetEditionEnableSessionForMMCSS(v7 != 0);
    if ( DirectComposition::CConnection::IsConnected(this) )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
      DirectComposition::CSystemChannel::EnableMMCSS(*((DirectComposition::CSystemChannel **)this + 19), v9);
      DirectComposition::CChannel::Unlock(*((PERESOURCE **)this + 19));
    }
  }
LABEL_10:
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 200));
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  return v4;
}
