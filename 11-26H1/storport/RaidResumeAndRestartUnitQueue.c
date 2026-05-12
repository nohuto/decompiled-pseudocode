/*
 * XREFs of RaidResumeAndRestartUnitQueue @ 0x1400A6948
 * Callers:
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A9E8C (RaidUnitTestDeviceQueue.c)
 * Callees:
 *     RaidResumeIoQueue @ 0x1400295D0 (RaidResumeIoQueue.c)
 *     RaidUnitRestartQueue @ 0x140029650 (RaidUnitRestartQueue.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     RaUnitUnlockForwardIo @ 0x1400429E0 (RaUnitUnlockForwardIo.c)
 */

__int64 __fastcall RaidResumeAndRestartUnitQueue(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int8 v4; // dl
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = (unsigned int)RaidResumeIoQueue(a1 + 704);
  RaUnitUnlockForwardIo(a1, 4);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    v4 = *(_BYTE *)(v3 + 56);
  else
    v4 = -1;
  if ( (qword_140172448 & 0x200) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      5,
      retaddr,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | (unsigned __int64)(((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104)) | (((unsigned __int8)*(_DWORD *)(a1 + 104) | (v4 << 8)) << 8)) << 8),
      *(int *)(a1 + 744),
      v2,
      0LL);
  if ( (_DWORD)v2 )
    RaidUnitRestartQueue(a1, 0);
  return (unsigned int)v2;
}
