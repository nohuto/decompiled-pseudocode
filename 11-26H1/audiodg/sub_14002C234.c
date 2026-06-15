/*
 * XREFs of sub_14002C234 @ 0x14002C234
 * Callers:
 *     sub_14002C1B8 @ 0x14002C1B8 (sub_14002C1B8.c)
 * Callees:
 *     sub_14002C2F0 @ 0x14002C2F0 (sub_14002C2F0.c)
 *     sub_14002C360 @ 0x14002C360 (sub_14002C360.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14002C234(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v1 = sub_140049338(104LL, &unk_1400C75FC);
  if ( !v1 )
    return 2147942414LL;
  v2 = sub_14002C2F0(v1);
  v5 = 0LL;
  v3 = sub_14002C360(v2);
  if ( v3 < 0 )
  {
    if ( v2 )
      sub_1400B6010(v2);
    sub_1400454AC(&v5);
  }
  else
  {
    v3 = sub_1400B6010(v2);
    sub_1400B6010(v2);
  }
  return (unsigned int)v3;
}
