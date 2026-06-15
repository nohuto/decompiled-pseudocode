/*
 * XREFs of sub_140089A7C @ 0x140089A7C
 * Callers:
 *     sub_1400878E0 @ 0x1400878E0 (sub_1400878E0.c)
 *     sub_14008BBF0 @ 0x14008BBF0 (sub_14008BBF0.c)
 *     sub_14008C6C4 @ 0x14008C6C4 (sub_14008C6C4.c)
 *     sub_140093730 @ 0x140093730 (sub_140093730.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400892B4 @ 0x1400892B4 (sub_1400892B4.c)
 */

__int64 sub_140089A7C(__int64 *a1, ...)
{
  int v1; // eax
  unsigned int v2; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF
  va_list va; // [rsp+58h] [rbp+10h]
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  va_list va1; // [rsp+60h] [rbp+18h]
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va2; // [rsp+68h] [rbp+20h]
  __int64 v11; // [rsp+70h] [rbp+28h] BYREF
  va_list va3; // [rsp+70h] [rbp+28h]
  __int64 v13; // [rsp+78h] [rbp+30h] BYREF
  va_list va4; // [rsp+78h] [rbp+30h]
  __int64 v15; // [rsp+80h] [rbp+38h] BYREF
  va_list va5; // [rsp+80h] [rbp+38h]
  va_list va6; // [rsp+88h] [rbp+40h] BYREF

  va_start(va6, a1);
  va_start(va5, a1);
  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v5 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v7 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v9 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v11 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v13 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v15 = va_arg(va6, _QWORD);
  v1 = sub_1400892B4(
         a1,
         (__int64 *)va,
         (__int64 *)va1,
         (__int64 *)va2,
         (__int64 *)va3,
         (__int64 *)va4,
         (__int64 *)va5,
         (int *)va6);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  sub_14000C2A8(
    (int)retaddr,
    63,
    (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspdevicegraphbuffer.cpp",
    v1);
  return v2;
}
