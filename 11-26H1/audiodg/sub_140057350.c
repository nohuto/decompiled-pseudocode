/*
 * XREFs of sub_140057350 @ 0x140057350
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400096FC @ 0x1400096FC (sub_1400096FC.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140057350(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+18h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 264));
  v3 = *(_QWORD *)(a1 + 160);
  v7 = v1;
  v4 = -2147467262;
  v6 = 0LL;
  if ( (int)sub_1400096FC(v3, &v6) >= 0 )
    v4 = sub_1400B6010(v6);
  sub_140003238(&v6);
  sub_140018FF0(&v7);
  return v4;
}
