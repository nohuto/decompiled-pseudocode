/*
 * XREFs of sub_140062A20 @ 0x140062A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400627BC @ 0x1400627BC (sub_1400627BC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_140062A20(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v5 = v2;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 8), 0xFFFFFFFF) == 1 )
  {
    sub_1400B6010(a1);
    sub_1400627BC(a1 + 56, a2);
    sub_1400B6010(a1);
  }
  sub_140018FF0(&v5);
}
