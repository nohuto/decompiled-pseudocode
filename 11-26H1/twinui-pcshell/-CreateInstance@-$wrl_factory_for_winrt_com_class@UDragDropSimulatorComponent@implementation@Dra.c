/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180579240
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?as@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x1801FA5D4 (-as@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-AUhresult@2@AEBUguid@2@PEAPEAX@Z.c)
 *     ??0?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x180292B38 (--0-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  _QWORD *v7; // r14
  char v8; // cl
  char v9; // dl
  char v10; // r8
  char v11; // r10
  char v12; // r11
  char v13; // bl
  char v14; // di
  char v15; // si
  unsigned int v16; // ebx
  int v17; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v18; // [rsp+28h] [rbp-40h] BYREF
  int v19; // [rsp+30h] [rbp-38h] BYREF
  __int16 v20; // [rsp+34h] [rbp-34h]
  __int16 v21; // [rsp+36h] [rbp-32h]
  char v22; // [rsp+38h] [rbp-30h]
  char v23; // [rsp+39h] [rbp-2Fh]
  char v24; // [rsp+3Ah] [rbp-2Eh]
  char v25; // [rsp+3Bh] [rbp-2Dh]
  char v26; // [rsp+3Ch] [rbp-2Ch]
  char v27; // [rsp+3Dh] [rbp-2Bh]
  char v28; // [rsp+3Eh] [rbp-2Ah]
  char v29; // [rsp+3Fh] [rbp-29h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    v7 = operator new(0x70uLL);
    memset_0(v7, 0, 0x70uLL);
    wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>((winrt::immersive_shell_component *)v7);
    *v7 = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
    v7[1] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
    v7[2] = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
    v7[4] = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::`vftable';
    v18 = v7;
    v8 = *((_BYTE *)a3 + 8);
    v9 = *((_BYTE *)a3 + 9);
    v10 = *((_BYTE *)a3 + 10);
    v11 = *((_BYTE *)a3 + 11);
    v12 = *((_BYTE *)a3 + 12);
    v13 = *((_BYTE *)a3 + 13);
    v14 = *((_BYTE *)a3 + 14);
    v15 = *((_BYTE *)a3 + 15);
    v19 = *a3;
    v20 = *((_WORD *)a3 + 2);
    v21 = *((_WORD *)a3 + 3);
    v22 = v8;
    v23 = v9;
    v24 = v10;
    v25 = v11;
    v26 = v12;
    v27 = v13;
    v28 = v14;
    v29 = v15;
    v16 = *winrt::com_ptr<IObjectWithSite>::as(&v18, &v17, (__int64)&v19, (__int64)a4);
    if ( v7 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v18);
    return v16;
  }
}
