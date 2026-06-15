/*
 * XREFs of sub_14003FC80 @ 0x14003FC80
 * Callers:
 *     sub_14003FC60 @ 0x14003FC60 (sub_14003FC60.c)
 * Callees:
 *     sub_140005624 @ 0x140005624 (sub_140005624.c)
 */

int *sub_14003FC80()
{
  dword_1400E8810 = 96;
  qword_1400E8858 = 0LL;
  qword_1400E8860 = 0LL;
  qword_1400E8868 = 0LL;
  qword_1400E8820 = (__int64)&_ImageBase;
  qword_1400E8818 = (__int64)&_ImageBase;
  qword_1400E8830 = (__int64)&unk_1400C7368;
  xmmword_1400E8838 = 0LL;
  byte_1400E8828 = 1;
  xmmword_1400E8848 = 0LL;
  dword_1400E882C = 2048;
  if ( (int)sub_140005624((struct _RTL_CRITICAL_SECTION *)&xmmword_1400E8838) < 0 )
    byte_1400E8928 = 1;
  return &dword_1400E8810;
}
