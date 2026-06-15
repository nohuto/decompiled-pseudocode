/*
 * XREFs of sub_1400572A0 @ 0x1400572A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400096FC @ 0x1400096FC (sub_1400096FC.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400572A0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  v3 = *(_QWORD *)(a1 + 160);
  v6 = v1;
  v4 = -2147467262;
  v7 = 0LL;
  if ( (int)sub_1400096FC(v3, &v7) >= 0 )
    v4 = sub_1400B6010(v7);
  sub_140003238(&v7);
  sub_140018FF0(&v6);
  return v4;
}
