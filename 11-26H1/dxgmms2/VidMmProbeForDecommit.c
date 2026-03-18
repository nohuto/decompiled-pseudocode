/*
 * XREFs of VidMmProbeForDecommit @ 0x140048380
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmProbeForDecommit@VIDMM_GLOBAL@@QEAAJPEBVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x140125168 (-VidMmProbeForDecommit@VIDMM_GLOBAL@@QEAAJPEBVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_T.c)
 */

__int64 __fastcall VidMmProbeForDecommit(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4)
{
  __int64 v4; // rax
  const struct VIDMM_PROCESS *v5; // rdx

  v4 = *(_QWORD *)(a2 + 64);
  v5 = 0LL;
  if ( v4 )
    v5 = *(const struct VIDMM_PROCESS **)(v4 + 8);
  return VIDMM_GLOBAL::VidMmProbeForDecommit(a1, v5, a3, a4);
}
