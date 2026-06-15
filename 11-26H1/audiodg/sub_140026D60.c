/*
 * XREFs of sub_140026D60 @ 0x140026D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140073954 @ 0x140073954 (sub_140073954.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140026D60(__int64 a1)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), 2, 1) == 1 )
    sub_1400B6010(*(_QWORD *)(a1 + 192));
  return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), 1, 2);
}
