/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UPinManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18022A1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1802A5164 (--0-$heap_implements@V-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@w.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::PinManager>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  void *v6; // rbx
  __int64 v7; // rax
  char v8; // r9
  char v9; // r10
  char v10; // r11
  char v11; // di
  char v12; // si
  char v13; // r14
  char v14; // r15
  __int16 v15; // dx
  __int16 v16; // cx
  unsigned int v17; // ebx
  const char *v18; // r9
  __int64 (__fastcall ***v19)(_QWORD, int *, _QWORD *); // [rsp+20h] [rbp-48h] BYREF
  int v20; // [rsp+28h] [rbp-40h] BYREF
  __int16 v21; // [rsp+2Ch] [rbp-3Ch]
  __int16 v22; // [rsp+2Eh] [rbp-3Ah]
  char v23; // [rsp+30h] [rbp-38h]
  char v24; // [rsp+31h] [rbp-37h]
  char v25; // [rsp+32h] [rbp-36h]
  char v26; // [rsp+33h] [rbp-35h]
  char v27; // [rsp+34h] [rbp-34h]
  char v28; // [rsp+35h] [rbp-33h]
  char v29; // [rsp+36h] [rbp-32h]
  char v30; // [rsp+37h] [rbp-31h]
  _QWORD *v31; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v31 = a4;
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
      v6 = operator new(0x160uLL);
      memset_0(v6, 0, 0x160uLL);
      v7 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>(v6);
      v19 = (__int64 (__fastcall ***)(_QWORD, int *, _QWORD *))((v7 + 8) & -(__int64)(v7 != 0));
      v8 = *((_BYTE *)a3 + 8);
      v9 = *((_BYTE *)a3 + 9);
      v10 = *((_BYTE *)a3 + 10);
      LOBYTE(v6) = *((_BYTE *)a3 + 11);
      v11 = *((_BYTE *)a3 + 12);
      v12 = *((_BYTE *)a3 + 13);
      v13 = *((_BYTE *)a3 + 14);
      v14 = *((_BYTE *)a3 + 15);
      v15 = *((_WORD *)a3 + 3);
      v16 = *((_WORD *)a3 + 2);
      v20 = *a3;
      v21 = v16;
      v22 = v15;
      v23 = v8;
      v24 = v9;
      v25 = v10;
      v26 = (char)v6;
      v27 = v11;
      v28 = v12;
      v29 = v13;
      v30 = v14;
      v17 = (**v19)(v19, &v20, v31);
      if ( v19 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v19);
      result = v17;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x49,
                             (unsigned int)"OneCore\\Internal\\Sdk\\Inc\\wil\\opensource\\wil\\cppwinrt_wrl.h",
                             v18);
    }
  }
  return result;
}
