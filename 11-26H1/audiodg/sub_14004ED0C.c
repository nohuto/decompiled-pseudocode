/*
 * XREFs of sub_14004ED0C @ 0x14004ED0C
 * Callers:
 *     sub_14002FA30 @ 0x14002FA30 (sub_14002FA30.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140010994 @ 0x140010994 (sub_140010994.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140045A9C @ 0x140045A9C (sub_140045A9C.c)
 */

void __fastcall sub_14004ED0C(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v6 = v2;
  sub_140010994(&v5, a2);
  sub_140045A9C((_QWORD **)(a1 + 88), &v5);
  sub_140003238(&v5);
  sub_140018FF0(&v6);
}
