/*
 * XREFs of ?CompleteInitialization@CFallbackWindow@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveShellHookService@@@Z @ 0x18020CDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18020CEB0 (-_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFallbackWindow::CompleteInitialization(
        CFallbackWindow *this,
        struct IImmersiveMonitorManager *a2,
        struct IImmersiveShellHookService *a3)
{
  __int64 (__fastcall *v6)(struct IImmersiveMonitorManager *, struct IImmersiveMonitor **); // rbx
  struct IImmersiveMonitor **v7; // r14
  int v8; // ebx
  __int64 (__fastcall *v9)(struct IImmersiveMonitorManager *, GUID *, __int64 *); // rbx
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(__int64 (__fastcall **)(struct IImmersiveMonitorManager *, struct IImmersiveMonitor **))(*(_QWORD *)a2 + 64LL);
  v7 = (struct IImmersiveMonitor **)((char *)this + 48);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  v8 = v6(a2, v7);
  if ( v8 >= 0 )
  {
    v12 = 0LL;
    v9 = **(__int64 (__fastcall ***)(struct IImmersiveMonitorManager *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    v8 = v9(a2, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, &v12);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v12 + 24LL))(
             v12,
             ((unsigned __int64)this + 8) & -(__int64)(this != (CFallbackWindow *)72),
             (char *)this + 40);
      if ( v8 >= 0 )
      {
        CFallbackWindow::_SizeWindow((CFallbackWindow *)((char *)this - 72), *v7);
        (*(void (__fastcall **)(char *, struct IImmersiveShellHookService *))(*((_QWORD *)this - 6) + 32LL))(
          (char *)this - 48,
          a3);
      }
    }
    v10 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return (unsigned int)v8;
}
