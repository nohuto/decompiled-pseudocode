/*
 * XREFs of sub_1400718DC @ 0x1400718DC
 * Callers:
 *     sub_140071930 @ 0x140071930 (sub_140071930.c)
 *     sub_14007197C @ 0x14007197C (sub_14007197C.c)
 *     sub_1400D7410 @ 0x1400D7410 (sub_1400D7410.c)
 *     sub_14012A2CC @ 0x14012A2CC (sub_14012A2CC.c)
 *     sub_14018D660 @ 0x14018D660 (sub_14018D660.c)
 *     sub_1401942EC @ 0x1401942EC (sub_1401942EC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400718DC(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 (__fastcall *v2)(__int64); // rax
  int v4; // eax

  v1 = 0;
  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 120LL);
  if ( !v2 )
    return 3221225659LL;
  v4 = v2(*(_QWORD *)(a1 + 240) + 16LL);
  if ( v4 )
  {
    v1 = -1073741823;
    if ( v4 == 2 )
      return (unsigned int)-2147483631;
  }
  return v1;
}
