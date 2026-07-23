/*
 * XREFs of CmpUnfreezeHive @ 0x14077DF2C
 * Callers:
 *     CmpIsHiveAlreadyLoaded @ 0x14085F3EC (CmpIsHiveAlreadyLoaded.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140446F50 (CmpInitializeDelayDerefContext.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40 (CmpDereferenceKeyControlBlockWithLock.c)
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
