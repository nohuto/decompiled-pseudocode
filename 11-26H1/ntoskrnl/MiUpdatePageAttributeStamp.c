/*
 * XREFs of MiUpdatePageAttributeStamp @ 0x1404C69C8
 * Callers:
 *     MiCopyHeaderIfResident @ 0x1404AE5F4 (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiDetermineModifiedPageListHead @ 0x140297EF0 (MiDetermineModifiedPageListHead.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1402AB91C (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiAcquirePageListLock @ 0x1402DD540 (MiAcquirePageListLock.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiReleasePageListLock @ 0x14036BCB0 (MiReleasePageListLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiUpdatePageAttributeStamp(unsigned __int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  char v4; // r8
  int PfnSlabType; // ebp
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  __int64 v8; // rdi
  __int64 SlabAllocatorRepurposedStandbyList; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-C8h] BYREF
  _BYTE v11[112]; // [rsp+30h] [rbp-98h] BYREF

  memset_0(v11, 0, 0x68uLL);
  if ( !(unsigned __int16)*(_DWORD *)(a1 + 32) )
  {
    v2 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    v3 = *(_QWORD *)(v2 + 8LL * (*(_BYTE *)(a1 + 34) & 7) + 7520);
    PfnSlabType = MiGetPfnSlabType(a1);
    if ( (v4 & 7) == 2 )
    {
      if ( (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
      {
        _InterlockedOr(v10, 0);
        *(_QWORD *)(a1 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
        return;
      }
      if ( PfnSlabType < 9 && (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
      {
        SlabAllocatorRepurposedStandbyList = MiGetSlabAllocatorRepurposedStandbyList(a1, PfnSlabType, 0);
LABEL_25:
        v3 = SlabAllocatorRepurposedStandbyList;
        goto LABEL_10;
      }
      v6 = *(_DWORD *)(a1 + 32);
      if ( (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0
        || (*(_DWORD *)(a1 + 32) & 0x8000000) != 0
        && (a1 < 0xFFFFDE0000000000uLL
         || a1 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
         || MiIsDecayPfn((__int64)(a1 + 0x220000000000LL) / 48)
         || (v6 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(a1) == 9) )
      {
        v7 = 5;
      }
      else
      {
        v7 = HIBYTE(v6) & 7;
      }
      v8 = 88LL * v7 + 3648;
    }
    else
    {
      if ( *(_DWORD *)(v3 + 28) != 3 )
        goto LABEL_10;
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
      {
        SlabAllocatorRepurposedStandbyList = MiDetermineModifiedPageListHead(a1, v2, 0);
        goto LABEL_25;
      }
      v8 = 88LL * (unsigned int)MiPageToNode((a1 + 0x220000000000LL) / 0x30) + 6016;
    }
    v3 = v2 + v8;
LABEL_10:
    MiAcquirePageListLock(v3, a1, (unsigned int)PfnSlabType, 1, (__int64)v11);
    _InterlockedOr(v10, 0);
    *(_QWORD *)(a1 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
    MiReleasePageListLock(v3, (__int64)v11);
  }
}
