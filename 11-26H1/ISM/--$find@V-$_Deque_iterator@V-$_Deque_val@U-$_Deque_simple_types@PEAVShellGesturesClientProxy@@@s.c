/*
 * XREFs of ??$find@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@PEAVShellGesturesClientProxy@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@V10@AEBQEAVShellGesturesClientProxy@@@Z @ 0x1800949E4
 * Callers:
 *     ?UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z @ 0x18007E78C (-UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z.c)
 * Callees:
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@QEBAAEAPEAVShellGesturesClientProxy@@XZ @ 0x1800961C0 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClientProxy.c)
 */

__int64 **__fastcall std::find<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,ShellGesturesClientProxy *>(
        __int64 **a1,
        __int64 **a2,
        __int64 a3)
{
  __int64 *v3; // rbx
  __int64 *v5; // rsi
  __int64 **v6; // r11
  __int64 *v7; // r10
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  __int64 **result; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a2;
  v5 = *(__int64 **)(a3 + 16);
  v6 = a1;
  v7 = a2[2];
  if ( *a2 )
    v8 = *v3;
  else
    v8 = 0LL;
  v12[0] = v8;
  while ( 1 )
  {
    v12[1] = v7;
    if ( v7 == v5 )
      break;
    v9 = (_QWORD *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>::operator*(v12);
    if ( *v9 == *v10 )
      break;
    v7 = (__int64 *)((char *)v7 + 1);
  }
  result = v6;
  *v6 = v3;
  a2[2] = v7;
  v6[1] = 0LL;
  v6[2] = v7;
  return result;
}
