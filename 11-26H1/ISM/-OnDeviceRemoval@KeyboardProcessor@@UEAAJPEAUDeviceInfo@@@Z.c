/*
 * XREFs of ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007EF50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Move_unchecked@PEAUTargetingInfo@KeyboardProcessor@@PEAU12@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@PEAU12@00@Z @ 0x180012144 (--$_Move_unchecked@PEAUTargetingInfo@KeyboardProcessor@@PEAU12@@std@@YAPEAUTargetingInfo@Keyboar.c)
 *     ??1TargetingInfo@KeyboardProcessor@@QEAA@XZ @ 0x180013168 (--1TargetingInfo@KeyboardProcessor@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546FC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     memcpy_s_0 @ 0x18005CC60 (memcpy_s_0.c)
 *     ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x18007F14C (-InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?GetUnhandedVirtualKey@KeyboardInputInfo@@QEAAGXZ @ 0x18019B7F8 (-GetUnhandedVirtualKey@KeyboardInputInfo@@QEAAGXZ.c)
 *     ?OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z @ 0x18019B840 (-OnKeyPress@KeyboardProcessorTelemetry@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardProcessor::OnDeviceRemoval(KeyboardProcessor *this, struct DeviceInfo *a2)
{
  int v3; // eax
  bool v4; // dl
  unsigned int v5; // ebx
  __int64 v7; // rbx
  __int64 v8; // rdi
  const char *v9; // r9
  unsigned __int16 UnhandedVirtualKey; // ax
  const char *v11; // r9
  int v12; // eax
  unsigned int v13; // edi
  int v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE Destination[256]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v3 = KeyboardProcessor::InvalidateKeyboardModifiers(this);
  v5 = v3;
  if ( v3 >= 0 )
  {
    KeyboardProcessorTelemetry::OnKeyPress((KeyboardProcessor *)((char *)this + 40), v4);
    memset_0(Destination, 0, sizeof(Destination));
    AcquireSRWLockExclusive(&KeyboardProcessor::s_keyStateSnapshotLock);
    *(_QWORD *)v14 = &KeyboardProcessor::s_keyStateSnapshotLock;
    memcpy_s_0(Destination, 0x100uLL, &KeyboardProcessor::s_keyStateSnapshot, 0x100uLL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)v14);
    v7 = *((_QWORD *)this + 8);
    while ( v7 != *((_QWORD *)this + 9) )
    {
      v8 = *(_QWORD *)(v7 + 376);
      *(_QWORD *)v14 = v8;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)v14);
      v9 = (const char *)*(unsigned __int16 *)(v7 + 60);
      if ( (unsigned __int16)v9 >= 0x100u )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xC9,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
          v9);
      *(_WORD *)(v7 + 94) &= 1u;
      Destination[(_QWORD)v9] &= ~0x80u;
      UnhandedVirtualKey = KeyboardInputInfo::GetUnhandedVirtualKey((KeyboardInputInfo *)v7);
      if ( UnhandedVirtualKey >= 0x100u )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xD2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
          v11);
      if ( UnhandedVirtualKey != (_WORD)v11 )
        Destination[UnhandedVirtualKey] &= ~0x80u;
      memcpy_s_0((void *const)(v7 + 96), 0x100uLL, Destination, 0x100uLL);
      if ( v8 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, v7);
        v13 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xDF,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
            (const char *)(unsigned int)v12,
            v14[0]);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v14);
          return v13;
        }
      }
      std::_Move_unchecked<KeyboardProcessor::TargetingInfo *,KeyboardProcessor::TargetingInfo *>(
        v7 + 384,
        *((_QWORD *)this + 9),
        v7);
      KeyboardProcessor::TargetingInfo::~TargetingInfo((KeyboardProcessor::TargetingInfo *)(*((_QWORD *)this + 9) - 384LL));
      *((_QWORD *)this + 9) -= 384LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v14);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v3,
      v14[0]);
    return v5;
  }
}
