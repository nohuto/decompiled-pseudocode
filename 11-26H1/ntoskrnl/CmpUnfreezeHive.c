/*
 * XREFs of CmpUnfreezeHive @ 0x14077B2EC
 * Callers:
 *     CmpIsHiveAlreadyLoaded @ 0x14085905C (CmpIsHiveAlreadyLoaded.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140446E30 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14044EE20 (CmpInitializeDelayDerefContext.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C3970 (CmpDereferenceKeyControlBlockWithLock.c)
 */

void __fastcall CmpUnfreezeHive(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  CmpInitializeDelayDerefContext(&v3);
  v2 = *(_QWORD *)(a1 + 2944);
  *(_BYTE *)(a1 + 2952) = 0;
  if ( v2 )
  {
    CmpDereferenceKeyControlBlockWithLock(v2);
    *(_QWORD *)(a1 + 2944) = 0LL;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v3);
}
