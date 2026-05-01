/*
 * XREFs of ?WorkAreaMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x1801B5B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1801B5C6C (-GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::WorkAreaMayHaveChanged(XamlLauncher *this, HMONITOR a2)
{
  __int64 v4; // rcx
  ImmersiveMonitorHelper *v6; // rbx
  int Monitor; // eax
  int v8; // ebx
  struct IImmersiveMonitor *v9; // rcx
  struct IImmersiveMonitor *v10; // rcx
  struct IImmersiveMonitor *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IImmersiveMonitor *v13; // [rsp+40h] [rbp+20h] BYREF
  HMONITOR v14; // [rsp+50h] [rbp+30h] BYREF

  v4 = *((_QWORD *)this + 43);
  if ( !v4 )
    return 2147943568LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4)
    && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 144LL))(*((_QWORD *)this + 43)) )
  {
    return 0LL;
  }
  v13 = 0LL;
  v6 = (ImmersiveMonitorHelper *)*((_QWORD *)this + 21);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  Monitor = ImmersiveMonitorHelper::GetMonitor(v6, &v13);
  v8 = Monitor;
  if ( Monitor < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x221,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)Monitor);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    v14 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, HMONITOR *))(*(_QWORD *)v13 + 40LL))(v13, &v14);
    if ( v8 < 0 )
    {
      v11 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    else
    {
      if ( a2 != v14
        || (v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 104LL))(*((_QWORD *)this + 17)), v8 >= 0) )
      {
        v10 = v13;
        if ( v13 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
        }
        return 0LL;
      }
      v9 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  return (unsigned int)v8;
}
