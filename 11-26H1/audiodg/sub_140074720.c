/*
 * XREFs of sub_140074720 @ 0x140074720
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400024A4 @ 0x1400024A4 (sub_1400024A4.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 *     sub_1400732C4 @ 0x1400732C4 (sub_1400732C4.c)
 */

__int64 __fastcall sub_140074720(__int64 a1, float a2)
{
  int v2; // edx
  __int64 v4; // rdi
  __int64 v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int16 *v9; // rcx
  int v10; // eax
  __int16 v11; // dx
  __int16 v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 80);
  if ( v2 == 1 || (unsigned int)(v2 - 2) <= 1 )
  {
    v4 = a1 + 56;
    sub_1400732C4(*(_QWORD *)(a1 + 72), v2, -2147024322, 1u, a1 + 56, a2);
    v6 = (_DWORD *)sub_140006470(v5);
    if ( *v6 > 2u && sub_14002813C((__int64)v6, 256LL) )
    {
      v9 = *(__int16 **)(a1 + 72);
      v10 = *(_DWORD *)(a1 + 80);
      v15 = v4;
      v11 = *v9;
      v14 = v10;
      v13 = v11;
      sub_1400024A4(v8, (int)&unk_1400D27F0, v7, v8, (__int64)&v14, &v15, (__int64)&v13);
    }
  }
  return 0LL;
}
