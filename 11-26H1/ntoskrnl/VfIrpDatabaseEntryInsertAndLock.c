/*
 * XREFs of VfIrpDatabaseEntryInsertAndLock @ 0x140C3FCAC
 * Callers:
 *     VfPacketCreateAndLock @ 0x140C3F314 (VfPacketCreateAndLock.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14064BA3C (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14064BA84 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeAdd @ 0x140C27600 (VfUtilAddressRangeAdd.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140C4BF94 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfIrpDatabaseEntryInsertAndLock(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v4 = (_QWORD *)(a3 + 32);
  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 8) = 0LL;
  LOBYTE(v10) = 0;
  *(_DWORD *)(a3 + 20) = 1;
  *(_QWORD *)(a3 + 24) = 1LL;
  *(_QWORD *)(a3 + 40) = a3 + 32;
  *(_QWORD *)(a3 + 32) = a3 + 32;
  *(_QWORD *)(a3 + 48) = ViPacketNotificationCallback;
  ViIrpDatabaseAcquireLockExclusive((KIRQL *)&v10);
  v6 = 16LL * (unsigned __int8)(-125 * (a1 >> 12));
  v7 = (char *)ViIrpDatabase + v6;
  v8 = *(_QWORD *)((char *)ViIrpDatabase + v6);
  if ( *(PVOID *)(v8 + 8) != (char *)ViIrpDatabase + v6 )
    __fastfail(3u);
  v4[1] = v7;
  *v4 = v8;
  *(_QWORD *)(v8 + 8) = v4;
  *v7 = v4;
  VfUtilAddressRangeAdd((unsigned __int64 *)(v6 + ViIrpDatabaseAddressRanges), a1, 208LL);
  ViIrpDatabaseReleaseLockExclusive(v10);
  result = VfIrpDatabaseEntryFindAndLock(a1);
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 20));
  --*(_DWORD *)(a3 + 24);
  return result;
}
