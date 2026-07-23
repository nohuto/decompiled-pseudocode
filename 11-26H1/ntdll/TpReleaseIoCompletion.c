/*
 * XREFs of TpReleaseIoCompletion @ 0x1800C7200
 * Callers:
 *     <none>
 * Callees:
 *     TppIopValidateIo @ 0x1800C7260 (TppIopValidateIo.c)
 *     TppCleanupGroupMemberRelease @ 0x1800C7300 (TppCleanupGroupMemberRelease.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl TpReleaseIoCompletion(PTP_IO Io)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppIopValidateIo(Io, 1LL) && (unsigned int)TppCleanupGroupMemberRelease(Io, 1LL) )
  {
    Io->CleanupGroupMember.ReleaseCaller.ReturnAddress = retaddr;
    if ( _InterlockedExchangeAdd(&Io->CleanupGroupMember.Refcount.Refcount, 0xFFFFFFFF) == 1 )
      Io->CleanupGroupMember.VFuncs->Free(&Io->CleanupGroupMember);
  }
}
