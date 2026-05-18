/*
 * XREFs of sub_18005485C @ 0x18005485C
 * Callers:
 *     sub_180055168 @ 0x180055168 (sub_180055168.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180054CA4 @ 0x180054CA4 (sub_180054CA4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005485C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = (_QWORD *)sub_18001C514(16LL);
  v7 = v6;
  if ( v6 )
  {
    *v6 = *a3;
    v6[1] = *a2;
  }
  else
  {
    v7 = 0LL;
  }
  v10 = v7;
  v8 = o__beginthreadex(0LL, 0LL, sub_180054820);
  *(_QWORD *)a1 = v8;
  if ( !v8 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x180054909LL);
  }
  v10 = 0LL;
  return sub_180054CA4(&v10);
}
