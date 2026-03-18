/*
 * XREFs of ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x14012B768
 * Callers:
 *     ??1CProcessData@DirectComposition@@AEAA@XZ @ 0x14010F2C8 (--1CProcessData@DirectComposition@@AEAA@XZ.c)
 *     NtDCompositionEnableMMCSS @ 0x14012B680 (NtDCompositionEnableMMCSS.c)
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A8FE8 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A901C (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x14012B8DC (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14012B944 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::EnableMMCSS(DirectComposition::CConnection *this, int a2)
{
  unsigned int v4; // esi
  bool v5; // bp
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v9; // eax
  bool v10; // zf
  bool v11; // bl
  int (*v12)(void); // rax
  void (__fastcall *v13)(bool); // rax

  v4 = 0;
  v5 = 0;
  DirectComposition::CCriticalSection::AcquireShared(*((PERESOURCE *)this + 2));
  ExAcquirePushLockExclusiveEx((char *)this + 200, 0LL);
  *((_BYTE *)this + 208) = 1;
  v6 = *((unsigned int *)this + 61);
  if ( !a2 )
  {
    if ( !(_DWORD)v6 )
    {
      v4 = -1073741823;
      goto LABEL_7;
    }
    v9 = v6 - 1;
    v10 = (_DWORD)v6 == 1;
    goto LABEL_10;
  }
  if ( (_DWORD)v6 != -1 )
  {
    v9 = v6 + 1;
    v10 = (_DWORD)v6 == 0;
LABEL_10:
    v5 = v10;
    *((_DWORD *)this + 61) = v9;
    goto LABEL_11;
  }
  v4 = -1073741823;
  v9 = -1;
LABEL_11:
  if ( v5 )
  {
    v11 = v9 != 0;
    v12 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 3752LL);
    if ( v12 )
    {
      if ( v12() >= 0 )
      {
        v13 = *(void (__fastcall **)(bool))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 48) + 3760LL);
        if ( v13 )
          v13(v11);
      }
    }
    if ( DirectComposition::CConnection::IsConnected(this) )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
      DirectComposition::CSystemChannel::EnableMMCSS(*((DirectComposition::CSystemChannel **)this + 19), v11);
      DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
    }
  }
LABEL_7:
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 200));
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  return v4;
}
