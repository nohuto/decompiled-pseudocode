/*
 * XREFs of sub_14005C25C @ 0x14005C25C
 * Callers:
 *     sub_140007B90 @ 0x140007B90 (sub_140007B90.c)
 *     sub_1400346B4 @ 0x1400346B4 (sub_1400346B4.c)
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14003F528 @ 0x14003F528 (sub_14003F528.c)
 *     sub_14005C388 @ 0x14005C388 (sub_14005C388.c)
 */

__int64 __fastcall sub_14005C25C(struct _RTL_CRITICAL_SECTION *a1, __int64 a2)
{
  __int64 v4; // rax
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  EnterCriticalSection(a1);
  v6 = a1;
  v8 = 0;
  v7 = 0;
  v9 = 0LL;
  v4 = sub_14003F528((__int64)&a1[1], a2, &v8, &v7, &v9);
  if ( v4 )
    sub_14005C388(&a1[1], v4, v9);
  sub_140018FF0(&v6);
  return 0LL;
}
