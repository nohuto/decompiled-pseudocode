/*
 * XREFs of MiPurgeCandidate @ 0x1403CBEE0
 * Callers:
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 * Callees:
 *     MiWaitForPageWriteCompletion @ 0x1403CC510 (MiWaitForPageWriteCompletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPurgeCandidate(int *a1, ULONG_PTR a2, ULONG_PTR BugCheckParameter4)
{
  int v3; // r9d
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r10
  __int64 result; // rax
  int v10; // eax
  int v11; // ecx

  v3 = *a1;
  v5 = *((_QWORD *)a1 + 4);
  v6 = BugCheckParameter4;
  v7 = *((_QWORD *)a1 + 6);
  if ( qword_140E2D8C0 && (BugCheckParameter4 & 0x10) == 0 )
    v6 = BugCheckParameter4 & qword_140E2D8C8;
  v8 = 48 * ((v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
    return 3221225496LL;
  if ( (BugCheckParameter4 & 0x400) != 0
    || (*(_BYTE *)(v8 + 16) & 1) != 0
    || (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) != a2
    || (v3 & 2) == 0 && (*(_QWORD *)(v8 + 16) & 0x400LL) == 0 && (v3 & 4) == 0 )
  {
    KeBugCheckEx(0xDEu, 1uLL, a2, *(_QWORD *)(v8 + 8), BugCheckParameter4);
  }
  if ( (v3 & 4) != 0 && (((*(_QWORD *)(v8 + 16) & 0x400LL) != 0) & (unsigned __int8)~(*(_BYTE *)(v8 + 34) >> 4)) != 0 )
    return 3221225485LL;
  if ( (v3 & 2) != 0 )
  {
    if ( (a1[2] & 4) != 0 && (unsigned __int16)*(_DWORD *)(v8 + 32) )
      return 3221225485LL;
    return 0LL;
  }
  if ( (*(_BYTE *)(v8 + 34) & 0x10) != 0 )
  {
    if ( (v3 & 1) == 0 )
      return 3221225496LL;
    *(_BYTE *)(v5 + 9) = 1;
  }
  v10 = *(_DWORD *)(v8 + 32);
  if ( !(_WORD)v10 )
  {
LABEL_14:
    if ( (a1[2] & 2) != 0 )
      *(_BYTE *)(v5 + 8) = 1;
    return 0LL;
  }
  v11 = a1[2];
  if ( (v11 & 4) != 0 )
    return 3221225485LL;
  if ( (v3 & 8) != 0 )
    return 3221225496LL;
  if ( (v3 & 4) != 0 || (v10 & 0x80000) == 0 )
  {
    if ( v11 & 1 | ((v11 & 2) != 0) )
      *(_BYTE *)(v5 + 8) = 1;
    goto LABEL_14;
  }
  MiWaitForPageWriteCompletion(v8, v7, *((_QWORD *)a1 + 3), *((unsigned __int8 *)a1 + 12));
  result = 3221226029LL;
  *((_BYTE *)a1 + 12) = 17;
  return result;
}
