/*
 * XREFs of MiAddSubRegionEntropy @ 0x140CFF1C0
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140CFF498 (MiAssignTopLevelRanges.c)
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

  v2 = qword_140E37D70;
  v3 = (unsigned __int64)(unsigned int)ExGenRandom(1, a2) << 32;
  v5 = v3 | (unsigned int)ExGenRandom(1, v4);
  v6 = qword_140E37D80;
  qword_140E2DFC0 = qword_140E37D80;
  qword_140E37D70 = v2 + (v5 & 0x7FFFFFFFF8LL);
  qword_140E2DFD0 = qword_140E37D80 + 0x7FFFFFFFFFLL;
  result = ExGenRandom(1, 0x7FFFFFFFF8LL);
  qword_140E2DFC8 = v6 + ((unsigned __int64)(unsigned __int8)result << 30);
  return result;
}
