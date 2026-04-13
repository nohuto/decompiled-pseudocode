/*
 * XREFs of ?GetCreativeEvent@CreativeEventStore@CreativeFramework@@YAJPEBGI0PEAPEAG@Z @ 0x180051600
 * Callers:
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18004E6D4 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180033BA0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003DAC8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall CreativeFramework::CreativeEventStore::GetCreativeEvent(
        CreativeFramework::CreativeEventStore *this,
        const unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)a4 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)&v8,
         L"%d,%ws,%ws",
         (unsigned int)a2,
         a3,
         this);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v6 = 0;
    *(_QWORD *)a4 = v8;
    v8 = 0LL;
    v10 = 0LL;
    v9 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)v5);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v8);
  return v6;
}
