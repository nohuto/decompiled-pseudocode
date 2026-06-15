/*
 * XREFs of sub_1400ABB80 @ 0x1400ABB80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140036020 @ 0x140036020 (sub_140036020.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1400ABB80(__int64 a1)
{
  __int64 v2; // rcx
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  sub_140036020(&v3, *(struct _RTL_CRITICAL_SECTION **)(a1 + 24));
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1400B6010(v2);
  *(_BYTE *)(a1 + 16) = 0;
  sub_140018FF0(&v3);
}
