/*
 * XREFs of AddCommitmentCb @ 0x140128280
 * Callers:
 *     <none>
 * Callees:
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAUVIDMM_DEVICE_COMMITMENT_INFO@@KPEAUVIDMM_SEGMENT_BASE@@_NPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1401116CC (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAUVIDMM_DEVICE_COMMITMENT_INFO@@KPEAUVIDMM_SEGMENT_BASE@@_N.c)
 */

__int64 __fastcall AddCommitmentCb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  const struct VIDMM_GLOBAL_ALLOC **v5; // rsi
  __int64 v6; // r10
  const struct VIDMM_GLOBAL_ALLOC *v7; // r14
  __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // r10
  unsigned __int16 *v11; // rdi
  struct VIDMM_DEVICE_COMMITMENT_INFO *v12; // r11
  struct VIDMM_DEVICE_COMMITMENT_INFO **v13; // rdx
  struct VIDMM_DEVICE_COMMITMENT_INFO *v14; // rax
  bool v15; // zf

  v4 = *(_QWORD *)(a4 + 8);
  v5 = *(const struct VIDMM_GLOBAL_ALLOC ***)a4;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * *(unsigned __int16 *)(a3 + 16));
  v7 = **(const struct VIDMM_GLOBAL_ALLOC ***)a4;
  v8 = v6 + 8;
  v9 = v6 != 0;
  v10 = (unsigned __int64)*(unsigned int *)(a3 + 12) << 12;
  v11 = (unsigned __int16 *)(v8 & -(__int64)v9);
  v12 = (struct VIDMM_DEVICE_COMMITMENT_INFO *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 40)
                                                                      + 8LL * *(unsigned __int16 *)(a1 + 72))
                                                          + 16LL)
                                              + 56LL * v11[31]);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 41065LL) & 0x20) == 0 )
  {
    v13 = (struct VIDMM_DEVICE_COMMITMENT_INFO **)*((_QWORD *)v12 + 5);
    v14 = (struct VIDMM_DEVICE_COMMITMENT_INFO *)(a4 + 56);
    if ( *v13 != (struct VIDMM_DEVICE_COMMITMENT_INFO *)((char *)v12 + 32) )
      __fastfail(3u);
    *(_QWORD *)v14 = (char *)v12 + 32;
    *(_QWORD *)(a4 + 64) = v13;
    *v13 = v14;
    *((_QWORD *)v12 + 5) = v14;
  }
  *((_QWORD *)v12 + 1) += v10;
  v15 = ++*(_DWORD *)v12 == 1;
  *((_QWORD *)v12 + 6) = v4;
  VIDMM_PROCESS::AddCommitment(
    (DXGPROCESS **)v5[1],
    v12,
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL) + 240LL),
    (struct VIDMM_SEGMENT_BASE *)v11,
    v15,
    v7);
  return 0LL;
}
