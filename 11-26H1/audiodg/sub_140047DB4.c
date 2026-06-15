/*
 * XREFs of sub_140047DB4 @ 0x140047DB4
 * Callers:
 *     sub_1400041F8 @ 0x1400041F8 (sub_1400041F8.c)
 *     sub_140040120 @ 0x140040120 (sub_140040120.c)
 *     sub_1400562A0 @ 0x1400562A0 (sub_1400562A0.c)
 *     sub_14006E240 @ 0x14006E240 (sub_14006E240.c)
 *     sub_14006E9C0 @ 0x14006E9C0 (sub_14006E9C0.c)
 * Callees:
 *     sub_140009934 @ 0x140009934 (sub_140009934.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14002644C @ 0x14002644C (sub_14002644C.c)
 *     sub_1400370EC @ 0x1400370EC (sub_1400370EC.c)
 */

__int64 __fastcall sub_140047DB4(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 212) )
  {
    v3 = sub_140009AA8((_QWORD *)(a1 + 64), a2);
    v5 = *(_QWORD **)v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 16LL) == 2LL )
      v6 = sub_1400370EC((__int64)v5, v4);
    else
      v6 = sub_140009AA8(v5, v4);
    return *(_QWORD *)v6;
  }
  else if ( (_BYTE)a2 || (v8 = 0LL, sub_14002644C(a1, (__int64)&unk_1400C6968, 0LL, &v8, 0LL), (result = v8) == 0) )
  {
    v8 = 0LL;
    sub_14002644C(a1, (__int64)&unk_1400C6A70, 0LL, &v8, 0LL);
    result = v8;
    if ( !v8 )
      return sub_140009934(a1, 1);
  }
  return result;
}
