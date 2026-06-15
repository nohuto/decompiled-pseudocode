/*
 * XREFs of sub_140065450 @ 0x140065450
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     sub_14002F5B8 @ 0x14002F5B8 (sub_14002F5B8.c)
 *     sub_140064B44 @ 0x140064B44 (sub_140064B44.c)
 */

__int64 sub_140065450(__int64 a1, _OWORD *a2, int a3, ...)
{
  unsigned int v5; // eax
  _DWORD *v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v12; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v13[3]; // [rsp+51h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+54h] [rbp-35h] BYREF
  __int64 v15; // [rsp+58h] [rbp-31h] BYREF
  _OWORD *v16; // [rsp+60h] [rbp-29h] BYREF
  _OWORD *v17[13]; // [rsp+68h] [rbp-21h] BYREF
  char v18; // [rsp+E0h] [rbp+57h] BYREF
  char v19; // [rsp+E8h] [rbp+5Fh] BYREF
  int v20; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v21; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va; // [rsp+F8h] [rbp+6Fh]
  __int64 v23; // [rsp+100h] [rbp+77h] BYREF
  va_list va1; // [rsp+100h] [rbp+77h]
  __int64 *v25; // [rsp+108h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+108h] [rbp+7Fh]
  va_list va3; // [rsp+110h] [rbp+87h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, __int64 *);
  v20 = a3;
  v17[0] = a2;
  *v25 = 0LL;
  va_copy((va_list)&v17[1], va);
  v17[2] = &v20;
  va_copy((va_list)&v17[3], va1);
  v17[4] = (_OWORD *)(a1 - 8);
  v19 = 0;
  v17[5] = &v19;
  v17[6] = &v18;
  va_copy((va_list)&v17[7], va2);
  v18 = 0;
  v5 = sub_140064B44(v17);
  v6 = *(_DWORD **)(a1 + 208);
  v7 = v5;
  if ( *v6 > 4u && sub_14002813C((__int64)v6, 256LL) )
  {
    v12 = v18;
    v13[0] = v19;
    v14 = v7;
    v16 = a2;
    v15 = *v25;
    sub_14002F5B8(
      v8,
      byte_1400D238D,
      v9,
      v10,
      (__int64 *)&v16,
      (__int64)&v15,
      (__int64)v13,
      (__int64)&v12,
      (__int64)&v14);
  }
  return v7;
}
