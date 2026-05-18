/*
 * XREFs of sub_1800994C4 @ 0x1800994C4
 * Callers:
 *     sub_180099E4C @ 0x180099E4C (sub_180099E4C.c)
 *     sub_18009A08C @ 0x18009A08C (sub_18009A08C.c)
 *     sub_18009A398 @ 0x18009A398 (sub_18009A398.c)
 *     sub_18009A468 @ 0x18009A468 (sub_18009A468.c)
 *     sub_18009A580 @ 0x18009A580 (sub_18009A580.c)
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 *     sub_18009AF7C @ 0x18009AF7C (sub_18009AF7C.c)
 *     sub_18009AFF0 @ 0x18009AFF0 (sub_18009AFF0.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

bool __fastcall sub_1800994C4(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    *(_DWORD *)(a1 + 36) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  return *(_DWORD *)(a1 + 36) != 4;
}
