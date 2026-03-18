/*
 * XREFs of ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x140069850
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x140067A18 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x140067B68 (-AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z.c)
 *     ?HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x140069980 (-HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     ?ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z @ 0x1400699E8 (-ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z.c)
 *     CoreUICallReceive @ 0x140069A98 (CoreUICallReceive.c)
 *     ?GetReceiveBufferMaxSize@RegistrarClient@CoreMessagingK@@SAGXZ @ 0x14006A0D4 (-GetReceiveBufferMaxSize@RegistrarClient@CoreMessagingK@@SAGXZ.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x14019EC04 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 UserCoreMessagingSessionState; // rax
  int v12; // eax
  int v13; // edx
  unsigned __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  struct AlpcBufferK *v16; // [rsp+48h] [rbp-20h] BYREF
  void *v17; // [rsp+50h] [rbp-18h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  v4 = a4 - 80;
  LOBYTE(v18) = 0;
  v17 = &CoreMessagingK::ReceiveHost::s_Vtbl;
  ReceiveBufferMaxSize = CoreMessagingK::RegistrarClient::GetReceiveBufferMaxSize();
  v16 = 0LL;
  v6 = CoreMessagingK::BufferCache::AllocUninitialized(ReceiveBufferMaxSize, (void **)&v16);
  if ( v6 < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = v16;
    v15 = CoreMessagingK::RegistrarClient::GetReceiveBufferMaxSize();
    UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(v9, v8, v10);
    v6 = ZwAlpcSendWaitReceivePort(
           *(_QWORD *)(UserCoreMessagingSessionState + 24),
           0x20000LL,
           v4,
           0LL,
           v7,
           &v15,
           0LL,
           0LL);
    if ( v6 >= 0 )
    {
      CoreMessagingK::SendHost::ValidateReceiveBuffer(v7, v15);
      v12 = CoreUICallReceive(
              (struct IMessageCallReceiveHost *)&v17,
              (__int64)&v18,
              (void *)(((unsigned __int64)v7 + 80) & -(__int64)(*((_DWORD *)v7 + 18) != 0)),
              *((_DWORD *)v7 + 18));
      if ( v12 )
        CoreMessagingK::Runtime::BugCheck(1282LL, v12, 0LL);
      CoreMessagingK::BufferCache::Free(v4);
      v6 = 0;
    }
  }
  CoreMessagingK::BufferCache::Free((char *)v7);
  return CoreMessagingK::HResultUtil::HRESULTFromNTStatus((CoreMessagingK::HResultUtil *)(unsigned int)v6, v13);
}
