/*
 * XREFs of sub_14002ACA4 @ 0x14002ACA4
 * Callers:
 *     sub_14002AED8 @ 0x14002AED8 (sub_14002AED8.c)
 * Callees:
 *     sub_14001A2D4 @ 0x14001A2D4 (sub_14001A2D4.c)
 */

__int64 __fastcall sub_14002ACA4(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-B0h]
  int v7; // [rsp+30h] [rbp-A8h]
  int v8; // [rsp+38h] [rbp-A0h]
  int v9; // [rsp+40h] [rbp-98h]

  if ( !*(_BYTE *)(a1 + 20) )
  {
    result = sub_14001A2D4(
               a1,
               0LL,
               0LL,
               4,
               "IdentifyNameSpace",
               v6,
               v7,
               v8,
               v9,
               "ActiveNSCount",
               *(unsigned int *)(a1 + 212),
               "ActiveNSCountInNSIDList",
               a2,
               "NN",
               *(unsigned int *)(*(_QWORD *)(a1 + 1560) + 516LL),
               "MNAN",
               *(unsigned int *)(*(_QWORD *)(a1 + 1560) + 540LL),
               "MaxActiveNSID",
               *(unsigned int *)(a1 + 224),
               "MaxActiveNSIDInNSIDList",
               a3,
               "ActiveNSIDListStatus",
               a4,
               "ControllerFlags",
               *(unsigned int *)(a1 + 4056));
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      return StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  }
  return result;
}
