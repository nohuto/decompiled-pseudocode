/*
 * XREFs of sub_140028168 @ 0x140028168
 * Callers:
 *     sub_1400AE5D2 @ 0x1400AE5D2 (sub_1400AE5D2.c)
 *     sub_1400AE6A6 @ 0x1400AE6A6 (sub_1400AE6A6.c)
 *     sub_1400AE9E0 @ 0x1400AE9E0 (sub_1400AE9E0.c)
 *     sub_1400AEE6F @ 0x1400AEE6F (sub_1400AEE6F.c)
 *     sub_1400B3630 @ 0x1400B3630 (sub_1400B3630.c)
 *     sub_1400B3827 @ 0x1400B3827 (sub_1400B3827.c)
 *     sub_1400B39DC @ 0x1400B39DC (sub_1400B39DC.c)
 *     sub_1400B3AC2 @ 0x1400B3AC2 (sub_1400B3AC2.c)
 *     sub_1400B3B2F @ 0x1400B3B2F (sub_1400B3B2F.c)
 *     sub_1400B3DA1 @ 0x1400B3DA1 (sub_1400B3DA1.c)
 *     sub_1400B4240 @ 0x1400B4240 (sub_1400B4240.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140028168(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *a1 = 0LL;
  }
}
