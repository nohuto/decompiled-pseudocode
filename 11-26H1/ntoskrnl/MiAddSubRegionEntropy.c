/*
 * XREFs of MiAddSubRegionEntropy @ 0x140CF8E40
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140CF9118 (MiAssignTopLevelRanges.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 */

__int64 __fastcall MiAddSubRegionEntropy(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax

  v2 = qword_140E37BF0;
  v3 = (unsigned __int64)(unsigned int)ExGenRandom(1, a2) << 32;
  v5 = v3 | (unsigned int)ExGenRandom(1, v4);
  v6 = qword_140E37C00;
  qword_140E2DE40 = qword_140E37C00;
  qword_140E37BF0 = v2 + (v5 & 0x7FFFFFFFF8LL);
  qword_140E2DE50 = qword_140E37C00 + 0x7FFFFFFFFFLL;
  result = ExGenRandom(1, 0x7FFFFFFFF8LL);
  qword_140E2DE48 = v6 + ((unsigned __int64)(unsigned __int8)result << 30);
  return result;
}
