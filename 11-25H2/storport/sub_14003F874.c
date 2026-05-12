/*
 * XREFs of sub_14003F874 @ 0x14003F874
 * Callers:
 *     sub_1401ADB60 @ 0x1401ADB60 (sub_1401ADB60.c)
 *     sub_1401AE30C @ 0x1401AE30C (sub_1401AE30C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14003F874(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 3552);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x494E6152u);
    *(_QWORD *)(a1 + 3552) = 0LL;
  }
  v3 = *(void **)(a1 + 3560);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x494E6152u);
    *(_QWORD *)(a1 + 3560) = 0LL;
  }
}
