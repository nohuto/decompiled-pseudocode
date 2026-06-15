/*
 * XREFs of sub_140074904 @ 0x140074904
 * Callers:
 *     sub_140074874 @ 0x140074874 (sub_140074874.c)
 *     sub_1400748B8 @ 0x1400748B8 (sub_1400748B8.c)
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140074D58 @ 0x140074D58 (sub_140074D58.c)
 *     sub_140075080 @ 0x140075080 (sub_140075080.c)
 */

void __fastcall sub_140074904(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  EnterCriticalSection(&stru_1400E87B8);
  v5 = &stru_1400E87B8;
  v3 = sub_140074D58(v2, a1 + 88);
  if ( v3 != -1 )
    sub_140075080(v4, v3);
  sub_140018FF0(&v5);
  sub_140006B48(a1 + 24);
}
