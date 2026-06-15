/*
 * XREFs of sub_140051EB0 @ 0x140051EB0
 * Callers:
 *     sub_140046A6C @ 0x140046A6C (sub_140046A6C.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_140052838 @ 0x140052838 (sub_140052838.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_140051EB0(__int64 *a1)
{
  void *v2; // rax
  void *v3; // rdi
  __int64 v4; // rdi
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (void *)sub_140049338(104LL, (__int64)&unk_1400C75FC);
  v3 = v2;
  v6 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x68uLL);
    v4 = sub_140052838(v3);
    if ( *a1 )
      sub_1400B6010(*a1);
    *a1 = v4;
    v6 = 0LL;
  }
  sub_1400454AC((__int64 *)&v6);
  return a1;
}
