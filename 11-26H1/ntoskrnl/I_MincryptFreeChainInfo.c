/*
 * XREFs of I_MincryptFreeChainInfo @ 0x1408AA068
 * Callers:
 *     PopValidateWinresume @ 0x1407D3AA4 (PopValidateWinresume.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 *     I_MincryptAddChainInfo @ 0x1408A9DB0 (I_MincryptAddChainInfo.c)
 *     MincryptFreePolicyInfo @ 0x1408AA088 (MincryptFreePolicyInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall I_MincryptFreeChainInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x72634943u);
}
