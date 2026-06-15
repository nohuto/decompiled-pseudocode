/*
 * XREFs of sub_14008A8DC @ 0x14008A8DC
 * Callers:
 *     sub_140087BF0 @ 0x140087BF0 (sub_140087BF0.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14008B750 @ 0x14008B750 (sub_14008B750.c)
 *     sub_14008C6C4 @ 0x14008C6C4 (sub_14008C6C4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14008A8DC(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _DWORD *a5, __int64 a6, _DWORD *a7)
{
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // rbx
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = sub_140049338(192LL, (__int64)&unk_1400C75FC);
  v14 = v10;
  if ( v10 )
  {
    v12 = sub_14008B750(v10);
    v14 = 0LL;
    v11 = sub_14008C6C4(v12, *a2, *a3, *a4, *a5, a6, *a7);
    if ( v11 >= 0 )
    {
      v11 = sub_1400B6010(v12);
      sub_1400B6010(v12);
    }
    else if ( v12 )
    {
      sub_1400B6010(v12);
    }
  }
  else
  {
    v11 = -2147024882;
  }
  sub_1400454AC(&v14);
  return (unsigned int)v11;
}
