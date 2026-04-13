/*
 * XREFs of ?OpenSubscriptionHandle@Details@SubscribedContentStore@CreativeFramework@@YAJPEBGPEAPEAX@Z @ 0x180063628
 * Callers:
 *     ?CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z @ 0x18006209C (-CreateSubscriptionHandle@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180064140 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CreativeFramework::SubscribedContentStore::Details::OpenSubscriptionHandle(
        LPCWSTR lpName,
        unsigned __int16 *a2,
        void **a3)
{
  HANDLE v4; // rax
  unsigned int v5; // ebx
  int Error; // eax

  v4 = OpenEventW(0xF0000u, 0, lpName);
  *(_QWORD *)a2 = v4;
  v5 = 0;
  if ( v4 )
    return 0LL;
  Error = ResultFromKnownLastError();
  if ( Error < 0 )
    return (unsigned int)Error;
  return v5;
}
