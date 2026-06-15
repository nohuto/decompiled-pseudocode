/*
 * XREFs of sub_1400AC4A0 @ 0x1400AC4A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140036020 @ 0x140036020 (sub_140036020.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1400AC4A0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  sub_140036020(&v4, *(struct _RTL_CRITICAL_SECTION **)(a1 + 24));
  sub_1400B6010(a1);
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = GetTickCount64();
  sub_140018FF0(&v4);
}
