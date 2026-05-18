/*
 * XREFs of sub_18008A484 @ 0x18008A484
 * Callers:
 *     sub_18008A56C @ 0x18008A56C (sub_18008A56C.c)
 * Callees:
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_180038A48 @ 0x180038A48 (sub_180038A48.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18008A484(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 *v4; // rcx

  sub_180013494((__int64)(a1 + 13), a2);
  v4 = (__int64 *)a1[12];
  if ( v4 )
  {
    LOBYTE(v3) = v4 != a1 + 5;
    (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 32))(v4, v3);
    a1[12] = 0LL;
  }
  sub_180038A48(a1 + 4);
  return sub_18008A458(a1);
}
