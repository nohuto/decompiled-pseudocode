/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDWMStoryboardListener@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x180160E00
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x180161034 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDWMStoryboardListener>::GetWeakReference(
        __int64 a1,
        volatile int *a2)
{
  signed __int64 v2; // rbx
  __int64 WeakReference; // rax
  _DWORD *v6; // rcx
  unsigned __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rbx

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a2 = 0LL;
  if ( v2 < 0 )
  {
LABEL_7:
    v10 = 2 * v2;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v10 + 12), a2);
    *(_QWORD *)a2 = v10;
    return 0LL;
  }
  WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference(
                             (struct IUnknown *)(a1 - 16),
                             (struct IUnknown *)a2);
  v6 = (_DWORD *)WeakReference;
  if ( WeakReference )
  {
    v7 = (WeakReference >> 1) | 0x8000000000000000uLL;
    while ( 1 )
    {
      v6[4] = v2;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v7, v2);
      v8 = v2 == v9;
      v2 = v9;
      if ( v8 )
        break;
      if ( v9 < 0 )
      {
        *(_QWORD *)v6 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
        v6[4] = -1073741823;
        v6[3] = -1073741823;
        operator delete(v6, (const struct std::nothrow_t *)0x20);
        goto LABEL_7;
      }
    }
    *(_QWORD *)a2 = v6;
    return 0LL;
  }
  return 2147942414LL;
}
