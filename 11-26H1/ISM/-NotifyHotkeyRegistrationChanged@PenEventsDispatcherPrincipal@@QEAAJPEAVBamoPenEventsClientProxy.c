/*
 * XREFs of ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x18002E364
 * Callers:
 *     ?NotifyHotkeyRegistrationChanged@PenEventsClientCustomProxy@@AEAAJW4PenHotkeyId@@_N@Z @ 0x180072504 (-NotifyHotkeyRegistrationChanged@PenEventsClientCustomProxy@@AEAAJW4PenHotkeyId@@_N@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x18002E484 (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 *     ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x18002E4CC (-ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAG.c)
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18002E670 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18002E88C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenEventsDispatcherPrincipal::NotifyHotkeyRegistrationChanged(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4)
{
  int v4; // esi
  __int64 v5; // r14
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  HotkeyRegistrationForwarder *HotkeyRegistrationForwarder; // rax
  int v12; // eax
  int v14[3]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v15; // [rsp+2Ch] [rbp-24h]
  char v16; // [rsp+2Eh] [rbp-22h]
  char v17; // [rsp+2Fh] [rbp-21h]
  _QWORD *v18; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v19; // [rsp+38h] [rbp-18h]
  __int64 v20; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v4 = a4;
  v5 = a3;
  if ( IsEdition(8778LL) )
  {
    PenEventsDispatcherPrincipal::GetShellClients(a1, &v18);
    v8 = v18;
    v9 = v18;
    v10 = v19;
    while ( v9 != v19 )
    {
      if ( *v9 == a2 )
      {
        if ( v18 )
          goto LABEL_8;
        return 0LL;
      }
      ++v9;
    }
    v17 = 0;
    v14[0] = v4;
    v14[1] = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(a2 + 32) + 16LL));
    v14[2] = 0;
    v15 = *((_WORD *)&PenEventsDispatcherPrincipal::s_hotkeyList + 2 * v5);
    v16 = *((_BYTE *)&PenEventsDispatcherPrincipal::s_hotkeyList + 4 * v5 + 2);
    HotkeyRegistrationForwarder = ISMStatics::GetHotkeyRegistrationForwarder();
    v12 = HotkeyRegistrationForwarder::ForwardHotkeyRegistration(
            HotkeyRegistrationForwarder,
            (const struct _MIT_HOTKEY_REGISTRATION_MESSAGE *)v14);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x130,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneve"
                      "ntsdispatcherprincipal.cpp",
        (const char *)(unsigned int)v12,
        v14[0]);
    v8 = v18;
    if ( v18 )
    {
      v10 = v19;
LABEL_8:
      std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(v8, v10);
      std::_Deallocate<16>(v18, (v20 - (_QWORD)v18) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  return 0LL;
}
