/*
 * XREFs of ?GetAccessibleObject@CMultitaskingViewElementBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804C1E00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemGrid@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@AEAPEAVCSwitchItemGrid@@@Z @ 0x1804BF2A8 (--$MakeAndInitialize@V-$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemG.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewElementBase::GetAccessibleObject(
        CMultitaskingViewElementBase *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 *v6; // r15
  CMultitaskingViewElementBase **v7; // r14
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(CMultitaskingViewElementBase *, CMultitaskingViewElementBase *, GUID *, __int64 *); // rdi
  CMultitaskingViewElementBase *v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CMultitaskingViewElementBase *v15; // [rsp+60h] [rbp+8h] BYREF

  *a3 = 0LL;
  v6 = (__int64 *)((char *)this + 192);
  if ( !*((_QWORD *)this + 24) )
  {
    v7 = (CMultitaskingViewElementBase **)((char *)this + 184);
    if ( !*((_QWORD *)this + 23) )
    {
      v15 = this;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
      v8 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CSwitchItemGrid>,WeakReference::CWeakReference<CSwitchItemGrid>,CSwitchItemGrid * &>(
             v7,
             &v15);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
          (const char *)(unsigned int)v8);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x38,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
          (const char *)(unsigned int)v9);
      }
      if ( v9 < 0 )
      {
        v10 = 651LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
    v11 = *(__int64 (__fastcall **)(CMultitaskingViewElementBase *, CMultitaskingViewElementBase *, GUID *, __int64 *))(*(_QWORD *)this + 584LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v6);
    v15 = *v7;
    v12 = v15;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    v9 = v11(this, v12, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    if ( v9 < 0 )
    {
      v10 = 653LL;
      goto LABEL_11;
    }
  }
  v9 = (**(__int64 (__fastcall ***)(__int64, const struct _GUID *, void **))*v6)(*v6, a2, a3);
  if ( v9 < 0 )
  {
    v10 = 656LL;
    goto LABEL_11;
  }
  return (unsigned int)v9;
}
