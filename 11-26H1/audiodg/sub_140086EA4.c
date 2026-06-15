/*
 * XREFs of sub_140086EA4 @ 0x140086EA4
 * Callers:
 *     sub_14008670C @ 0x14008670C (sub_14008670C.c)
 * Callees:
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400871AC @ 0x1400871AC (sub_1400871AC.c)
 *     sub_1400888A0 @ 0x1400888A0 (sub_1400888A0.c)
 *     sub_140088D3C @ 0x140088D3C (sub_140088D3C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140086EA4(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = sub_140049338(88LL, (__int64)&unk_1400C75FC);
  v11 = v6;
  if ( v6 )
  {
    v8 = sub_1400871AC(v6);
    v12 = v8;
    v11 = 0LL;
    v7 = sub_140088D3C(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        sub_140017CB0((volatile signed __int32 *)(v8 + 60));
      *a1 = v8;
      if ( v8 )
        sub_1400888A0(v8, v9);
      v7 = 0;
    }
    else if ( v8 )
    {
      sub_1400888A0(v8, v9);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  sub_1400454AC(&v11);
  return (unsigned int)v7;
}
