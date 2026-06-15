/*
 * XREFs of sub_14003F4A8 @ 0x14003F4A8
 * Callers:
 *     sub_140002B30 @ 0x140002B30 (sub_140002B30.c)
 *     sub_14007B9C8 @ 0x14007B9C8 (sub_14007B9C8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003F4A8(__int64 a1)
{
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)a1, 0, 0);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  return a1;
}
