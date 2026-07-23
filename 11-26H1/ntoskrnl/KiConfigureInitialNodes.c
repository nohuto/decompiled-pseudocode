/*
 * XREFs of KiConfigureInitialNodes @ 0x1405F1FE8
 * Callers:
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 * Callees:
 *     KiAllocateProcessorNumber @ 0x1405F1B14 (KiAllocateProcessorNumber.c)
 *     KiAssignProcessorNumberToPrcb @ 0x1405F1DB8 (KiAssignProcessorNumberToPrcb.c)
 *     KiInitializeSchedulerSubNode @ 0x1405F2494 (KiInitializeSchedulerSubNode.c)
 */

struct _LIST_ENTRY *__fastcall KiConfigureInitialNodes(__int64 a1)
{
  struct _LIST_ENTRY *result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  byte_140F26D32 |= 2u;
  byte_140E14D05 |= 5u;
  KeNodeBlock[0] = (__int64)&dword_140F26D28;
  v3 = 0;
  qword_140F26D78 = (__int64)&unk_140F26D88;
  dword_140F26D28 = 0;
  KiSubNodes = (__int64)&qword_140E15AC0;
  dword_140F26D2C = -1;
  word_140F26D30 = 1;
  qword_140F26D48 = (__int64)&qword_140F26D80;
  dword_140F26D50 = 1;
  xmmword_140F26D5C = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  KiSubNodeConfigBlock = (__int64)&KiInitialNodeStructures;
  qword_140F26D6C = xmmword_140F26D5C;
  KiSubNodeCount = 1;
  KiInitialNodeStructures = 0;
  byte_140E14D04 = 1;
  qword_140E14D10 = 0LL;
  word_140E14D06 = 0;
  KiInitializeSchedulerSubNode(&unk_140E14D40, &KiInitialNodeStructures);
  byte_140E14DF9 = 8;
  qword_140E14E00 = (__int64)&unk_140E15040;
  qword_140E15AC0 = (__int64)&unk_140E14D40;
  qword_140E14E08 = (__int64)&unk_140E15EF8;
  word_140E14DCE = 0;
  qword_140E14E10 = (__int64)&unk_140E160F8;
  qword_140F26D80 = &unk_140E14D40;
  dword_140F26D54 = 1;
  KiAllocateProcessorNumber(0, (__int64)&v3);
  result = KiAssignProcessorNumberToPrcb(a1, (char *)&v3, 0);
  qword_140E14DE0 |= 1uLL;
  qword_140E14D90 |= 1uLL;
  *(_BYTE *)(a1 + 35) = 1;
  qword_140FC29A0[0] |= 1uLL;
  return result;
}
