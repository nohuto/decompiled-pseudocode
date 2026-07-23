/*
 * XREFs of MiRelinkDecayClusterTimer @ 0x14047A3B8
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x140298A3C (MiEmptyDecayClusterTimers.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRelinkDecayClusterTimer(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  ULONG_PTR v5; // r11
  unsigned __int64 v6; // r8
  ULONG_PTR v7; // r10
  __int64 v8; // rdx
  unsigned __int64 result; // rax

  v2 = a2;
  *(_DWORD *)(a1 + 32) = ((unsigned __int8)a2 << 22) ^ (*(_DWORD *)(a1 + 32) ^ ((unsigned __int8)a2 << 22)) & 0xFF3FFFFF;
  v3 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v4 = *(_QWORD *)(v3 + 8LL * a2 + 16448);
  v5 = (a1 + 0x220000000000LL) / 48 - qword_140E34930;
  v6 = v4 >> 1;
  *(_QWORD *)(a1 + 8) = (unsigned int)v4 & 0xFFFFFFFE | 0xFFFFFFFE00000000uLL;
  v7 = v5 << 33;
  if ( (v4 & 0xFFFFFFFE) == 0xFFFFFFFE )
  {
    v4 = v7 | v4 & 0x1FFFFFFFFLL;
  }
  else
  {
    LODWORD(v6) = (v4 >> 1) & 0x7FFFFFFF;
    *(_QWORD *)(48 * (v6 + qword_140E34930) - 0x220000000000LL + 8) = v7 | *(_QWORD *)(48 * (v6 + qword_140E34930)
                                                                                     - 0x220000000000LL
                                                                                     + 8) & 0x1FFFFFFFFLL;
  }
  v8 = v4 ^ (2 * v5);
  result = 0xFFFFFFFF00000001uLL;
  *(_QWORD *)(v3 + 8 * v2 + 16448) = (2 * v5) ^ v8 & 0xFFFFFFFF00000001uLL;
  return result;
}
