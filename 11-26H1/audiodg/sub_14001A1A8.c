/*
 * XREFs of sub_14001A1A8 @ 0x14001A1A8
 * Callers:
 *     sub_140019E50 @ 0x140019E50 (sub_140019E50.c)
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_14001BA74 @ 0x14001BA74 (sub_14001BA74.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14007845C @ 0x14007845C (sub_14007845C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14001A1A8(__int64 a1, __int64 *a2)
{
  HRESULT v3; // eax
  int ActivationFactory; // ebx
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v10[3]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v12; // [rsp+58h] [rbp-A8h]
  __int128 v13; // [rsp+68h] [rbp-98h]
  __int128 v14; // [rsp+78h] [rbp-88h]
  __int128 v15; // [rsp+88h] [rbp-78h]
  __int128 v16; // [rsp+98h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING string; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING_HEADER v19; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v20; // [rsp+E8h] [rbp-18h]
  HSTRING_HEADER v21; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v22; // [rsp+108h] [rbp+8h]
  HSTRING_HEADER v23; // [rsp+110h] [rbp+10h] BYREF
  __int64 v24; // [rsp+128h] [rbp+28h]

  sub_14001BA74(&v19);
  sub_14001BA74(&v21);
  v10[1] = (__int64)L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.Streams.IBuffer>";
  sub_14001BA74(&v23);
  v11[0] = v20;
  v11[1] = v22;
  v11[2] = v24;
  v12 = xmmword_1400C64C0;
  v13 = xmmword_1400C64D0;
  v14 = xmmword_1400C64B0;
  v15 = xmmword_1400C6588;
  v16 = xmmword_1400C6578;
  v9 = 0LL;
  sub_1400125D4(&v9);
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Foundation.Collections.Detail.Vector", 0x2Cu, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    RaiseException(v3, 1u, 0, 0LL);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &unk_1400C5D88, &v9);
  if ( ActivationFactory < 0 )
  {
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      sub_1400B6010(v5);
    }
    return (unsigned int)ActivationFactory;
  }
  v10[0] = 0LL;
  v7 = v9;
  sub_1400125D4(v10);
  ActivationFactory = sub_14007845C(v7, v11, v10);
  if ( ActivationFactory < 0 )
  {
    sub_1400125D4(v10);
    sub_1400125D4(&v9);
    return (unsigned int)ActivationFactory;
  }
  v8 = v10[0];
  v10[0] = 0LL;
  *a2 = v8;
  sub_1400125D4(v10);
  sub_1400125D4(&v9);
  return 0LL;
}
