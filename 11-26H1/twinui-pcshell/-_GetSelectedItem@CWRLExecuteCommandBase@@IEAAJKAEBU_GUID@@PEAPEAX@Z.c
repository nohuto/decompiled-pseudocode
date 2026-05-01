/*
 * XREFs of ?_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z @ 0x180455984
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180454EE0 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWRLExecuteCommandBase::_GetSelectedItem(
        CWRLExecuteCommandBase *this,
        __int64 a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v5; // rdi
  int v6; // ebx
  __int64 (__fastcall *v7)(__int64, _QWORD, const struct _GUID **); // rbx
  const struct _GUID *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  *a4 = 0LL;
  v5 = *((_QWORD *)this + 15);
  v6 = -2147024809;
  if ( v5 )
  {
    v9 = 0LL;
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, const struct _GUID **))(*(_QWORD *)v5 + 64LL);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v9);
    v6 = v7(v5, 0LL, &v9);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&v9->Data1)(
             v9,
             &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93,
             a4);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v9);
  }
  return (unsigned int)v6;
}
