/*
 * XREFs of MiUnlockHugePfnAtDpcUnordered @ 0x1406F2A88
 * Callers:
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C069D4 (MiAddPostHibernateZeroPagesToBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUnlockHugePfnAtDpcUnordered(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)&stru_140E2ED08.SystemCallNumber;
  _InterlockedAnd(
    (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                              + 4 * ((((a1 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
    ~(1 << ((a1 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
  return result;
}
