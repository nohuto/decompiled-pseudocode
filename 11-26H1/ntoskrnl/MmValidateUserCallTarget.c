/*
 * XREFs of MmValidateUserCallTarget @ 0x140B48CA8
 * Callers:
 *     MmCheckForSafeExecution @ 0x14087B208 (MmCheckForSafeExecution.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     MiValidateUserCallTarget @ 0x140AA2AB4 (MiValidateUserCallTarget.c)
 */

__int64 __fastcall MmValidateUserCallTarget(unsigned __int64 a1, int a2)
{
  volatile _KAFFINITY_EX *ActiveProcessors; // rax

  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  if ( ActiveProcessors[5].StaticBitmap[8] )
    return MiValidateUserCallTarget(a1, (__int64)&ActiveProcessors[5].StaticBitmap[7] + (a2 != 0 ? 0x20 : 0));
  else
    return 1LL;
}
