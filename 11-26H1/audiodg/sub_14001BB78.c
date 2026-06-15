/*
 * XREFs of sub_14001BB78 @ 0x14001BB78
 * Callers:
 *     sub_14001AD30 @ 0x14001AD30 (sub_14001AD30.c)
 *     sub_140079510 @ 0x140079510 (sub_140079510.c)
 *     sub_1400796FC @ 0x1400796FC (sub_1400796FC.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14007845C @ 0x14007845C (sub_14007845C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14001BB78(__int64 a1, __int64 *a2)
{
  int ActivationFactory; // ebx
  HRESULT v4; // eax
  HRESULT v5; // eax
  HRESULT v6; // eax
  HRESULT v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+48h] [rbp-B8h]
  __int128 v18; // [rsp+58h] [rbp-A8h]
  __int128 v19; // [rsp+68h] [rbp-98h]
  __int128 v20; // [rsp+78h] [rbp-88h]
  __int128 v21; // [rsp+88h] [rbp-78h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING string; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING_HEADER v24; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING v25; // [rsp+D8h] [rbp-28h] BYREF
  HSTRING_HEADER v26; // [rsp+E0h] [rbp-20h] BYREF
  HSTRING v27; // [rsp+F8h] [rbp-8h] BYREF
  HSTRING_HEADER v28; // [rsp+100h] [rbp+0h] BYREF
  HSTRING v29; // [rsp+118h] [rbp+18h] BYREF

  string = 0LL;
  v4 = WindowsCreateStringReference(
         L"Windows.Foundation.Collections.IVector`1<Windows.Media.Devices.AudioDeviceModule>",
         0x51u,
         &hstringHeader,
         &string);
  if ( v4 < 0 )
  {
    RaiseException(v4, 1u, 0, 0LL);
    __debugbreak();
    goto LABEL_16;
  }
  v25 = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Devices.AudioDeviceModule>",
         0x55u,
         &v24,
         &v25);
  if ( v5 < 0 )
  {
LABEL_16:
    RaiseException(v5, 1u, 0, 0LL);
    __debugbreak();
    goto LABEL_17;
  }
  v27 = 0LL;
  v6 = WindowsCreateStringReference(
         L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.AudioDeviceModule>",
         0x53u,
         &v26,
         &v27);
  if ( v6 < 0 )
  {
LABEL_17:
    RaiseException(v6, 1u, 0, 0LL);
    __debugbreak();
    goto LABEL_18;
  }
  v16[0] = string;
  v16[1] = v25;
  v16[2] = v27;
  v17 = xmmword_1400C5CC0;
  v18 = xmmword_1400C5B78;
  v19 = xmmword_1400C5CD0;
  v20 = xmmword_1400C5B88;
  v21 = xmmword_1400C5CB0;
  v14 = 0LL;
  sub_1400125D4(&v14);
  v29 = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Foundation.Collections.Detail.Vector", 0x2Cu, &v28, &v29);
  if ( v7 < 0 )
  {
LABEL_18:
    RaiseException(v7, 1u, 0, 0LL);
    __debugbreak();
    goto LABEL_19;
  }
  ActivationFactory = RoGetActivationFactory(v29, &unk_1400C5D88, &v14);
  if ( ActivationFactory < 0 )
  {
LABEL_19:
    sub_1400125D4(&v14);
    return (unsigned int)ActivationFactory;
  }
  v15 = 0LL;
  v8 = v14;
  sub_1400125D4(&v15);
  ActivationFactory = sub_14007845C(v8, v16, &v15);
  if ( ActivationFactory < 0 )
  {
    v9 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      sub_1400B6010(v9);
    }
    v10 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      sub_1400B6010(v10);
    }
    return (unsigned int)ActivationFactory;
  }
  v12 = v15;
  v15 = 0LL;
  *a2 = v12;
  v13 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    sub_1400B6010(v13);
  }
  return 0LL;
}
