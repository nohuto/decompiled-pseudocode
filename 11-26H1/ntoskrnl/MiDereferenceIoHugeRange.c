/*
 * XREFs of MiDereferenceIoHugeRange @ 0x1406EB388
 * Callers:
 *     MiDeleteStaleCacheMaps @ 0x1406F3AF0 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     MiIsPageInIoHugeRangeTransition @ 0x14031388C (MiIsPageInIoHugeRangeTransition.c)
 *     MiLockHugePfnAtDpc @ 0x140358C94 (MiLockHugePfnAtDpc.c)
 *     MiHugePfnPartition @ 0x14048E180 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x14048E66C (MiInsertHugeRangeInList.c)
 */

__int64 __fastcall MiDereferenceIoHugeRange(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  unsigned __int64 *v4; // rdi
  unsigned __int16 *v5; // rsi
  unsigned int v6; // r9d
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  result = MiIsPageInIoHugeRangeTransition(a1);
  if ( (_DWORD)result )
  {
    v3 = a1 >> 18;
    v4 = (unsigned __int64 *)(*(_QWORD *)((char *)&stru_140E2EB88.116 + 4) + 8 * (v3 & 0x3FFFFF));
    v7 = *v4;
    v5 = (unsigned __int16 *)MiHugePfnPartition(&v7);
    MiLockHugePfnAtDpc((__int64)v4);
    v6 = ((*v4 >> 15) & 0x1FF) - 1;
    *v4 = ((unsigned __int64)v6 << 15) ^ (*v4 ^ ((unsigned __int64)v6 << 15)) & 0xFFFFFFFFFF007FFFuLL;
    if ( !v6 )
      MiInsertHugeRangeInList(v5, v3, 10);
    result = *(_QWORD *)&stru_140E2EB88.SystemCallNumber;
    _InterlockedAnd(
      (volatile signed __int32 *)(*(_QWORD *)&stru_140E2EB88.SystemCallNumber
                                + 4
                                * (((((__int64)v4 - *(_QWORD *)((char *)&stru_140E2EB88.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << (((__int64)v4 - *(_QWORD *)((char *)&stru_140E2EB88.116 + 4)) >> 3)));
  }
  return result;
}
