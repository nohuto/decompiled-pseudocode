/*
 * XREFs of MiReduceUnusedSubsectionCount @ 0x1402EE48C
 * Callers:
 *     MiUnlinkUnusedSubsection @ 0x1402EE29C (MiUnlinkUnusedSubsection.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReduceUnusedSubsectionCount(_DWORD *a1)
{
  __int64 v1; // r8
  unsigned int v2; // eax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 result; // rax
  unsigned int v7; // eax

  v1 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  v2 = a1[11];
  v3 = 8LL * v2;
  if ( v3 > 0xFE0 )
  {
    v7 = (8 * (_WORD)v2) & 0xFFF;
    if ( v3 >= 0x10000 || v7 > 0xFC0 )
    {
      v5 = (v3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_4;
    }
    v4 = v3 + 15;
  }
  else
  {
    v4 = v3 + 31;
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_4:
  _InterlockedAdd64((volatile signed __int64 *)&stru_140E2C950.Header.WaitListHead.Flink, -(__int64)v5);
  result = *(_QWORD *)(v1 + 2440) - v5;
  *(_QWORD *)(v1 + 2440) = result;
  return result;
}
