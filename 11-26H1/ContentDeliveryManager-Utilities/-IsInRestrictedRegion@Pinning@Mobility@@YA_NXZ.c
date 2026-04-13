/*
 * XREFs of ?IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ @ 0x1800340E4
 * Callers:
 *     ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002B40C (--R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ.c)
 * Callees:
 *     memcmp_0 @ 0x180021E99 (memcmp_0.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall Mobility::Pinning::IsInRestrictedRegion(Mobility::Pinning *this)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, HSTRING *); // rdi
  int v4; // eax
  const WCHAR *StringRawBuffer; // rax
  bool v6; // bl
  BOOL bIgnoreCase; // [rsp+20h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Globalization.GeographicRegion",
    0x27u,
    0x26u);
  v9 = 0LL;
  v11 = 0LL;
  v1 = RoActivateInstance(v13, &v11);
  if ( v1 >= 0 )
  {
    if ( !memcmp_0(&GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL) )
    {
      v2 = v11;
      v9 = v11;
      goto LABEL_6;
    }
    v1 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
           v11,
           &GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903,
           &v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v2 = v9;
LABEL_6:
  if ( v1 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
      (const char *)(unsigned int)v1,
      bIgnoreCase);
  string = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v2 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v4 = v3(v2, &string);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x42,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\MobilityPinning.h",
      (const char *)(unsigned int)v4,
      bIgnoreCase);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v6 = CompareStringOrdinal(StringRawBuffer, -1, L"CN", -1, 1) == 2;
  WindowsDeleteString(string);
  string = 0LL;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v9);
  return v6;
}
