/*
 * XREFs of sub_1400239C4 @ 0x1400239C4
 * Callers:
 *     sub_1400010D4 @ 0x1400010D4 (sub_1400010D4.c)
 *     sub_140001C64 @ 0x140001C64 (sub_140001C64.c)
 *     sub_140001D28 @ 0x140001D28 (sub_140001D28.c)
 *     sub_140002020 @ 0x140002020 (sub_140002020.c)
 *     sub_140002080 @ 0x140002080 (sub_140002080.c)
 *     sub_140002114 @ 0x140002114 (sub_140002114.c)
 *     sub_14000218C @ 0x14000218C (sub_14000218C.c)
 *     sub_140002220 @ 0x140002220 (sub_140002220.c)
 *     sub_14000229C @ 0x14000229C (sub_14000229C.c)
 *     sub_140002380 @ 0x140002380 (sub_140002380.c)
 *     sub_1400024A4 @ 0x1400024A4 (sub_1400024A4.c)
 *     sub_140022828 @ 0x140022828 (sub_140022828.c)
 *     sub_140023530 @ 0x140023530 (sub_140023530.c)
 *     sub_140023578 @ 0x140023578 (sub_140023578.c)
 *     sub_140023608 @ 0x140023608 (sub_140023608.c)
 *     sub_1400237B8 @ 0x1400237B8 (sub_1400237B8.c)
 *     sub_14002385C @ 0x14002385C (sub_14002385C.c)
 *     sub_140023930 @ 0x140023930 (sub_140023930.c)
 *     sub_1400250F4 @ 0x1400250F4 (sub_1400250F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400239C4(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int16 *v7; // rdx
  _DWORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9[0] = *a2 << 24;
  v9[1] = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  v10 = v6;
  *(_QWORD *)a6 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a6 + 8) = **(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a6 + 16) = v7;
  *(_DWORD *)(a6 + 12) = 2;
  *(_DWORD *)(a6 + 24) = *v7;
  *(_DWORD *)(a6 + 28) = 1;
  return ((__int64 (__fastcall *)(_QWORD, _DWORD *, __int64, __int64, int, __int64))EtwEventWriteTransfer)(
           *(_QWORD *)(a1 + 32),
           v9,
           a3,
           a4,
           a5,
           a6);
}
