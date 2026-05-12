/*
 * XREFs of sub_14003CEE0 @ 0x14003CEE0
 * Callers:
 *     sub_14009E468 @ 0x14009E468 (sub_14009E468.c)
 *     sub_14009EC74 @ 0x14009EC74 (sub_14009EC74.c)
 *     sub_1401ACC34 @ 0x1401ACC34 (sub_1401ACC34.c)
 *     sub_1401AFC7C @ 0x1401AFC7C (sub_1401AFC7C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003CEE0(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = *(_BYTE **)(a1 + 112);
  if ( !v1 || (*v1 & 0x1F) != 0x14 )
    return 0LL;
  if ( byte_1401687E8 && *(int *)(*(_QWORD *)(a1 + 24) + 4664LL) <= 1 )
    return *(_BYTE *)(a1 + 507) & 1;
  return 1LL;
}
