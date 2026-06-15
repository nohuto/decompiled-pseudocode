/*
 * XREFs of sub_14001B838 @ 0x14001B838
 * Callers:
 *     sub_14001B584 @ 0x14001B584 (sub_14001B584.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_14001BA74 @ 0x14001BA74 (sub_14001BA74.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14007845C @ 0x14007845C (sub_14007845C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14001B838(__int64 a1, __int64 *a2)
{
  HRESULT v3; // eax
  int ActivationFactory; // ebx
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v14; // [rsp+58h] [rbp-A8h]
  __int128 v15; // [rsp+68h] [rbp-98h]
  __int128 v16; // [rsp+78h] [rbp-88h]
  __int128 v17; // [rsp+88h] [rbp-78h]
  __int128 v18; // [rsp+98h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING string; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING_HEADER v21; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v22; // [rsp+E8h] [rbp-18h]
  HSTRING_HEADER v23; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v24; // [rsp+108h] [rbp+8h]
  HSTRING_HEADER v25; // [rsp+110h] [rbp+10h] BYREF
  __int64 v26; // [rsp+128h] [rbp+28h]

  sub_14001BA74(&v21);
  sub_14001BA74(&v23);
  v12[1] = (__int64)L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Devices.Internal.AudioDeviceBrokerDevice>";
  sub_14001BA74(&v25);
  v13[0] = v22;
  v13[1] = v24;
  v13[2] = v26;
  v14 = xmmword_1400C59D8;
  v15 = xmmword_1400C5F58;
  v16 = xmmword_1400C59E8;
  v17 = xmmword_1400C5E80;
  v18 = xmmword_1400C5E70;
  v11 = 0LL;
  sub_1400125D4(&v11);
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Foundation.Collections.Detail.Vector", 0x2Cu, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    RaiseException(v3, 1u, 0, 0LL);
    __debugbreak();
  }
  else
  {
    ActivationFactory = RoGetActivationFactory(string, &unk_1400C5D88, &v11);
    if ( ActivationFactory < 0 )
    {
      v5 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        sub_1400B6010(v5);
      }
      return (unsigned int)ActivationFactory;
    }
    v12[0] = 0LL;
    v7 = v11;
    sub_1400125D4(v12);
    ActivationFactory = sub_14007845C(v7, v13, v12);
    if ( ActivationFactory < 0 )
    {
      v8 = v12[0];
      if ( v12[0] )
      {
        v12[0] = 0LL;
        sub_1400B6010(v8);
      }
      v9 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        sub_1400B6010(v9);
      }
      return (unsigned int)ActivationFactory;
    }
  }
  v10 = v12[0];
  v12[0] = 0LL;
  *a2 = v10;
  sub_1400125D4(v12);
  sub_1400125D4(&v11);
  return 0LL;
}
