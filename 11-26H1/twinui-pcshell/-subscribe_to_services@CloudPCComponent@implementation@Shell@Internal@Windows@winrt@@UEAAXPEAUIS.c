/*
 * XREFs of ?subscribe_to_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180643870
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        struct IServiceProvider *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  LSTATUS DWORD; // eax
  bool v7; // cl
  __int64 v8; // rax
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 13);
  v4 = v2 + 24;
  if ( !v2 )
    v4 = 40LL;
  (***(void (__fastcall ****)(_QWORD))v4)(*(_QWORD *)v4);
  v5 = v2 + 8;
  if ( !v2 )
    v5 = 24LL;
  (***(void (__fastcall ****)(_QWORD, struct IServiceProvider *))v5)(*(_QWORD *)v5, a2);
  v9 = 0;
  DWORD = SHRegGetDWORD(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\RemoteSystemIntegration",
            L"SwitcherIntegrationEnabled",
            &v9);
  v7 = DWORD == -2147024894 || DWORD >= 0 && v9 != 0;
  v8 = v2 + 234;
  if ( !v2 )
    v8 = 250LL;
  *(_BYTE *)v8 = v7;
}
