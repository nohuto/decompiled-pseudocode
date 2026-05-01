/*
 * XREFs of ?PublishVisibilityToMonitorManager@ImmersiveMonitorHelper@@QEAAX_N@Z @ 0x180197430
 * Callers:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180197398 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ImmersiveMonitorHelper::PublishVisibilityToMonitorManager(
        ImmersiveMonitorHelper *this,
        unsigned __int8 a2)
{
  unsigned int v2; // esi
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v6 = 0LL;
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 9);
  v4 = **v3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  if ( v4(v3, &GUID_ad23ddfb_50f1_4f9f_ba1f_dda292ae0b6a, &v6) >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, v2);
  v5 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
