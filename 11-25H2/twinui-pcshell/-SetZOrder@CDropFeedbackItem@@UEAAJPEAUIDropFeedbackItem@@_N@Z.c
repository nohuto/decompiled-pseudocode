/*
 * XREFs of ?SetZOrder@CDropFeedbackItem@@UEAAJPEAUIDropFeedbackItem@@_N@Z @ 0x180524690
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedbackItem::SetZOrder(
        CDropFeedbackItem *this,
        __int64 (__fastcall ***a2)(struct IDropFeedbackItem *, GUID *, __int64 *),
        __int64 a3)
{
  __int64 v3; // rdi
  char v4; // bp
  __int64 (__fastcall *v7)(struct IDropFeedbackItem *, GUID *, __int64 *); // rbx
  int v8; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rsi
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3;
  v13 = 0LL;
  if ( !a2 )
    goto LABEL_6;
  v12 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  v8 = v7((struct IDropFeedbackItem *)a2, &GUID_3b3d24a4_78ef_4796_bec6_c9896b501c36, &v12);
  if ( v8 >= 0 )
  {
    v9 = v12;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    v8 = v10(v9, &v13);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  if ( v8 >= 0 )
  {
    v3 = v13;
LABEL_6:
    LOBYTE(a3) = v4;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 23) + 152LL))(
           *((_QWORD *)this + 23),
           v3,
           a3);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return (unsigned int)v8;
}
