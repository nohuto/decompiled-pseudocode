/*
 * XREFs of VidMmAdapterVerifierOption @ 0x14004D430
 * Callers:
 *     <none>
 * Callees:
 *     ?AdapterVerifierOption@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_ADAPTER_VERIFIER_OPTION_DATA@@@Z @ 0x1400A6A0C (-AdapterVerifierOption@VIDMM_GLOBAL@@QEAAJW4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_ADAPTER_VERI.c)
 */

int __fastcall VidMmAdapterVerifierOption(
        VIDMM_GLOBAL *a1,
        enum _D3DKMT_VERIFIER_OPTION_MODE a2,
        enum _D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE a3,
        union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA *a4)
{
  return VIDMM_GLOBAL::AdapterVerifierOption(a1, a2, a3, a4);
}
