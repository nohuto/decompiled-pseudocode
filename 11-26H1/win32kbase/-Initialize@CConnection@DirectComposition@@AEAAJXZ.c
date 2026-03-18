/*
 * XREFs of ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x140110614
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1401104F0 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x140110774 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x14019B7B4 (-Initialize@CChannelGroup@DirectComposition@@QEAAJXZ.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::Initialize(DirectComposition::CConnection *this)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  __int64 v4; // rdx
  NTSTATUS SessionTokenManager; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _ERESOURCE *v8; // rax
  char *v9; // rcx
  struct _ERESOURCE *v10; // rax
  struct _ERESOURCE *v11; // rsi

  v2 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
  v3 = v2;
  if ( !v2 )
    return (unsigned int)-1073741801;
  memset(v2, 0, sizeof(struct _ERESOURCE));
  SessionTokenManager = ExInitializeResourceLite(v3);
  if ( SessionTokenManager < 0 )
    goto LABEL_12;
  *((_QWORD *)this + 2) = v3;
  SessionTokenManager = DirectComposition::CChannelGroup::Initialize((DirectComposition::CConnection *)((char *)this + 24));
  if ( SessionTokenManager >= 0 )
  {
    v8 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
    v3 = v8;
    if ( v8 )
    {
      memset(v8, 0, sizeof(struct _ERESOURCE));
      SessionTokenManager = DirectComposition::CSystemChannel::Create(
                              this,
                              (struct DirectComposition::CSystemChannel **)this + 19);
      v9 = (char *)v3;
      if ( SessionTokenManager < 0 )
        goto LABEL_13;
      SessionTokenManager = DxgkGetSessionTokenManager((char *)this + 296);
      v9 = (char *)v3;
      if ( SessionTokenManager < 0 )
        goto LABEL_13;
      v10 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
      v11 = v10;
      if ( v10 )
      {
        memset(v10, 0, sizeof(struct _ERESOURCE));
        SessionTokenManager = ExInitializeResourceLite(v11);
        if ( SessionTokenManager < 0 )
          GreDeleteFastMutex((char *)v11, v4, v6, v7);
        else
          *((_QWORD *)this + 19853) = v11;
      }
      else
      {
        SessionTokenManager = -1073741801;
      }
LABEL_12:
      v9 = (char *)v3;
LABEL_13:
      GreDeleteFastMutex(v9, v4, v6, v7);
      return (unsigned int)SessionTokenManager;
    }
    return (unsigned int)-1073741801;
  }
  return (unsigned int)SessionTokenManager;
}
