/*
 * XREFs of ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x14008A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x14008BA40 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x14008BB90 (-AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z.c)
 *     ?HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x14008CCA0 (-HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     CoreUICallReceive @ 0x140153830 (CoreUICallReceive.c)
 *     ?ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z @ 0x14016704C (-ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z.c)
 *     ?GetReceiveBufferMaxSize@RegistrarClient@CoreMessagingK@@SAGXZ @ 0x1401670FC (-GetReceiveBufferMaxSize@RegistrarClient@CoreMessagingK@@SAGXZ.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1401BE08C (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

__int64 __fastcall CoreMessagingK::SendHost::SubmitBuffer(
        struct IMessageCallSendHost *a1,
        unsigned __int64 *a2,
        __int64 a3,
        char *a4)
{
  char *v4; // rsi
  unsigned __int16 ReceiveBufferMaxSize; // ax
  int v6; // edi
  struct AlpcBufferK *v7; // rbx
  __int64 UserCoreMessagingSessionState; // rax
  int v9; // eax
  int v10; // edx
  unsigned __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  struct AlpcBufferK *v13; // [rsp+48h] [rbp-20h] BYREF
  void *v14; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0LL;
  v4 = a4 - 80;
  LOBYTE(v15) = 0;
  v14 = &CoreMessagingK::ReceiveHost::s_Vtbl;
  ReceiveBufferMaxSize = CoreMessagingK::RegistrarClient::GetReceiveBufferMaxSize();
  v13 = 0LL;
  v6 = CoreMessagingK::BufferCache::AllocUninitialized(ReceiveBufferMaxSize, (void **)&v13);
  if ( v6 < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = v13;
    v12 = CoreMessagingK::RegistrarClient::GetReceiveBufferMaxSize();
    UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState();
    v6 = ZwAlpcSendWaitReceivePort(
           *(_QWORD *)(UserCoreMessagingSessionState + 24),
           0x20000LL,
           v4,
           0LL,
           v7,
           &v12,
           0LL,
           0LL);
    if ( v6 >= 0 )
    {
      CoreMessagingK::SendHost::ValidateReceiveBuffer(v7, v12);
      v9 = CoreUICallReceive(
             (struct IMessageCallReceiveHost *)&v14,
             (__int64)&v15,
             (void *)(((unsigned __int64)v7 + 80) & -(__int64)(*((_DWORD *)v7 + 18) != 0)),
             *((_DWORD *)v7 + 18));
      if ( v9 )
        CoreMessagingK::Runtime::BugCheck(1282LL, v9, 0LL);
      CoreMessagingK::BufferCache::Free(v4);
      v6 = 0;
    }
  }
  CoreMessagingK::BufferCache::Free(v7);
  return CoreMessagingK::HResultUtil::HRESULTFromNTStatus((CoreMessagingK::HResultUtil *)(unsigned int)v6, v10);
}
