/*
 * XREFs of KiCompareVarMtrr @ 0x140C0D15C
 * Callers:
 *     KeLoadMTRR @ 0x140C0CF60 (KeLoadMTRR.c)
 * Callees:
 *     <none>
 */

char KiCompareVarMtrr()
{
  unsigned int v1; // r9d
  unsigned int v2; // r10d
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // rdx

  if ( !KeGetCurrentPrcb()->Number )
  {
    v1 = 0;
    v2 = 513;
    while ( v1 < (unsigned __int64)(unsigned __int8)qword_140F15088 )
    {
      v3 = __readmsr(v2 - 1);
      v4 = __readmsr(v2);
      v5 = (v4 >> 11) & 1;
      if ( v5 != ((*((_QWORD *)qword_140F15098 + 2 * v1 + 1) >> 11) & 1LL)
        || v5 && (v3 != *((_QWORD *)qword_140F15098 + 2 * v1) || v4 != *((_QWORD *)qword_140F15098 + 2 * v1 + 1)) )
      {
        return 0;
      }
      ++v1;
      v2 += 2;
    }
  }
  return 1;
}
