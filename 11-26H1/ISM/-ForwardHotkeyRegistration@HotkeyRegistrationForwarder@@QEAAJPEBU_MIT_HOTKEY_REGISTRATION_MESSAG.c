/*
 * XREFs of ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x18002E4CC
 * Callers:
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x18002E364 (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 *     std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x1800F3BB0 (std--_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_ea_1800F3BB0.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@AEAAPEAUHotKeyRegistrationData@@QEAU2@AEBU2@@Z @ 0x180107E58 (--$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@-$vector@UHotKeyRegistrationData@@V-$allocat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HotkeyRegistrationForwarder::ForwardHotkeyRegistration(
        HotkeyRegistrationForwarder *this,
        const struct _MIT_HOTKEY_REGISTRATION_MESSAGE *a2)
{
  _WORD *v3; // r8
  char *v4; // rcx
  _WORD *i; // rbx
  int v6; // eax
  __int64 v7; // r8
  const char *v8; // r9
  __int16 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  int v20; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = (_WORD *)*((_QWORD *)this + 3);
  v4 = (char *)this + 16;
  for ( i = *(_WORD **)v4; i != v3; i += 6 )
  {
    if ( *(_QWORD *)((char *)a2 + 4) == *(_QWORD *)i
      && *((unsigned __int8 *)a2 + 14) == i[5]
      && ((*((_BYTE *)a2 + 12) ^ *((_BYTE *)i + 8)) & 0xF) == 0 )
    {
      break;
    }
  }
  if ( *(_DWORD *)a2 )
  {
    if ( i == v3 )
    {
      try
      {
        v6 = *((_DWORD *)a2 + 1);
        LODWORD(v19) = v6;
        v7 = *((unsigned int *)a2 + 2);
        HIDWORD(v19) = *((_DWORD *)a2 + 2);
        v8 = (const char *)*((unsigned __int16 *)a2 + 6);
        LOWORD(v20) = *((_WORD *)a2 + 6);
        v9 = *((unsigned __int8 *)a2 + 14);
        HIWORD(v20) = v9;
        v10 = *((_QWORD *)v4 + 1);
        if ( v10 == *((_QWORD *)v4 + 2) )
        {
          std::vector<HotKeyRegistrationData>::_Emplace_reallocate<HotKeyRegistrationData const &>(v4, v10, &v19);
        }
        else
        {
          *(_DWORD *)v10 = v6;
          *(_DWORD *)(v10 + 4) = v7;
          *(_WORD *)(v10 + 8) = (_WORD)v8;
          *(_WORD *)(v10 + 10) = v9;
          *((_QWORD *)v4 + 1) += 12LL;
        }
        v11 = *((_QWORD *)this + 6);
        if ( v11 )
        {
          v17 = v19;
          v18 = v20;
          LOBYTE(v7) = 1;
          v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v11 + 488LL))(v11, &v17, v7);
          if ( v12 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x4B,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregi"
                            "strationforwarder.cpp",
              (const char *)(unsigned int)v12,
              v16);
        }
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x4E,
                               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforw"
                                             "arder\\hotkeyregistrationforwarder.cpp",
                               v8);
      }
    }
  }
  else if ( i != v3 )
  {
    v13 = *((_QWORD *)this + 6);
    if ( v13 )
    {
      v17 = *(_QWORD *)i;
      v18 = *((_DWORD *)i + 2);
      v14 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v13 + 488LL))(v13, &v17, 0LL);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x58,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistra"
                        "tionforwarder.cpp",
          (const char *)(unsigned int)v14,
          v16);
    }
    std::_Copy_memmove<enum _Button *,enum _Button *>(i + 6, *((_QWORD *)this + 3), i);
    *((_QWORD *)this + 3) -= 12LL;
  }
  return 0LL;
}
