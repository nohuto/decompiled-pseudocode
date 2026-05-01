/*
 * XREFs of ?v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z @ 0x18004B6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x18004C838 (-_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ.c)
 *     ??1CDelayIAMOperations@@QEAA@XZ @ 0x18004CA40 (--1CDelayIAMOperations@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManager::v_ShutdownServices(CApplicationManager *this, struct IProfferService *a2)
{
  _QWORD *v3; // rdi
  unsigned int i; // ebx
  HWND v5; // rax
  void *v6; // rbx

  v3 = &unk_180896238;
  for ( i = 0; i < 0xA; ++i )
  {
    if ( *v3 )
    {
      (*(void (__fastcall **)(_QWORD, struct IProfferService *))(*(_QWORD *)*v3 + 32LL))(*v3, a2);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&unk_180896238 + 2 * i);
    }
    v3 += 2;
  }
  CApplicationManager::_ShutdownServiceProviders((CApplicationManager *)((char *)this - 88));
  v5 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 83) + 24LL))(*((_QWORD *)this + 83));
  RemovePropW(v5, L"AllowConsentToStealFocus");
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 83);
  v6 = (void *)*((_QWORD *)this + 89);
  if ( v6 )
  {
    CDelayIAMOperations::~CDelayIAMOperations(*((CDelayIAMOperations **)this + 89));
    operator delete(v6, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)this + 89) = 0LL;
  return 0LL;
}
