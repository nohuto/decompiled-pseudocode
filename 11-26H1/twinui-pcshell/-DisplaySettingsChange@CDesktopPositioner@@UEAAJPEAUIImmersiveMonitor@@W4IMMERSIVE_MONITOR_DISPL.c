/*
 * XREFs of ?DisplaySettingsChange@CDesktopPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801EDCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  int v16; // [rsp+38h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( *(_DWORD *)(a1 + 252) && (a3 & 0x38) != 0 )
  {
    v15 = 0LL;
    v5 = *(__int64 **)(a1 + 176);
    v6 = *v5;
    v15 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v6 + 32))(v5, 1LL, &v15);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34D,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v7);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      return v8;
    }
    v16 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 48LL))(a2, &v16);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x350,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v10);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
      return v8;
    }
    if ( v16 )
    {
      v18 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v18);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x356,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v11);
      v17 = v18;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64))(*(_QWORD *)v15 + 56LL))(
              v15,
              a2,
              &v17,
              1LL);
      v13 = retaddr;
      if ( v12 >= 0 )
        goto LABEL_18;
      v14 = 855LL;
    }
    else
    {
      if ( (a3 & 0x20) == 0
        || (v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 64LL))(v15, a2), v13 = retaddr,
                                                                                                  v12 >= 0) )
      {
LABEL_18:
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        return 0LL;
      }
      v14 = 860LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v13,
      (void *)v14,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_18;
  }
  return 0LL;
}
