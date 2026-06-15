/*
 * XREFs of sub_14002FE6C @ 0x14002FE6C
 * Callers:
 *     sub_14002FA30 @ 0x14002FA30 (sub_14002FA30.c)
 * Callees:
 *     sub_140045A9C @ 0x140045A9C (sub_140045A9C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_14002FE6C(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v5 = a2;
  if ( a2 )
    sub_1400B6010(a2);
  sub_140045A9C(a1 + 88, &v5);
  if ( v5 )
    sub_1400B6010(v5);
  if ( v4 )
    LeaveCriticalSection(v4);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v5 = a2;
  if ( a2 )
    sub_1400B6010(a2);
  sub_140045A9C(a1 + 152, &v5);
  if ( v5 )
    sub_1400B6010(v5);
  v5 = a2;
  if ( a2 )
    sub_1400B6010(a2);
  sub_140045A9C(a1 + 160, &v5);
  if ( v5 )
    sub_1400B6010(v5);
  if ( a1 != -96 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
}
