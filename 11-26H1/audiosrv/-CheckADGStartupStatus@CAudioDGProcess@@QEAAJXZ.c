/*
 * XREFs of ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180025620
 * Callers:
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18001F658 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180025270 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ?AudioDGGetStartupStatus_RPC_WithWait@@YAJPEAX@Z @ 0x18002571C (-AudioDGGetStartupStatus_RPC_WithWait@@YAJPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007F9E0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details@wil@@YAX0@ZU-$i.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::CheckADGStartupStatus(HANDLE *this)
{
  int ADGProcessBindingHandle; // eax
  signed int v3; // ebx
  DWORD v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RPC_BINDING_HANDLE ExitCode; // [rsp+38h] [rbp+10h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+40h] [rbp+18h] BYREF

  Binding = 0LL;
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&Binding);
  v3 = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle >= 0 )
  {
    while ( 1 )
    {
      v3 = AudioDGGetStartupStatus_RPC_WithWait(Binding);
      if ( v3 >= 0 )
        break;
      v4 = WaitForSingleObjectEx(this[11], 0, 0);
      if ( v4 != 258 )
      {
        if ( !v4 )
        {
          LODWORD(ExitCode) = 0;
          v5 = GetExitCodeProcess(this[11], (LPDWORD)&ExitCode) ? (int)ExitCode : GetLastError();
          if ( v5 != 259 )
          {
            if ( v5 > 0 )
              v3 = (unsigned __int16)v5 | 0x80070000;
            else
              v3 = v5;
          }
        }
        break;
      }
    }
    if ( Binding )
    {
      ExitCode = Binding;
      RpcBindingFree(&ExitCode);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)ADGProcessBindingHandle);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Binding);
  }
  return (unsigned int)v3;
}
