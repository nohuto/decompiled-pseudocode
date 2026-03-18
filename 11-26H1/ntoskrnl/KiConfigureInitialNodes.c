/*
 * XREFs of KiConfigureInitialNodes @ 0x1405EF678
 * Callers:
 *     KiInitializeBootStructures @ 0x140BF5890 (KiInitializeBootStructures.c)
 * Callees:
 *     KiAllocateProcessorNumber @ 0x1405EF1A4 (KiAllocateProcessorNumber.c)
 *     KiAssignProcessorNumberToPrcb @ 0x1405EF448 (KiAssignProcessorNumberToPrcb.c)
 *     KiInitializeSchedulerSubNode @ 0x1405EFB24 (KiInitializeSchedulerSubNode.c)
 */

struct _KTHREAD *__fastcall KiConfigureInitialNodes(__int64 a1)
{
  struct _KTHREAD *result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  byte_140F268F2 |= 2u;
  byte_140E14BC5 |= 5u;
  KeNodeBlock[0] = (__int64)&dword_140F268E8;
  v3 = 0;
  qword_140F26938 = (__int64)&unk_140F26948;
  dword_140F268E8 = 0;
  KiSubNodes = (__int64)&qword_140E15980;
  dword_140F268EC = -1;
  word_140F268F0 = 1;
  qword_140F26908 = (__int64)&qword_140F26940;
  dword_140F26910 = 1;
  xmmword_140F2691C = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  KiSubNodeConfigBlock = (__int64)&KiInitialNodeStructures;
  qword_140F2692C = xmmword_140F2691C;
  KiSubNodeCount = 1;
  KiInitialNodeStructures = 0;
  byte_140E14BC4 = 1;
  qword_140E14BD0 = 0LL;
  word_140E14BC6 = 0;
  KiInitializeSchedulerSubNode(&unk_140E14C00, &KiInitialNodeStructures);
  byte_140E14CB9 = 8;
  qword_140E14CC0 = (__int64)&unk_140E14F00;
  qword_140E15980 = (__int64)&unk_140E14C00;
  qword_140E14CC8 = (__int64)&unk_140E15DB8;
  word_140E14C8E = 0;
  qword_140E14CD0 = (__int64)&unk_140E15FB8;
  qword_140F26940 = &unk_140E14C00;
  dword_140F26914 = 1;
  KiAllocateProcessorNumber(0, (__int64)&v3);
  result = KiAssignProcessorNumberToPrcb(a1, (char *)&v3, 0);
  qword_140E14CA0 |= 1uLL;
  qword_140E14C50 |= 1uLL;
  *(_BYTE *)(a1 + 35) = 1;
  qword_140FC19A0[0] |= 1uLL;
  return result;
}
