/*
 * XREFs of sub_18003F3F0 @ 0x18003F3F0
 * Callers:
 *     sub_18003F5A4 @ 0x18003F5A4 (sub_18003F5A4.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180025B90 @ 0x180025B90 (sub_180025B90.c)
 *     sub_18003F214 @ 0x18003F214 (sub_18003F214.c)
 *     sub_18003F2C4 @ 0x18003F2C4 (sub_18003F2C4.c)
 *     sub_18003F2F4 @ 0x18003F2F4 (sub_18003F2F4.c)
 *     sub_1800D5408 @ 0x1800D5408 (sub_1800D5408.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003F3F0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  sub_18003F2F4((void **)(a1 + 200));
  sub_1800D5408(a1 + 184);
  sub_18003F214((__int64 *)(a1 + 120));
  sub_18003F2C4((void **)(a1 + 88));
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  result = sub_180025B90(a1 + 16);
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
    return sub_180010F00(v4);
  return result;
}
