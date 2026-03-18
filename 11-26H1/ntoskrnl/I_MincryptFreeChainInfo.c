/*
 * XREFs of I_MincryptFreeChainInfo @ 0x1408A3C58
 * Callers:
 *     PopValidateWinresume @ 0x1407D0A04 (PopValidateWinresume.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A2AC4 (MinCrypK_VerifySignedDataKModeEx.c)
 *     I_MincryptAddChainInfo @ 0x1408A39A0 (I_MincryptAddChainInfo.c)
 *     MincryptFreePolicyInfo @ 0x1408A3C78 (MincryptFreePolicyInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall I_MincryptFreeChainInfo(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x72634943u);
}
