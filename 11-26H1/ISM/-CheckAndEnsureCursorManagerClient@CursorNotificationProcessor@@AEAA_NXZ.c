/*
 * XREFs of ?CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ @ 0x18000F318
 * Callers:
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x18000F250 (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18004274C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?IMessageSessionCloseEndpointFunction@details@wil@@YAXPEAUIMessageSession@@_K@Z @ 0x1800AC7EC (-IMessageSessionCloseEndpointFunction@details@wil@@YAXPEAUIMessageSession@@_K@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1864 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall CursorNotificationProcessor::CheckAndEnsureCursorManagerClient(CursorNotificationProcessor *this)
{
  wil::details *v2; // rcx
  int v3; // eax
  unsigned __int64 v4; // r8
  struct IMessageSession **v5; // r14
  bool v6; // bl
  wil::details *v7; // rcx
  _QWORD *v8; // rcx
  __int64 (*v10)(void); // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, const wchar_t *, __int64, struct IMessageSession **); // rdi
  int v14; // eax
  struct IMessageSession *v15; // rbx
  const char *v16; // r9
  int v17; // [rsp+20h] [rbp-28h]
  wil::details *v18; // [rsp+30h] [rbp-18h] BYREF
  struct IMessageSession *v19; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v21; // [rsp+50h] [rbp+8h] BYREF
  struct IMessageSession **v22; // [rsp+58h] [rbp+10h]

  v21 = 0LL;
  v2 = (wil::details *)*((_QWORD *)this + 2);
  v18 = 0LL;
  v19 = 0LL;
  if ( v2 )
  {
    v18 = v2;
    (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 64LL))(*(_QWORD *)this);
  v5 = (struct IMessageSession **)((char *)this + 24);
  v22 = (struct IMessageSession **)((char *)this + 24);
  if ( !*((_QWORD *)this + 3) && v3 )
  {
    v10 = *(__int64 (**)(void))(**((_QWORD **)this + 2) + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    try
    {
      v11 = v10();
      if ( v11 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xE3,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\curs"
                        "ornotificationprocessor.cpp",
          (const char *)(unsigned int)v11,
          v17);
      v12 = (__int64)v21;
      v13 = *(__int64 (__fastcall **)(__int64, const wchar_t *, __int64, struct IMessageSession **))(*v21 + 24LL);
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        &v18,
        v18);
      v14 = v13(v12, L"System\\Input\\CursorManagerEndpoint", 1LL, &v19);
      if ( v14 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xE8,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\curs"
                        "ornotificationprocessor.cpp",
          (const char *)(unsigned int)v14,
          v17);
      v15 = v19;
      v19 = 0LL;
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        &v18,
        0LL);
      *v5 = v15;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0xEC,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursor"
                      "notificationprocessor.cpp",
        v16);
      v5 = v22;
    }
  }
  v6 = *v5 != 0LL;
  if ( v19 )
    wil::details::IMessageSessionCloseEndpointFunction(v18, v19, v4);
  v19 = 0LL;
  v7 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8 + 16LL))(v8, *v8);
  }
  return v6;
}
