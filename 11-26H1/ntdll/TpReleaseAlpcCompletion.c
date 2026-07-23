/*
 * XREFs of TpReleaseAlpcCompletion @ 0x1800C70C0
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x1800C712C (TppAlpcpValidateAlpc.c)
 *     TppCleanupGroupMemberRelease @ 0x1800C7300 (TppCleanupGroupMemberRelease.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl TpReleaseAlpcCompletion(PTP_ALPC Alpc)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)TppAlpcpValidateAlpc(Alpc, 1LL, 0LL)
    && (unsigned int)TppCleanupGroupMemberRelease(&Alpc->CleanupGroupMember, 1LL) )
  {
    Alpc->CleanupGroupMember.ReleaseCaller.ReturnAddress = retaddr;
    if ( _InterlockedExchangeAdd(&Alpc->CleanupGroupMember.Refcount.Refcount, 0xFFFFFFFF) == 1 )
      Alpc->CleanupGroupMember.VFuncs->Free(&Alpc->CleanupGroupMember);
  }
}
