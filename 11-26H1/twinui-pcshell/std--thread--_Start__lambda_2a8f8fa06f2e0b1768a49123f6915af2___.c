/*
 * XREFs of std::thread::_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___ @ 0x1802A3B1C
 * Callers:
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800FA334 (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::thread::_Start__lambda_2a8f8fa06f2e0b1768a49123f6915af2___(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r9
  __int64 v5; // rax
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-18h]

  v4 = operator new(0x28uLL);
  *v4 = 0LL;
  v4[1] = 0LL;
  *v4 = *a2;
  v4[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v4[2] = a2[2];
  v5 = a2[3];
  a2[3] = 0LL;
  v4[3] = v5;
  v4[4] = a2[4];
  v7 = 0;
  result = _o__beginthreadex(
             0LL,
             0LL,
             std::thread::_Invoke_std::tuple__lambda_2a8f8fa06f2e0b1768a49123f6915af2____0_,
             v4,
             v7,
             a1 + 8);
  *(_QWORD *)a1 = result;
  if ( !result )
  {
    *(_DWORD *)(a1 + 8) = 0;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x1802A3BDELL);
  }
  return result;
}
