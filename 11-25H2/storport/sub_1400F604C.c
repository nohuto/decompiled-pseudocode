/*
 * XREFs of sub_1400F604C @ 0x1400F604C
 * Callers:
 *     sub_1400F1278 @ 0x1400F1278 (sub_1400F1278.c)
 *     sub_1400F2658 @ 0x1400F2658 (sub_1400F2658.c)
 * Callees:
 *     sub_140053AA4 @ 0x140053AA4 (sub_140053AA4.c)
 *     sub_1400C7960 @ 0x1400C7960 (sub_1400C7960.c)
 */

void __fastcall sub_1400F604C(_QWORD *SystemArgument2)
{
  unsigned int *v2; // rdx
  size_t Size; // [rsp+30h] [rbp-18h]

  if ( SystemArgument2[148] )
  {
    if ( (SystemArgument2[121] & 0x8000LL) == 0 )
    {
      v2 = (unsigned int *)SystemArgument2[148];
      LODWORD(Size) = v2[1];
      sub_1400C7960(SystemArgument2, 1, 0, 0, *v2, v2 + 2, Size);
    }
    sub_140053AA4(*(_QWORD *)(SystemArgument2[16] + 408LL) + 16LL);
    ExFreePoolWithTag((PVOID)SystemArgument2[148], 0x484E6152u);
    SystemArgument2[148] = 0LL;
  }
}
