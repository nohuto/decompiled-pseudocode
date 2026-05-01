/*
 * XREFs of winrt::delegate__::delegate____lambda_5379dc71073ba96e17a1dbc2c7eea796___ @ 0x1805C9840
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805CC3C0 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     _lambda_5379dc71073ba96e17a1dbc2c7eea796_::__lambda_5379dc71073ba96e17a1dbc2c7eea796_ @ 0x1805CA0A4 (_lambda_5379dc71073ba96e17a1dbc2c7eea796_--__lambda_5379dc71073ba96e17a1dbc2c7eea796_.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::delegate__::delegate____lambda_5379dc71073ba96e17a1dbc2c7eea796___(
        _QWORD *a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  _DWORD *v11; // [rsp+48h] [rbp+10h]

  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v9 = v4;
  v5 = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = 0LL;
  v10 = v5;
  v11 = operator new(0x20uLL);
  v11[2] = 1;
  v6 = v9;
  v9 = 0LL;
  *((_QWORD *)v11 + 2) = v6;
  v7 = v10;
  v10 = 0LL;
  *((_QWORD *)v11 + 3) = v7;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v11 = off_18072FF30;
  *a1 = v11;
  lambda_5379dc71073ba96e17a1dbc2c7eea796_::__lambda_5379dc71073ba96e17a1dbc2c7eea796_((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  lambda_5379dc71073ba96e17a1dbc2c7eea796_::__lambda_5379dc71073ba96e17a1dbc2c7eea796_(a2);
  return a1;
}
