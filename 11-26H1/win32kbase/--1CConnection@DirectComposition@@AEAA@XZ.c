/*
 * XREFs of ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1401B55DC
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x140042310 (NtDCompositionConfirmFrame.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1400A3000 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1400FD2C0 (NtDCompositionGetFrameLegacyTokens.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1401023BC (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x14015D9B0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1401635F4 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ??1CFrameStats@CConnection@DirectComposition@@QEAA@XZ @ 0x140178EF8 (--1CFrameStats@CConnection@DirectComposition@@QEAA@XZ.c)
 *     ??1CChannelGroup@DirectComposition@@QEAA@XZ @ 0x1401B56C0 (--1CChannelGroup@DirectComposition@@QEAA@XZ.c)
 *     ?CleanupRemoteTextures@CConnection@DirectComposition@@AEAAXXZ @ 0x1401BDEB4 (-CleanupRemoteTextures@CConnection@DirectComposition@@AEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CConnection::~CConnection(char **this)
{
  char *v2; // rcx
  DirectComposition::CChannel *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rcx
  PERESOURCE *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi

  DirectComposition::CConnection::DiscardAllCompositionFrames((DirectComposition::CConnection *)this);
  v2 = this[24];
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (DirectComposition::CChannel *)this[19];
  if ( v3 )
    DirectComposition::CChannel::Release(v3);
  v4 = (struct _ERESOURCE *)this[2];
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    GreDeleteFastMutex(this[2], v5, v6, v7);
  }
  v8 = this[37];
  if ( v8 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = (PERESOURCE *)(this + 19853);
  if ( this[19853] )
  {
    DirectComposition::CConnection::CleanupRemoteTextures((DirectComposition::CConnection *)this);
    ExDeleteResourceLite(*v9);
    GreDeleteFastMutex((char *)*v9, v10, v11, v12);
  }
  Gre::SectionObj::~SectionObj((void **)this);
  v13 = 300LL;
  do
  {
    v9 -= 66;
    DirectComposition::CConnection::CFrameStats::~CFrameStats((DirectComposition::CConnection::CFrameStats *)v9);
    --v13;
  }
  while ( v13 );
  DirectComposition::CChannelGroup::~CChannelGroup((DirectComposition::CChannelGroup *)(this + 3));
}
