/*
 * XREFs of MiHotPatchAllProcesses @ 0x1408764F0
 * Callers:
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140877654 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiHotPatchProcess @ 0x1408765A8 (MiHotPatchProcess.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2, unsigned int a3)
{
  void *i; // rcx
  __int64 NextProcess; // rax
  void *v8; // rdi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  for ( i = 0LL; ; i = v8 )
  {
    NextProcess = PsGetNextProcess(i);
    v8 = (void *)NextProcess;
    if ( !NextProcess )
      break;
    if ( (*(_DWORD *)(NextProcess + 1532) & 0x1000) == 0
      && (*(_DWORD *)(NextProcess + 1532) & 1) == 0
      && !*(_QWORD *)(NextProcess + 1600) )
    {
      KeStackAttachProcess((PRKPROCESS)NextProcess, &ApcState);
      MiHotPatchProcess(
        v8,
        a1,
        a2,
        a3,
        ApcState.ApcListHead[0].Flink,
        ApcState.ApcListHead[0].Blink,
        ApcState.ApcListHead[1].Flink,
        ApcState.ApcListHead[1].Blink,
        ApcState.Process,
        *(_QWORD *)&ApcState.InProgressFlags);
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    }
  }
  return 0LL;
}
