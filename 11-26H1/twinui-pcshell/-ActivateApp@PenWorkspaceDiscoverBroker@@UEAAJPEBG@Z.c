/*
 * XREFs of ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x1803E7DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73_____lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___ @ 0x1803E70E4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8c2af6ae8b3b1.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180679928 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspaceDiscoverBroker::ActivateApp(
        PenWorkspaceDiscoverBroker *this,
        const unsigned __int16 *a2)
{
  int IsShellExperience; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  volatile signed __int32 **v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rcx
  DWORD CurrentThreadId; // eax
  int v13; // edi
  __int64 v15; // [rsp+38h] [rbp-9h] BYREF
  __int64 v16; // [rsp+40h] [rbp-1h]
  __int64 v17; // [rsp+48h] [rbp+7h]
  __int64 v18[3]; // [rsp+50h] [rbp+Fh] BYREF
  char v19; // [rsp+68h] [rbp+27h]
  _QWORD v20[3]; // [rsp+70h] [rbp+2Fh] BYREF
  char v21; // [rsp+88h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]
  volatile signed __int32 *v23; // [rsp+B8h] [rbp+77h] BYREF

  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(this);
  v4 = IsShellExperience;
  if ( IsShellExperience >= 0 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)&v15,
           (__int64)a2,
           0xFFFFFFFFFFFFFFFFuLL);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v6 = v16;
      v7 = v17;
      v8 = v15;
      v15 = 0LL;
      v17 = 0LL;
      v16 = 0LL;
      v18[1] = v6;
      v18[2] = v7;
      memset(v20, 0, sizeof(v20));
      v18[0] = v8;
      v19 = 0;
      v21 = 1;
      v9 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73_____lambda_8c2af6ae8b3b102e9a49aa4c99ffbc73___(
             &v23,
             v18);
      v10 = *v9;
      *v9 = 0LL;
      v11 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v11);
      }
      CurrentThreadId = GetCurrentThreadId();
      v13 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId);
      if ( v10 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v18);
      if ( v13 >= 0 )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v20);
        v4 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x97,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
          (const char *)(unsigned int)v13);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v20);
        v4 = v13;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x90,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v5);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)IsShellExperience);
  }
  return v4;
}
