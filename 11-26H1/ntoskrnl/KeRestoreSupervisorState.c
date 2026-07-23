/*
 * XREFs of KeRestoreSupervisorState @ 0x1405EF3C0
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1404A0758 (IopLiveDumpProcessCorralStateChange.c)
 *     KiFreezeTargetExecution @ 0x1405F8810 (KiFreezeTargetExecution.c)
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 * Callees:
 *     RtlXRestoreS @ 0x1403D7DE0 (RtlXRestoreS.c)
 *     KiRestoreIptState @ 0x1404ECDEC (KiRestoreIptState.c)
 */

unsigned __int64 __fastcall KeRestoreSupervisorState(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r9
  unsigned __int64 result; // rax

  v2 = a1;
  if ( a1 )
  {
    v3 = a2 & 0x100;
    if ( (KeFeatureBits & 0x800000) != 0 && KeEnabledSupervisorXStateFeatures )
      result = RtlXRestoreS(a1 - 512, a2 & KeEnabledSupervisorXStateFeatures);
    if ( (_DWORD)KiIptMsrMask )
    {
      if ( v3 )
        return KiRestoreIptState((unsigned __int64 *)(v2
                                                    + 64
                                                    + MEMORY[0xFFFFF78000000600]
                                                    - (unsigned __int64)MEMORY[0xFFFFF780000003E8]));
    }
  }
  return result;
}
