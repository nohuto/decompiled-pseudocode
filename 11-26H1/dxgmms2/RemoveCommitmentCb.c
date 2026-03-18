/*
 * XREFs of RemoveCommitmentCb @ 0x140128380
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAUVIDMM_DEVICE_COMMITMENT_INFO@@KPEAUVIDMM_SEGMENT_BASE@@_NPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010F4A8 (-RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAUVIDMM_DEVICE_COMMITMENT_INFO@@KPEAUVIDMM_SEGMENT_BASE@.c)
 */

__int64 __fastcall RemoveCommitmentCb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const struct VIDMM_GLOBAL_ALLOC **v5; // rsi
  __int64 v6; // r10
  const struct VIDMM_GLOBAL_ALLOC *v7; // rbp
  __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // r10
  unsigned __int16 *v11; // rdi
  struct VIDMM_DEVICE_COMMITMENT_INFO *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rcx

  v5 = *(const struct VIDMM_GLOBAL_ALLOC ***)a4;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * *(unsigned __int16 *)(a3 + 16));
  v7 = **(const struct VIDMM_GLOBAL_ALLOC ***)a4;
  v8 = v6 + 8;
  v9 = v6 != 0;
  v10 = (unsigned __int64)*(unsigned int *)(a3 + 12) << 12;
  v11 = (unsigned __int16 *)(v8 & -(__int64)v9);
  v12 = (struct VIDMM_DEVICE_COMMITMENT_INFO *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 8) + 40LL)
                                                                      + 8LL * *(unsigned __int16 *)(a1 + 72))
                                                          + 16LL)
                                              + 56LL * v11[31]);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 41065LL) & 0x20) == 0 )
  {
    v13 = (_QWORD *)(a4 + 56);
    v14 = *(_QWORD *)(a4 + 56);
    if ( *(_QWORD *)(v14 + 8) != a4 + 56 || (v15 = *(_QWORD **)(a4 + 64), (_QWORD *)*v15 != v13) )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    *v13 = 0LL;
    *(_QWORD *)(a4 + 64) = 0LL;
  }
  *((_QWORD *)v12 + 1) -= v10;
  VIDMM_PROCESS::RemoveCommitment(
    v5[1],
    v12,
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL) + 240LL),
    (struct VIDMM_SEGMENT_BASE *)v11,
    --*(_DWORD *)v12 == 0,
    v7);
  return 0LL;
}
