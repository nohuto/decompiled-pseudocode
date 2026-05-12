/*
 * XREFs of sub_140016754 @ 0x140016754
 * Callers:
 *     sub_140015BC8 @ 0x140015BC8 (sub_140015BC8.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140016930 @ 0x140016930 (sub_140016930.c)
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 *     sub_140052634 @ 0x140052634 (sub_140052634.c)
 *     sub_1400605C0 @ 0x1400605C0 (sub_1400605C0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_1400A647C @ 0x1400A647C (sub_1400A647C.c)
 *     sub_1400BC450 @ 0x1400BC450 (sub_1400BC450.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_140179544 @ 0x140179544 (sub_140179544.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 *     sub_1401AB4D8 @ 0x1401AB4D8 (sub_1401AB4D8.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 *     sub_1401AF864 @ 0x1401AF864 (sub_1401AF864.c)
 *     sub_1401B2A00 @ 0x1401B2A00 (sub_1401B2A00.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140016754(__int64 a1, __int64 a2)
{
  bool v2; // zf

  if ( *(_DWORD *)a1 == 1094997074 )
  {
    if ( !*(_BYTE *)(a1 + 888) )
    {
LABEL_3:
      MmFreeContiguousMemory((PVOID)a2);
      return;
    }
    v2 = *(_DWORD *)(a1 + 908) == 3;
  }
  else
  {
    if ( *(_DWORD *)a1 != 1314275652 || !*(_BYTE *)(a1 + 1152) )
      goto LABEL_3;
    v2 = *(_DWORD *)(a1 + 1172) == 3;
  }
  if ( !v2 )
    goto LABEL_3;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char))(*(_QWORD *)(*(_QWORD *)(a1 + 880) + 8LL) + 24LL))(
    *(_QWORD *)(a1 + 880),
    *(unsigned int *)(a2 + 16),
    *(_QWORD *)(a2 + 24),
    a2,
    1);
}
