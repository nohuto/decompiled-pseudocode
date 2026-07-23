/*
 * XREFs of MiCombinePte @ 0x140709100
 * Callers:
 *     <none>
 * Callees:
 *     MiComputeCombineHash @ 0x1402D5A70 (MiComputeCombineHash.c)
 *     MiCombineCandidate @ 0x1402D6000 (MiCombineCandidate.c)
 *     MiProcessSuitableForCombining @ 0x1403FD3DC (MiProcessSuitableForCombining.c)
 *     MiCombineWorkingSetTail @ 0x140709450 (MiCombineWorkingSetTail.c)
 */

__int64 __fastcall MiCombinePte(__int64 a1, _QWORD *a2, int a3)
{
  int v4; // r9d
  __int64 v5; // rcx
  _QWORD *v7; // rbx
  __int64 *v8; // r14
  _QWORD *v9; // r10
  __int64 v10; // rsi
  const __m128i *v11; // r8
  __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v15; // rdx

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 72LL) )
    return 4LL;
  v7 = *(_QWORD **)(a1 + 184);
  v8 = (__int64 *)v7[3];
  v9 = (_QWORD *)*v8;
  if ( (*(_DWORD *)(v5 + 184) & 0xF) == 0 && !(unsigned int)MiProcessSuitableForCombining(v5 - 1024) )
    return 4LL;
  if ( v4 >= 1 )
    return 0LL;
  v10 = (*a2 >> 12) & 0xFFFFFFFFFFLL;
  v11 = (const __m128i *)(48 * v10 - 0x220000000000LL);
  if ( v11[2].m128i_i64[1] < 0 )
    return 0LL;
  v12 = v8[1];
  CurrentThread = KeGetCurrentThread();
  if ( v12 && *(_DWORD *)(v12 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    return 5LL;
  if ( (unsigned int)MiCombineCandidate(v9, 0, v11)
    && (++*(_QWORD *)(v8[13] + 16),
        v15 = (_QWORD *)(v7[4] + 40LL * v7[1]),
        v15[2] = v10,
        *v15 = 0LL,
        (unsigned int)MiComputeCombineHash(v8, v15, 1))
    && (++v7[1], v7[1] == v7[2]) )
  {
    return MiCombineWorkingSetTail(a1);
  }
  else
  {
    return 0LL;
  }
}
