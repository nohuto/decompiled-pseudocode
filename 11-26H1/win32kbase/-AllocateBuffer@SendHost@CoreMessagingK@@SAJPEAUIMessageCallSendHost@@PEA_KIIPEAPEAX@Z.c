/*
 * XREFs of ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z @ 0x14008CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x14008BB90 (-AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z.c)
 *     ?HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x14008CCA0 (-HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1401BE08C (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CoreMessagingK::SendHost::AllocateBuffer(
        struct IMessageCallSendHost *a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned int a4,
        void **a5)
{
  void **v5; // r14
  unsigned int v6; // esi
  __int64 v7; // rdi
  unsigned int v8; // ebp
  unsigned __int16 v9; // bp
  int v10; // eax
  int v11; // edx
  void **v12; // rbx

  v5 = a5;
  v6 = 0;
  v7 = a4;
  *a5 = 0LL;
  v8 = *(unsigned __int16 *)(W32GetUserCoreMessagingSessionState(a1, a2, a3) + 48);
  if ( (unsigned int)v7 > v8 )
    CoreMessagingK::Runtime::BugCheck(1280LL, v7, 0LL);
  if ( (unsigned int)v7 > 0xFFAF )
    CoreMessagingK::Runtime::BugCheck(1281LL, v7, 0LL);
  v9 = v8 + 80;
  a5 = 0LL;
  v10 = CoreMessagingK::BufferCache::AllocUninitialized(v9, (void **)&a5);
  if ( v10 < 0 )
  {
    v6 = v10;
  }
  else
  {
    v12 = a5;
    memset(a5, 0, v9);
    *((_DWORD *)v12 + 18) = (unsigned __int16)v7;
    *((_DWORD *)v12 + 14) = 2;
    *((_WORD *)v12 + 33) = 1;
    *((_WORD *)v12 + 2) = 0x8000;
    *((_WORD *)v12 + 1) = v7 + 80;
    *(_WORD *)v12 = v7 + 40;
    v11 = -(unsigned __int16)v7;
    *v5 = (void *)((unsigned __int64)(v12 + 10) & -(__int64)((unsigned __int16)v7 != 0));
  }
  return CoreMessagingK::HResultUtil::HRESULTFromNTStatus((CoreMessagingK::HResultUtil *)v6, v11);
}
