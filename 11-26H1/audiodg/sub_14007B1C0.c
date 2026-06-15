/*
 * XREFs of sub_14007B1C0 @ 0x14007B1C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140069574 @ 0x140069574 (sub_140069574.c)
 *     sub_140076538 @ 0x140076538 (sub_140076538.c)
 */

__int64 sub_14007B1C0(__int64 a1, ...)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  _QWORD v4[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v5[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v6; // [rsp+78h] [rbp+18h] BYREF
  va_list va; // [rsp+78h] [rbp+18h]
  _DWORD *v8; // [rsp+80h] [rbp+20h] BYREF
  va_list va1; // [rsp+80h] [rbp+20h]
  _BYTE *v10; // [rsp+88h] [rbp+28h] BYREF
  va_list va2; // [rsp+88h] [rbp+28h]
  va_list va3; // [rsp+90h] [rbp+30h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v6 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v8 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v10 = va_arg(va3, _BYTE *);
  *v8 = 0;
  *v10 = 0;
  va_copy((va_list)v4, va1);
  va_copy((va_list)&v4[1], va2);
  v1 = sub_140069574(v5, a1, (__int64)va, (__int64)va1, (__int64)va2);
  return sub_140076538((unsigned int *)(v2 + 48), *(_QWORD *)(v2 + 40), (__int64)v1, (__int64)v4);
}
