/*
 * XREFs of MiUnlinkDecayClusterTimer @ 0x14045B5F4
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x140298A3C (MiEmptyDecayClusterTimers.c)
 *     MiRemoveDecayClusterTimer @ 0x14045B578 (MiRemoveDecayClusterTimer.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUnlinkDecayClusterTimer(__int64 a1)
{
  unsigned __int64 v1; // r10
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int64 v5; // rdi
  __int64 v6; // r10
  __int64 v7; // r11
  ULONG_PTR v8; // r8
  unsigned __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (unsigned int)v3 >> 1;
  v5 = v3 >> 33;
  v6 = (v1 >> 22) & 3;
  v7 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((v2 >> 43) & 0x3FF));
  if ( v4 == 0x7FFFFFFF )
    *(_QWORD *)(v7 + 8 * v6 + 16448) ^= (v3 ^ *(_QWORD *)(v7 + 8 * v6 + 16448)) & 0xFFFFFFFE00000000uLL;
  else
    *(_QWORD *)(48 * (v4 + qword_140E34930) - 0x220000000000LL + 8) ^= (v3 ^ *(_QWORD *)(48 * (v4 + qword_140E34930)
                                                                                       - 0x220000000000LL
                                                                                       + 8)) & 0xFFFFFFFE00000000uLL;
  if ( v5 == 0x7FFFFFFF )
  {
    result = v3 ^ (*(_QWORD *)(v7 + 8 * v6 + 16448) ^ v3) & 0xFFFFFFFF00000001uLL;
    *(_QWORD *)(v7 + 8 * v6 + 16448) = result;
  }
  else
  {
    v8 = 48 * (v5 + qword_140E34930);
    result = v3 ^ (*(_QWORD *)(v8 - 0x220000000000LL + 8) ^ v3) & 0xFFFFFFFF00000001uLL;
    *(_QWORD *)(v8 - 0x220000000000LL + 8) = result;
  }
  return result;
}
