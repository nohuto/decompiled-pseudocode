/*
 * XREFs of sub_18002F1D0 @ 0x18002F1D0
 * Callers:
 *     sub_18003696C @ 0x18003696C (sub_18003696C.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18003182C @ 0x18003182C (sub_18003182C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002F1D0(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v6 = sub_18001C514(24LL);
  if ( v6 )
  {
    *(_QWORD *)v6 = *a3;
    *(_OWORD *)(v6 + 8) = *a2;
  }
  else
  {
    v6 = 0LL;
  }
  v9 = v6;
  v7 = o__beginthreadex(0LL, 0LL, sub_18002F100);
  *(_QWORD *)a1 = v7;
  if ( !v7 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x18002F27FLL);
  }
  v9 = 0LL;
  return sub_18003182C(&v9);
}
