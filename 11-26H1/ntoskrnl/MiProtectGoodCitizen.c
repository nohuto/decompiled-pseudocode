/*
 * XREFs of MiProtectGoodCitizen @ 0x140311404
 * Callers:
 *     MiProtectPrivateMemory @ 0x1403116B4 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402D49D0 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiProtectFlushPayload @ 0x140311488 (MiProtectFlushPayload.c)
 *     MiWorkingSetIsContended @ 0x1403182D0 (MiWorkingSetIsContended.c)
 */

void __fastcall MiProtectGoodCitizen(__int64 a1, int a2)
{
  unsigned __int64 v4; // rdx
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8

  MiProtectFlushPayload();
  v4 = *(_QWORD *)(a1 + 56);
  v5 = (__int64 *)(a1 + 8);
  if ( v4 )
  {
    MiUnlockPageTableInternal(*v5, v4);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  if ( a2 || (unsigned int)MiWorkingSetIsContended(*v5) || KeShouldYieldProcessor() )
  {
    LOBYTE(v4) = *(_BYTE *)(a1 + 16);
    MiUnlockWorkingSetShared(*v5, v4);
    if ( !a2 )
      MiLockWorkingSetShared(*v5, v6, v7);
  }
}
