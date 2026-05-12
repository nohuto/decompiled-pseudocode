/*
 * XREFs of sub_140054FB0 @ 0x140054FB0
 * Callers:
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 * Callees:
 *     sub_14006B21C @ 0x14006B21C (sub_14006B21C.c)
 *     sub_140178284 @ 0x140178284 (sub_140178284.c)
 *     sub_1401782E0 @ 0x1401782E0 (sub_1401782E0.c)
 *     sub_1401B12DC @ 0x1401B12DC (sub_1401B12DC.c)
 */

__int64 __fastcall sub_140054FB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v8; // r8

  v3 = a1 + 360;
  sub_1401782E0(a1 + 360);
  result = sub_140178284(v3, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)sub_1401B12DC(a1 + 776, *(_QWORD *)(a1 + 24)) != -1073741637 || (*(_BYTE *)(a1 + 104) & 8) != 0 )
    {
      if ( *(char *)(a1 + 110) >= 0 )
        sub_14006B21C(a1 + 1008, *(_QWORD *)(a1 + 8), v8, 80LL, sub_14000B0B0);
      KeInitializeDpc((PRKDPC)(a1 + 1520), (PKDEFERRED_ROUTINE)sub_140029150, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1648), sub_140065E20, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1848), sub_140065290, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 4200), sub_140065E20, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1912), sub_140059050, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1712), sub_14005E400, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 5464), sub_140066700, *(PVOID *)(a1 + 8));
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
