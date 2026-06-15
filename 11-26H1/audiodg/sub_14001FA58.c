/*
 * XREFs of sub_14001FA58 @ 0x14001FA58
 * Callers:
 *     sub_1400AE13B @ 0x1400AE13B (sub_1400AE13B.c)
 *     sub_1400AE23A @ 0x1400AE23A (sub_1400AE23A.c)
 *     sub_1400AEB68 @ 0x1400AEB68 (sub_1400AEB68.c)
 *     sub_1400AEBFC @ 0x1400AEBFC (sub_1400AEBFC.c)
 *     sub_1400AEC20 @ 0x1400AEC20 (sub_1400AEC20.c)
 *     sub_1400AEF00 @ 0x1400AEF00 (sub_1400AEF00.c)
 *     sub_1400AEF40 @ 0x1400AEF40 (sub_1400AEF40.c)
 *     sub_1400AEF60 @ 0x1400AEF60 (sub_1400AEF60.c)
 *     sub_1400AEF96 @ 0x1400AEF96 (sub_1400AEF96.c)
 *     sub_1400AF418 @ 0x1400AF418 (sub_1400AF418.c)
 *     sub_1400AF4C7 @ 0x1400AF4C7 (sub_1400AF4C7.c)
 *     sub_1400B035E @ 0x1400B035E (sub_1400B035E.c)
 *     sub_1400B0382 @ 0x1400B0382 (sub_1400B0382.c)
 *     sub_1400B193A @ 0x1400B193A (sub_1400B193A.c)
 *     sub_1400B1982 @ 0x1400B1982 (sub_1400B1982.c)
 *     sub_1400B19E3 @ 0x1400B19E3 (sub_1400B19E3.c)
 *     sub_1400B20BF @ 0x1400B20BF (sub_1400B20BF.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14001FA58(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
