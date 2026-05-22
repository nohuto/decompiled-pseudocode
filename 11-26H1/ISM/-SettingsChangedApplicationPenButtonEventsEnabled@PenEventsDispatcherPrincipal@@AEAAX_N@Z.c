/*
 * XREFs of ?SettingsChangedApplicationPenButtonEventsEnabled@PenEventsDispatcherPrincipal@@AEAAX_N@Z @ 0x18019A4F8
 * Callers:
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x180199CB0 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ @ 0x18002EBC4 (-GetButtonEventsSupportedFlag@PenEventsDispatcherPrincipal@@AEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall PenEventsDispatcherPrincipal::SettingsChangedApplicationPenButtonEventsEnabled(
        PenEventsDispatcherPrincipal *this,
        char a2)
{
  char v2; // dl
  PenEventsDispatcherPrincipal *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char ButtonEventsSupportedFlag; // si
  char v7; // r8
  _QWORD *v8; // rdi
  _QWORD *i; // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 196) != a2 )
  {
    PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag(this);
    *((_BYTE *)v3 + 196) = v2;
    ButtonEventsSupportedFlag = PenEventsDispatcherPrincipal::GetButtonEventsSupportedFlag(v3);
    if ( v7 != ButtonEventsSupportedFlag )
    {
      v8 = *(_QWORD **)(v5 + 72);
      for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
      {
        LOBYTE(v4) = ButtonEventsSupportedFlag;
        v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(i[3] + 8LL) + 48LL))(i[3] + 8LL, v4);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x18F,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdi"
                 "spatcherprincipal.cpp",
            (const char *)(unsigned int)v10);
      }
    }
  }
}
