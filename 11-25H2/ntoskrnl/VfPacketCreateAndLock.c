/*
 * XREFs of VfPacketCreateAndLock @ 0x140B8B450
 * Callers:
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 *     VfIoAllocateIrp2 @ 0x140B7DE3C (VfIoAllocateIrp2.c)
 *     ViIrpAllocateLockedPacket @ 0x140B7E0DC (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     IovIsDisabledWithoutReboot @ 0x14059F88C (IovIsDisabledWithoutReboot.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140B93F30 (VfIrpDatabaseEntryInsertAndLock.c)
 */

_DWORD *__fastcall VfPacketCreateAndLock(__int64 a1)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  _DWORD *v4; // rbx

  if ( IovIsDisabledWithoutReboot() )
    return 0LL;
  v2 = ExAllocateFromNPagedLookasideList(&ViPacketLookaside);
  v4 = v2;
  if ( !v2 )
    return 0LL;
  _InterlockedIncrement(&ViPacketCount);
  v2[14] = 0;
  *((_QWORD *)v2 + 9) = v2 + 16;
  *((_QWORD *)v2 + 8) = v2 + 16;
  *((_BYTE *)v2 + 80) = *(_BYTE *)(a1 + 66);
  *((_QWORD *)v2 + 12) = 0LL;
  *((_BYTE *)v2 + 104) = 0;
  *((_QWORD *)v2 + 14) = 0LL;
  *((_WORD *)v2 + 92) = 0;
  *((_BYTE *)v2 + 186) = 0;
  v2[47] = 0;
  *((_QWORD *)v2 + 30) = 0LL;
  v2[21] = 0;
  *((_QWORD *)v2 + 11) = 0LL;
  *((_QWORD *)v2 + 24) = 0LL;
  *((_QWORD *)v2 + 25) = 0LL;
  v2[52] = 0;
  *((_QWORD *)v2 + 27) = 0LL;
  *((_QWORD *)v2 + 31) = 0LL;
  *((_QWORD *)v2 + 28) = 0LL;
  v2[58] = MmVerifierData;
  VfIrpDatabaseEntryInsertAndLock(a1, v3, v2);
  return v4;
}
