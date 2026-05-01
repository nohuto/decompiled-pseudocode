/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UPinManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18021B850
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18029E6AC (--0-$heap_implements@V-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@w.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::PinManager>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  void *v7; // rbx
  __int64 v8; // rax
  char v9; // cl
  char v10; // dl
  char v11; // r9
  char v12; // r10
  char v13; // r11
  char v14; // di
  char v15; // si
  unsigned int v16; // ebx
  const char *v17; // r9
  __int64 (__fastcall ***v18)(_QWORD, int *, _QWORD *); // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+28h] [rbp-30h] BYREF
  __int16 v20; // [rsp+2Ch] [rbp-2Ch]
  __int16 v21; // [rsp+2Eh] [rbp-2Ah]
  char v22; // [rsp+30h] [rbp-28h]
  char v23; // [rsp+31h] [rbp-27h]
  char v24; // [rsp+32h] [rbp-26h]
  char v25; // [rsp+33h] [rbp-25h]
  char v26; // [rsp+34h] [rbp-24h]
  char v27; // [rsp+35h] [rbp-23h]
  char v28; // [rsp+36h] [rbp-22h]
  char v29; // [rsp+37h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"OneCore\\Internal\\Sdk\\Inc\\wil\\opensource\\wil\\cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    try
    {
      v7 = operator new(0x160uLL);
      memset_0(v7, 0, 0x160uLL);
      v8 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>(v7);
      v18 = (__int64 (__fastcall ***)(_QWORD, int *, _QWORD *))((v8 + 8) & -(__int64)(v8 != 0));
      v9 = *((_BYTE *)a3 + 8);
      v10 = *((_BYTE *)a3 + 9);
      v11 = *((_BYTE *)a3 + 10);
      v12 = *((_BYTE *)a3 + 11);
      v13 = *((_BYTE *)a3 + 12);
      LOBYTE(v7) = *((_BYTE *)a3 + 13);
      v14 = *((_BYTE *)a3 + 14);
      v15 = *((_BYTE *)a3 + 15);
      v19 = *a3;
      v20 = *((_WORD *)a3 + 2);
      v21 = *((_WORD *)a3 + 3);
      v22 = v9;
      v23 = v10;
      v24 = v11;
      v25 = v12;
      v26 = v13;
      v27 = (char)v7;
      v28 = v14;
      v29 = v15;
      v16 = (**v18)(v18, &v19, a4);
      if ( v18 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v18);
      result = v16;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x49,
                             (int)"OneCore\\Internal\\Sdk\\Inc\\wil\\opensource\\wil\\cppwinrt_wrl.h",
                             v17);
    }
  }
  return result;
}
