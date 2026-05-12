/*
 * XREFs of sub_1400CB5C0 @ 0x1400CB5C0
 * Callers:
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 * Callees:
 *     sub_14006B21C @ 0x14006B21C (sub_14006B21C.c)
 *     sub_140178284 @ 0x140178284 (sub_140178284.c)
 *     sub_1401782E0 @ 0x1401782E0 (sub_1401782E0.c)
 *     sub_1401B12DC @ 0x1401B12DC (sub_1401B12DC.c)
 */

__int64 __fastcall sub_1400CB5C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 584);
  if ( !v5 )
    goto LABEL_6;
  sub_1401782E0(v5 + 88);
  result = sub_140178284(*(_QWORD *)(a1 + 584) + 88LL, a2, a3);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned int)sub_1401B12DC(*(_QWORD *)(a1 + 584) + 16LL, *(_QWORD *)(a1 + 24)) == -1073741637
    && (*(_BYTE *)(a1 + 144) & 0x10) == 0 )
  {
    return 3221225659LL;
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 144) & 0x200LL) == 0 )
    sub_14006B21C(a1 + 608, *(void **)(a1 + 8), a3, 0x50u, (__int64)sub_1400CC020);
  return 0LL;
}
