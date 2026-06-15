/*
 * XREFs of sub_1400371E0 @ 0x1400371E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140073954 @ 0x140073954 (sub_140073954.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400371E0(__int64 a1)
{
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 264), 0, 1) != 1 )
    Sleep(1u);
  return sub_1400B6010(*(_QWORD *)(a1 + 176));
}
