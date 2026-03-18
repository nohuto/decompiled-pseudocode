/*
 * XREFs of ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x14008B838
 * Callers:
 *     CoreMsgSend @ 0x14008B78C (CoreMsgSend.c)
 * Callees:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x14008BA40 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x14008BB90 (-AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z.c)
 *     ?TraceSend@Log@CoreMessagingK@@SAXPEBUConnectionTargetInfo@2@@Z @ 0x14008BC80 (-TraceSend@Log@CoreMessagingK@@SAXPEBUConnectionTargetInfo@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::Send(void *a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v4; // r12
  char *v6; // rsi
  _WORD *v7; // rdi
  NTSTATUS v8; // eax
  char *v9; // rbp
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  void *v15; // [rsp+48h] [rbp-30h] BYREF

  v4 = a4;
  v6 = 0LL;
  v7 = 0LL;
  if ( a4 > 0xFF9F )
  {
    v10 = -1073741582;
    goto LABEL_11;
  }
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a1, 0xF0000u, ExCoreMessagingObjectType, 0, &Object, 0LL);
  v9 = (char *)Object;
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Object + 1) + 8LL))() == 1 )
    {
      v6 = v9;
LABEL_5:
      if ( !**((_QWORD **)v6 + 3) )
        goto LABEL_14;
      CoreMessagingK::Log::TraceSend((const struct CoreMessagingK::ConnectionTargetInfo *)(v6 + 8));
      v15 = 0LL;
      v10 = CoreMessagingK::BufferCache::AllocUninitialized((unsigned __int16)v4 + 96, &v15);
      if ( v10 >= 0 )
      {
        v7 = v15;
        memset(v15, 0, 0x50uLL);
        v7[1] = v4 + 96;
        *((_DWORD *)v7 + 14) = 1;
        v7[33] = 1;
        *((_DWORD *)v7 + 18) = (unsigned __int16)(v4 + 16);
        *v7 = v4 + 56;
        v11 = (unsigned __int64)(v7 + 40) & -(__int64)((unsigned __int16)(v4 + 16) != 0);
        *(_DWORD *)(v11 + 8) = (unsigned __int16)(v4 + 16);
        *(_QWORD *)v11 = *((_QWORD *)v6 + 2);
        memmove((void *)(((unsigned __int64)(v7 + 40) & -(__int64)(*((_DWORD *)v7 + 18) != 0)) + 16), a3, v4);
        v12 = ZwAlpcSendWaitReceivePort(**((_QWORD **)v6 + 3), 0x10000LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL);
        v10 = v12;
        if ( v12 == -1073741769 || v12 == -1073740032 || v12 == -1073740029 || v12 == -1073740025 )
LABEL_14:
          v10 = -1073741769;
      }
      goto LABEL_11;
    }
    v10 = -1073741811;
  }
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v10 >= 0 )
    goto LABEL_5;
LABEL_11:
  CoreMessagingK::BufferCache::Free(v7);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v10;
}
