/*
 * XREFs of ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1400CC2E0
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1400CC1C0 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1400CC3D0 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x1400CC470 (-Initialize@CChannelGroup@DirectComposition@@QEAAJXZ.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::Initialize(DirectComposition::CConnection *this)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS SessionTokenManager; // ebx
  struct _ERESOURCE *v5; // rax

  v2 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, sizeof(struct _ERESOURCE));
    SessionTokenManager = ExInitializeResourceLite(v3);
    if ( SessionTokenManager >= 0 )
    {
      *((_QWORD *)this + 2) = v3;
      SessionTokenManager = DirectComposition::CChannelGroup::Initialize((DirectComposition::CConnection *)((char *)this + 24));
      if ( SessionTokenManager < 0 )
        return (unsigned int)SessionTokenManager;
      v5 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
      v3 = v5;
      if ( !v5 )
        return (unsigned int)-1073741801;
      memset(v5, 0, sizeof(struct _ERESOURCE));
      SessionTokenManager = DirectComposition::CSystemChannel::Create(
                              this,
                              (struct DirectComposition::CSystemChannel **)this + 19);
      if ( SessionTokenManager >= 0 )
        SessionTokenManager = DxgkGetSessionTokenManager((char *)this + 296);
    }
    GreDeleteFastMutex((char *)v3);
    return (unsigned int)SessionTokenManager;
  }
  return (unsigned int)-1073741801;
}
