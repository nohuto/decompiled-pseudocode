/*
 * XREFs of KeSaveSupervisorState @ 0x1405EF444
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1404A0758 (IopLiveDumpProcessCorralStateChange.c)
 *     IopLiveDumpCollectPages @ 0x1405D1168 (IopLiveDumpCollectPages.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KiFreezeTargetExecution @ 0x1405F8810 (KiFreezeTargetExecution.c)
 *     KdEnterDebugger @ 0x140C1D858 (KdEnterDebugger.c)
 * Callees:
 *     RtlXSaveS @ 0x1403D757C (RtlXSaveS.c)
 *     KiSaveIptState @ 0x1404F4AA0 (KiSaveIptState.c)
 */

void __fastcall KeSaveSupervisorState(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v4; // rdx

  if ( a1 )
  {
    v2 = a2;
    if ( (_DWORD)KiIptMsrMask && (a2 & 0x100) != 0 )
      KiSaveIptState((unsigned __int64 *)(a1
                                        + MEMORY[0xFFFFF78000000600]
                                        - (unsigned __int64)MEMORY[0xFFFFF780000003E8]
                                        + 64));
    if ( (KeFeatureBits & 0x800000) != 0 )
    {
      if ( KeEnabledSupervisorXStateFeatures )
      {
        v4 = KeEnabledSupervisorXStateFeatures & v2;
        *(_QWORD *)(a1 + 8) = KeEnabledSupervisorXStateFeatures & v2;
        RtlXSaveS(a1 - 512, v4);
      }
    }
  }
}
