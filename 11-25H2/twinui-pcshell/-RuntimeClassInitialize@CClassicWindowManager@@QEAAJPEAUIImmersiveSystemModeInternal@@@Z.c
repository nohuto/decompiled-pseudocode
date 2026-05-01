/*
 * XREFs of ?RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z @ 0x18004D15C
 * Callers:
 *     ??$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Z @ 0x18004D094 (--$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSys.c)
 * Callees:
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180027CC0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180076FF8 (--$GetActivationFactory@V-$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::RuntimeClassInitialize(
        CClassicWindowManager *this,
        struct IImmersiveSystemModeInternal *a2)
{
  __int64 result; // rax
  HWND ShellWindow; // rbx
  __int64 v6; // rcx
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-38h] BYREF
  __int64 v8; // [rsp+68h] [rbp-20h]

  result = CObjectWithThreadUseDetection::InitApartmentId((CClassicWindowManager *)((char *)this + 136));
  if ( (int)result >= 0 )
  {
    ShellWindow = GetShellWindow();
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    LOBYTE(ShellWindow) = (*(__int64 (__fastcall **)(char *, HWND, __int64, __int64, _QWORD, _DWORD, _DWORD, _QWORD))(*((_QWORD *)this + 9) + 24LL))(
                            (char *)this + 72,
                            ShellWindow,
                            1LL,
                            1LL,
                            0LL,
                            0,
                            0,
                            0LL);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    result = (_BYTE)ShellWindow == 0 ? 0x8007139F : 0;
    if ( (_BYTE)ShellWindow )
    {
      if ( *((struct IImmersiveSystemModeInternal **)this + 33) != a2 )
      {
        if ( a2 )
          (*(void (__fastcall **)(struct IImmersiveSystemModeInternal *))(*(_QWORD *)a2 + 8LL))(a2);
        v6 = *((_QWORD *)this + 33);
        *((_QWORD *)this + 33) = a2;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      v8 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Internal.Shell.Holographic.ContextIdentifier",
        0x35u,
        0x34u);
      return Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>>(
               v8,
               (char *)this + 280);
    }
  }
  return result;
}
