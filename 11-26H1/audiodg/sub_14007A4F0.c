/*
 * XREFs of sub_14007A4F0 @ 0x14007A4F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400768B4 @ 0x1400768B4 (sub_1400768B4.c)
 *     sub_140077360 @ 0x140077360 (sub_140077360.c)
 */

__int64 sub_14007A4F0(__int64 a1, unsigned int a2, ...)
{
  __int64 v2; // r8
  __int64 *v3; // rax
  __int64 v4; // r10
  _QWORD v6[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v7[6]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v8; // [rsp+88h] [rbp+18h] BYREF
  __int64 v9; // [rsp+90h] [rbp+20h] BYREF
  va_list va; // [rsp+90h] [rbp+20h]
  _DWORD *v11; // [rsp+98h] [rbp+28h] BYREF
  va_list va1; // [rsp+98h] [rbp+28h]
  va_list va2; // [rsp+A0h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _DWORD *);
  v8 = a2;
  v2 = 0LL;
  for ( *v11 = 0; (unsigned int)v2 < v8; v2 = (unsigned int)(v2 + 1) )
    *(_QWORD *)(v9 + 8 * v2) = 0LL;
  va_copy((va_list)v6, va1);
  va_copy((va_list)&v6[1], va);
  v3 = sub_140077360(v7, a1, (__int64)&v8, (__int64)va, (__int64)va1, (__int64)v6);
  return sub_1400768B4((unsigned int *)(v4 + 48), *(_QWORD *)(v4 + 32), v3, (__int64)v6);
}
